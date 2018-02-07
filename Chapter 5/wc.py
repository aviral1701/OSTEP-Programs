#!/usr/bin/env python
#word couting program
import sys

def main():
	if(len(sys.argv)>1):
		filename = sys.argv[1]
		r = open(str(filename),'r')
		text = r.read()
		r.close()
		wordlist = text.split()
		return len(wordlist)
	else:	
		exit()

print(main())

