# String method with bang
# Bang (!) will modify the original object.

text = "Hello, world"

puts "upcase: " + text.upcase       # It not modify original string
puts "original: " + text

text2 = "praween soni"

puts "upcase: " + text2.upcase!     # It modify original string (Bang operator)
puts "original: " + text2