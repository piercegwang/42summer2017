#!/usr/bin/ruby

input = ARGV
if input.count == 2
	times = input[1].scan(input[0])
	if times.count == 0
		puts "none"
	else
		puts times.count
	end
else
	puts "none"
end
