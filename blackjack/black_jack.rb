#!/usr/bin/ruby

def black_jack_hand(hand)
	sum = 0
	rem_a = []
	as = []
	values = { "2" => 2, "3" => 3, "4" => 4, "5" => 5, "6" => 6, "7" => 7, "8" => 8, "9" => 9, "T" => 10, "J" => 10, "D" => 10, "K" => 10}
	splithand = hand.split('')
	splithand.each do |x|
		if x != "A"
			rem_a.push(x)
		else
			as.push(x)
		end
	end
	rem_a.each {|y| sum += values[y] }
	as.each do |z|
		if sum > 21
			sum += 11
		else
			sum += 1
		end
	end
	puts sum
end

black_jack_hand("AAT")
