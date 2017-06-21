#!/usr/bin/ruby

input = ARGV
if input == []
	print "none\n"
else
	input.each do |x|
		print x.reverse + "\n"
	end
end
