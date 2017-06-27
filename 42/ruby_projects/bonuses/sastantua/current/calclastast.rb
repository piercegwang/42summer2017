#!/usr/bin/ruby
 
numPyramids = ARGV[0].to_i
numLines = 0
totalAsts = 0
extraAsts = 4
curExAsts = 4
regAsts = 0
for i in 1..numPyramids
	numLines += i+2
	if i%2 != 0 and i != 1
		curExAsts += 2
	elsif numPyramids == 1
		curExAsts = 0
	else
		curExAsts += 0
	end
end
print numLines
puts 
print curExAsts
puts
regAsts = 2*(numLines-1)+1
totalAsts = regAsts + curExAsts
print totalAsts
puts
