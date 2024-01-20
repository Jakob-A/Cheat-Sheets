"""
This script will dump the contents of a file in binary format. 
The files are read in binary mode and the data is read byte by byte. 
Each byte is then converted to binary and printed to the screen. The script takes one argument, the file to dump.

Usage: python bytedump.py <file>

author: Jakob Arndt
date: 2023-03-16
"""
import sys

file = open(sys.argv[1], "rb")
data = file.read()

for byte in data:
    for bit in range(8, -1, -1):
        if byte & (1 << bit):
            print("\033[91m1\033[0m", end="")
        else:
            print("0", end="")

    print("", end="\n")
