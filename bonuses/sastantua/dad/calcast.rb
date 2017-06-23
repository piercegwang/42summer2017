#!/usr/bin/ruby

input = ARGV[0].to_i #Input format level
def calcLines(y) #Find total lines
	@x = y
	@totalLines = 0
	@tierNumLines = 3
	while @x > 0
		@totalLines += @tierNumLines
		@tierNumLines += 1
		@x -= 1
	end
	return @totalLines
end

def numberAstr(line)
	@regAstr = 2*(line-1)+1
	@x = line
	@totalLines = 0
	@tierNumLines = 3
	while @x > 0
		#use counter for finding the extra astr value for each line
		#have total astr variable to keep track of all the total astr needed
end

#Main function
def pyramid(x)
	puts numberAstr(calcLines(x))
end
pyramid(input)
