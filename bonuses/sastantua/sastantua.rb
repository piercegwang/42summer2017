#!/usr/bin/ruby

total = ARGV[0]
pyramidsize = 3
whitespace = 
pyramids = Array.new
if total == 0
	print "none\n"
else
	countp = 1
	for countp [1,total]
		if countp
