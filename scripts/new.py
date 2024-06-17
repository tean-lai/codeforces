#!/usr/bin/env python3

import sys
import os


def copy(path1, path2):
    fin = open(path1, "r")
    fout = open(path2, "w")
    lines = fin.readlines()
    for line in lines:
        fout.write(line)
    fin.close()
    fout.close()


filename = sys.argv[1] + ".cpp"
folders = ["current", "revisit", "solved", "unsolved"]

exists = False
for folder in folders:
    if os.path.exists("./" + folder + "/" + filename):
        exists = True

if exists:
    print(filename + " already exists")
    exit()
else:
    copy("./template.cpp", "./current/" + filename)
