# arg1 <- his output
# arg2 <- correct output

import sys

assert(len(sys.argv) == 3)
hlines = [[int(x) for x in line.split()] for line in open(sys.argv[1])]
clines = [[int(x) for x in line.split()] for line in open(sys.argv[2])]

for line in hlines:
    line.sort()
for line in clines:
    line.sort()

if hlines == clines:
    print('OK')
    quit(0)
else:
    print('Zla odpoved')
    quit(1)

