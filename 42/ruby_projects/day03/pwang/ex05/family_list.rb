#!/usr/bin/ruby
name = ""
relat = ""
family = {}
while(name!="DONE")
	print "Hello, what is someone's name?: "
	name = gets.chomp.to_s
	if name == "DONE"
		break
	end
	print "And who is that person to you?: "
	relat = gets.chomp.to_s.to_sym
	family.merge!(name=>relat)
end
print "\nCool, here is your family!\n"
print family
