##!/usr/bin/env ruby

args = ARGV.map { |arg| arg.downcase}
vowels = ['a', 'e', 'i', 'o', 'u']
args.each do |word|
    first_char = word[0]
    if vowels.include?(first_char)
		new_word = word + "way"
    else
        new_word = word[1...word.length] + first_char + "ay"
    end
        puts new_word
end
