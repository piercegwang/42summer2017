#!/usr/bin/ruby

def greetings(*str)
	if str[0].is_a? String and str[0] != ""
		print "Hello, #{str[0]}.\n"
	elsif str == []
		print "Hello, noble stranger.\n"
	else
		print "Error! That doesn't sound like a name.\n"
	end
end

greetings("lucie")
greetings()
greetings(22)
