#!/usr/bin/ruby

input = [2, 8, 9, 48, 8, 22, -12, 2]
newarray = []
input.each do |x|
	if x>5
		newarray.push(x)
	end
end
print input
print "\n"
print newarray
