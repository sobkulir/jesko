#!/usr/bin/python3

A = [ int(x) for x in input().split() ]
for i in range(2000):
 if i in A:
    print(i)
    quit()
