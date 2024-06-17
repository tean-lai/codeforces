#!/usr/bin/env python3
import os
import sys

filename = "./current/" + sys.argv[1] + ".cpp"
os.system("mv %s ./solved/" % filename)
