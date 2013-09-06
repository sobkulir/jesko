#!/usr/bin/python2.7
import re, os, sys, subprocess

# settings
memlimit=265000 # kB
timelimit=2000 # ms

# colors for pretty-printing
red, green, gray = '\033[1;31m', '\033[1;32m', '\033[0;37m'

# STEP 1: compile all solutions
result = os.system('make')
if result != 0:
  print red + 'Make failed.' + gray
  sys.exit(1)

# STEP 2: create a list of all the binaries we will be executing
solution_sources = filter( lambda x: x.startswith('sol-'), os.listdir('.') )

cpp_sources  = filter( lambda x: x.endswith('.cpp'),  solution_sources )
cc_sources   = filter( lambda x: x.endswith('.cc'),   solution_sources )
c_sources    = filter( lambda x: x.endswith('.c'),    solution_sources )
pas_sources  = filter( lambda x: x.endswith('.pas'),  solution_sources )

binaries = []
binaries += [ x+'.bin' for x in cpp_sources ]
binaries += [ x+'.bin' for x in cc_sources ]
binaries += [ x+'.bin' for x in c_sources ]
binaries += [ x+'.bin' for x in pas_sources ]

binaries = sorted(binaries)[::-1] # sort according to exp. score in descending order

for i,sol in enumerate(binaries): print chr(65+i) + ' -> ' + sol # assign letters to programs

# STEP 3: create a list of input files
inputs = sorted(filter( lambda x: x.endswith('.in'), os.listdir('.') ))
if len(sys.argv)>1: inputs = sys.argv[1:]

# helper function to parse tester output
paren = re.compile('\(.*\)')
def get(list,line):
  for row in list:
    if row.startswith(line):
      return paren.sub( '', row[ len(line) : ].strip() )
  return ''

# STEP 5: compile the wrapper

wrapper_source='../../../WRAPPER/wrapper-mj-x86.c'
tmp = subprocess.Popen('uname -m', shell=True, bufsize=8096, stdout=subprocess.PIPE, close_fds=True)
arch = tmp.stdout.read().strip()
if arch == 'x86_64': wrapper_source='../../../WRAPPER/wrapper-mj-amd64.c'

wrapper_binary='../../../WRAPPER/wrapper'
os.system('gcc -O2 -o '+wrapper_binary+' '+wrapper_source)

# STEP 4: test all solutions on all inputs

print 'input'.rjust(15),
for i in range(len(binaries)): print chr(65+i).rjust(11),
print gray

for input in inputs:
  label=input
  print label.ljust(15),
  sys.stdout.flush()
  for i,target in enumerate(binaries):
    if i == 0:
      output = input[:-3] + '.out'
    else:
      output = input[:-3] + '.out2'
    cmd=wrapper_binary+' -a2 -f -m'+str(memlimit)+' -t'+str(timelimit)+' -i'+input+' -o'+output+' -- ./'+target
    tmp = subprocess.Popen(cmd, shell=True, bufsize=8096, stderr=subprocess.PIPE, close_fds=True)
    res = tmp.stderr.readlines()
    error = get(res,'Errors: ')
    if error=='OK' and i != 0:
      ret = os.system('diff ' + input[:-3] + '.out ' + input[:-3] + '.out2 >/dev/null')
      if ret != 0: error = 'WA'
    msg = error + ': ' + get(res,'Time: ')
    if error=='OK':
      print green + msg.rjust(11),
    else:
      print red + msg.rjust(11),
    sys.stdout.flush()
  print gray

os.system('rm *.out2')
