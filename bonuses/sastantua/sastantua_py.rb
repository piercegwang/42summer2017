#!/usr/bin/ruby

size = ARGV[0].to_i

heights = []
sup_stars = [0,4,4]
for i in 0..size
	heights.push(3+i)
end
tot = 4
i = 2
while(i<size)
	if i>1 and (i+1) % 2
		tot += 2
	end
	sup_stars.push(tot)
	i+=1
end

def get_line_len(floor, line)
	tot = 0
	if floor >0
		tot += get_line_len(floor -1, heights[floor-1]-1)
		tot += 2*(line+1)
		tot += sup_stars[floor]
		return tot
	else
		return 3+2*line
	end
end

floor = 0
maxlen=get_line_len(size-1,heights[size-1])
while floor<size
	line = 0
	print "begin floor \n"
	while line < heights[floor] 
		linelen = get_line_len(floor,line)
		print "Length: #{linelen.to_s}, supstars: #{sup_stars[floor].to_s}\n"
	end
	floor += 1
	print 'end floor\n'
end
