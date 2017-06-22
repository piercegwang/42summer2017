#!/usr/bin/ruby
=begin
This program takes a command line input of a string that represents a blackjack hand, and then returns the value of the hand
=end

def black_jack_hand(hand)
	sum = 0
	a = false
	values = { "2" => 2, "3" => 3, "4" => 4, "5" => 5, "6" => 6, "7" => 7, "8" => 8, "9" => 9, "T" => 10, "J" => 10, "D" => 10, "K" => 10, "A" => 1} 
	#set default values of each card
	splithand = hand.split('') #split the hand into a workable array
	splithand.each do |x| 
		sum += values[x]
		if x == "A" then a = true end
	end
	#add cards all together with all aces counting as one first
	#now if I can add the rest of one ace, I will. Otherwise, return the sum.
	if sum <= 11 and a == true
		sum += 10
	end
	return sum.to_s + "\n"
end

print black_jack_hand(ARGV[0])
