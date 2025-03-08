#Strings as Arrays

name = "Psoni"

puts name[0]
puts name[1]
puts name[2, 3]

puts name.include?"ps"
puts name.include?"soni"

puts name.split(" ")

puts name.gsub('s', 'S')        # replace all values
puts name.sub('s', 'S')         # replace only first character