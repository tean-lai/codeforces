#!/usr/bin/env python3
import sys
import os

filename = "./current/" + sys.argv[1] + ".cpp"
os.system(
    "g++ -Wall -Wextra -Wconversion -static -O2 -std=c++20 -o main %s" % filename)
os.system("./main < input.txt")
