#!/usr/bin/ruby

def great_births(x)
	names = []
	x.each {|k,v| names.push(v)}
	names.sort_by! { |hash| hash[:year_of_birth] }
	#puts names
	names.each do |p|
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
