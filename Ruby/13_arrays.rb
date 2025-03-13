=begin
    two way to create array in ruby
    - via Class => `Array.new`
    - literal array => `[10,9,34,5]`

    arrays can have mixed data types.
=end

arr_1 = [0, 1.0, "Two", true]       # Literal array
puts arr_1

arr_2 = Array.new[5, "Hello"]       # Class array (it will create array of hello 5 times)
puts arr_2      # it will next line for every array index
print arr_2     # it will print normally

puts arr_1.size #4
puts arr_2.length  #5
