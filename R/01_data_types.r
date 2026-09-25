# R Data Types

# 1. Numeric
# Used to store numbers, including decimal values
x <- 10.5

# 2. Character
# Used to store text or strings
x <- "Hello R"

# 3. Integer
# Used to store whole numbers
x <- 10L

# 4. Logical
# Used to store TRUE or FALSE values
x <- TRUE

# 5. Factor
# Used to store categorical data
x <- factor(c("Male", "Female"))

# 6. Date
# Used to store calendar dates
x <- as.Date("2026-09-25")

# 7. Complex
# Used to store complex numbers
x <- 2 + 3i

# 8. Raw
# Used to store raw bytes or binary data
x <- charToRaw("Hello")

# Tips :
# TO check data types use : 
typeof(x)
# "double"

class(x)
# "numeric"

# typeof() → R ke andar data kaise stored hai.
# class()  → R us object ko kis category mein treat karta hai.