#!/usr/bin/ruby

args = ARGV.map {|x| x.upcase}
def first_method(array)
	if array[0] == nil
		print "none\n"
	elsif array[0].length>10
		print "#{array[0]}\n"
	else
		print "nil\n"
	end
end
first_method(args)
