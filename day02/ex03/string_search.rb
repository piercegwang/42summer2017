#!/usr/bin/ruby

input = ARGV
string_searched = input[0].downcase.scan("z")
string_searched.each do |x|
	print x
end
