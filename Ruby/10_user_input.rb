# user input in ruby

=begin 
    gets : takes the input and goes to the next line.
    gets.chomp : avoid to go on next line.
=end

puts "What is your name ?"
name = gets
puts "Hello #{name}, How are you."

puts "What's your age?"
age = gets.chomp
puts "Your age : #{age}, that's old!"

# adding two number program 

puts "Enter first number : "
a = gets.chomp      # it treated as string by default
puts "Enter second number : "
b = gets.chomp

puts a + b      # it will join number like : "2" + "4" = "24"
puts a.to_i + b.to_i    # it will add the value like : 2 + 4 = 6
