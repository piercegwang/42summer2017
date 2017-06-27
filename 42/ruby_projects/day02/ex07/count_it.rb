#!/usr/bin/ruby

input = ARGV
inputl = input.length
print "parameters: #{inputl}"
input.each do |x|
	print "\n#{x.to_s}: #{x.to_s.length}"
end
print "\n"
