#!/usr/bin/ruby

print "What you gotta say?: "
input = gets.chomp
while input != "STOP!"
	print "I got that! Anything else?: "
	input = gets.chomp
end
