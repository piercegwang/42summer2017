#!/usr/bin/ruby
=begin
This program takes an input of the hash women_in_science and prints their names along with the date of their births. It does this by putting the values of the first hash in their own array then sorting them by their year of birth. Finally, it accesses them using the index and prints out the values along with the preset text
=end

def great_births(x)
	names = []
	x.each {|k,v| names.push(v)} #put values in seperate array, x
	print names
	print "\n"
	names.sort_by! { |hash| hash[:year_of_birth] } #sort values of array, x, by the symbol :year_of_birth
	names.each do |p| #print each name and birth year with preset text
		print "#{p[:name].to_s} is a great person born in #{p[:year_of_birth].to_s}.\n"
	end
end

women_in_science = {
	:ada => { :name => "Ada Lovelace", :year_of_birth => "1815" },
	:cecilia => { :name => "Cecila Payne", :year_of_birth => "1900" },
	:lise => { :name => "Lise Meitner", :year_of_birth => "1878" },
	:grace => { :name => "Grace Hopper", :year_of_birth => "1906" }
}

great_births(women_in_science)
