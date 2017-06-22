#!/usr/bin/ruby

args = ARGV.map { |arg| arg.downcase}
vowels = ['a', 'e', 'i', 'o', 'u']
way = "-"
if args == []
   print "none\n"
else
	args.each do |word|
		fvowel = word.length
		word.length.times do |index|
			char = word[index]
			if vowels.include?(char)
				fvowel = index
				break
			end
		end
		if fvowel == 0 then way = "w" else way = "-" end
		new_word = "#{word[fvowel...word.length]}#{way}#{word[0...fvowel]}ay"
		puts new_word
	end
end
