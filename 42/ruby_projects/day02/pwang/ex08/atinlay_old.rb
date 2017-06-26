#!/usr/bin/ruby

input = ARGV
consonants = ['q','w','r','t','y','p','s','d','f','g','h','j','k','l','z','x','c','v','b','n','m']
vowels = ['e','u','i','o','a']
newword = ""
isvowel = false
foundvowel = false
stopletter = ""
if input == []
	print "none"
else
	input.each do |x|
		isvowel = false
		foundvowel = false
		curword = x.downcase
		vowels.each do |vowel|
			if curword[0] == vowel
				print "#{curword} way"
				isvowel = true
				#Word starts with a vowel, break out of everything and print the changed word
				break
			end
		end
		if isvowel == true
			break
		else
			#Word starts with a consonant, start computing!
			curword.each do |letter|
				vowels.each do |vowel|
					counter = 0
					if letter == vowel
						stopletter = letter
						foundvowel = true
						print "\n#{curword[counter,-1]}ay"
						break
					else
						counter += 1
					end
				end
				if foundvowel == true
					break
				end
			end
		end
	end
end
