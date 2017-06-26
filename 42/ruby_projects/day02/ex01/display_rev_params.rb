#!/usr/bin/ruby

input = ARGV
if input == []
	print "none\n"
else
	input.reverse!
	input.each do |x|
		print x + "\n"
	end
end
