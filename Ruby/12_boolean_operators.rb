=begin 
    Boolean Operators
    ==  equal to
    && and 
    || or
    ! not
=end

puts = (1 == 1) && ("R" == "R")     #true
puts = (10 == 10) && true           #true
puts = (10 != 10) && (2 == 2)     #false
puts = (10 != 10) && (2 == 2)     #false

puts = (1 != 1) || ("R" == "R")     #true
puts = (10 == 10) || false          #true
puts = (10 != 10) || (2 != 2)     #false

puts !true