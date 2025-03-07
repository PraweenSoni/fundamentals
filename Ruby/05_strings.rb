# Most used methods with strings

text = "HeLlo, Pks!"

puts "Upcase: " + text.upcase
puts "Downcase: " + text.downcase
puts "Capitalize: " + text.capitalize
puts "Reverse: " + text.reverse
puts "Length: #{text.length}"

puts "Original text: " + text   # Doing any operations original text hase been same.  

# Multi-line String with `""`
puts " 
hello,
Pks!,
this is multi-line."

# Multi-line String with `\n`
puts "This is a \nmulti-line string \nusing newline characters."


# Multi-line String with `%//`
puts %/This is
also multi-line/

# Multi-line String with `Explore it wan't works error:`
puts <<RANDOM_IDENTIFIER        # Error
in ruby there have 4 different ways to create  # Error
a multi-line string # Error
with easy steps. # Error
RANDOM_IDENTIFIER   # Error