#! /usr/bin/python

import os, sys

args = sys.argv
path = '.' if len(args)<2 else args[1]
exts = ['log', 'aux'] if len(args)<3 else args[2:]
exts = ['.'+x for x in exts]

while path.endswith('/'):
    path = path[:-1]

for r, d, f in os.walk(path):
    for file in f:
        for e in exts:
            if file.endswith(e):
                x = r+'/'+file
                print 'removing file', x
                os.remove(x)
                break

