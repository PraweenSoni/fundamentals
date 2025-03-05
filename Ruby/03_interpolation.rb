# String Interpolation
=begin
    addding variable to a string
=end

name = "pks"

puts "Hello, #{name}!"  # it add to a string value
puts "Hello, " + name + "!"  # method 2 : its also works
puts 'Hello, #{name}!'  # it Does not work in single quotes.

# output : Hello, pks!
#          Hello, pks!
#          Hello, #{name}!