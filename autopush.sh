#!/bin/bash

echo "Cleaning"
./clean.sh rm
git add -A && git commit && git push

