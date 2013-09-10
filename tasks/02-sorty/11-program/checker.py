# stdin <- input
# arg1 <- his output

import sys

assert(len(sys.argv) == 2)
n = int(input())
A = [int(x) for x in open(sys.argv[1]).read().split()]
if n < 3:
    if A == [-1]:
        print('OK')
        quit(0)
    else:
        print('Zla odpoved')
        quit(1)

if (n != len(A)):
    print('Zla dlzka postupnosti')
    quit(1)

for x in A:
    if (x < 1) or (x > 1000000):
        print('Zly rozsah cisel')
        quit(1)


for i in range(n-1):
    for j in range(i, n-1):
        if (A[j]>A[j+1]): 
            A[j], A[j+1] = A[j+1], A[j]

if not (A == sorted(A)):
    print('OK')
    quit(0)
else:
    print('Postupnost sa utriedila')
    quit(1)

