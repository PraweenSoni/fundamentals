# Arithmetic:
# +   -   *   /   ^   %%   %/%

# Relational:
# >   <   >=   <=   ==   !=

# Logical:
# &   |   !   &&   ||

# Assignment:
# <-   ->   =   <<-   ->>


a <- 5
b <- 10

print(a+b)
print(a-b)
print(a/b)
# print(a%b)
print(a%%b)
print(a%/%b)
print(a*b)

a + b
a - b
a * b
a / b
a ^ b
a %% b
a %/% b
# Note : R mein %/% quotient deta hai, while %% remainder deta hai.

# Relational Operators
print(a > b)
print(a < b)
print(a >= b)
print(a <= b)
print(a == b)
print(a != b)

# Logical Operators
print(a > 5 & b > 2)
print(a > 20 | b > 2)
print(!(a > b))

# ! — NOT
x <- TRUE
!x
# Output : FALSE

# Assignment Operators
100 -> x
y = 200
# preferred
z <- 300

print(x)
print(y)
print(z)


# & vs &&
x <- c(TRUE, FALSE, TRUE)
y <- c(TRUE, TRUE, FALSE)

x & y
# Output : TRUE FALSE FALSE

x && y
# Output : TRUE

# Summary : 
# & → element-wise AND
# && → first element only / short-circuit AND
# | → element-wise OR
# || → first element only / short-circuit OR

# Rare Things : <<- current environment ke bahar existing variable ko modify karne ke liye use hota hai, commonly functions/environments ke context mein.
x <- 10

my_function <- function() {
    x <<- 20
}

my_function()

print(x)
# Output : 20

# Same like : 
10 ->> x

print(x)
# Output : 10

# Question :
x <- 10
my_function <- function() {
    x <<- 20
}

my_function()

print(x)

11 -> x
print(x)
# Output : 
# [1] 20
# [1] 11
