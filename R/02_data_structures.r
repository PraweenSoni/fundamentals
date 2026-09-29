# Vector - For same type elements
v <- c(1, 2, 3, 4)

# List - For diffrent types elements (You can mix)
l <- list(name = "Asha", age = 25, pass = TRUE)

# Matrix - 2D, All elements are store in same types
m <- matrix(1:6, nrow = 2, ncol = 3)

# Array - to store 2 or more dimensions
a <- array(1:24, dim = c(2, 3, 4))

# Factor - categorical data
f <- factor(c("low", "high", "medium", "low"))

# Data Frame - Table type, Can columns be of different types
df <- data.frame(
  name = c("Ravi", "Sita"),
  age  = c(22, 24),
  pass = c(TRUE, FALSE)
)

# 3. Special Values
# NULL: empty/undefined object
# NA: missing value
# NaN: Not a Number (jaise 0/0)
# Inf: infinity (jaise 1/0)

# Type check and conversion
class(x)          # to see types
typeof(x)         # internal storage type
is.numeric(x)     # TRUE/FALSE check

as.integer("12")  # character to integer
as.character(45)  # number to character
as.numeric("3.14")