#!/usr/bin/ruby

args = ARGV.map { |arg| arg.downcase}
vowels = ['a', 'e', 'i', 'o', 'u']
way = "-"
if args == []
	print "none\n"
else
	args.each do |word|
		first_vowel = word.length
		word.length.times do |index|
			if vowels.include?(word[index])
				first_vowel = index
				break
			end
		end
		if first_vowel == 0 then way = "w" end
		new_word = "#{word[first_vowel...word.length]}#{way}#{word[0...first_vowel]}ay"
		# if no hyphen needed, change initialization to empty string
		puts new_word
	end
end
