# Python Cheat Sheet

### get command line arguments

#### Using `sys` and `getopt` module
```Python
import sys
import getopt

len(sys.argv) # returns number of given arguments + 1 (sys.argv[0] is the script name)

sys.argv[1] # get first argument 

"""
parses optional parameter in tuples into the variable opts and the 
commandline arguments into args
Example: python test.py -x 1 -y 2 A B
        opts = [('-x',1), ('-y', 2)]
        args = ['A','B']
"""
opts, args = getopt.getopt(sys.argv[1:], 'x:y:')
```
#### Using `argparse`
[Doc](https://docs.python.org/3.7/library/argparse.html)
```Python
import argparse

# create parser
parser = argparse.ArgumentParser()
 
# add arguments to the parser
parser.add_argument("language")
parser.add_argument("name")
 
# parse the arguments
args = parser.parse_args()

# get arguments
args.language
args.name

```