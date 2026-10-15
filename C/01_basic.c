/*
===============================================================================
1. PROBLEM SOLVING USING COMPUTERS
===============================================================================

Problem solving means understanding a problem, deciding a logical step-by-step
solution, and then implementing and testing that solution using a computer.

Common stages:
1. Define/understand the problem.
2. Identify inputs, required outputs, and constraints.
3. Design the solution using an algorithm, flowchart, or pseudocode.
4. Write the program in a programming language such as C.
5. Compile and remove syntax errors.
6. Test the program with normal, boundary, and invalid inputs.
7. Debug errors and maintain/improve the program.

ALGORITHM
---------
An algorithm is a finite, ordered set of clear instructions to solve a problem.
Main characteristics:
- Input: accepts zero or more well-defined inputs.
- Output: produces at least one result.
- Definiteness: every step is clear and unambiguous.
- Finiteness: it terminates after a finite number of steps.
- Effectiveness: each step is practical and executable.

Example algorithm: add two numbers
1. START
2. Read A and B
3. SUM = A + B
4. Display SUM
5. STOP

FLOWCHART
----------
A flowchart represents the logic of an algorithm using standard symbols.
- Oval: Start / Stop (terminator).
- Parallelogram: Input / Output.
- Rectangle: Processing/calculation, e.g. SUM = A + B.
- Diamond: Decision, e.g. A > B?
- Arrow: direction/sequence of execution.
- Small circle: connector, used to connect flow lines.

Text form of the addition flowchart:
 (OVAL) Start
     |
 (PARALLELOGRAM) Input A, B
     |
 (RECTANGLE) SUM = A + B
     |
 (PARALLELOGRAM) Print SUM
     |
 (OVAL) Stop

PSEUDOCODE
----------
Pseudocode describes logic in simple, language-independent statements. It is
not required to follow the exact syntax of C or any other language.

BEGIN
    INPUT A, B
    SUM <- A + B
    OUTPUT SUM
END

Example algorithm: find the largest of three numbers A, B, and C
1. START
2. Read A, B, and C
3. If A >= B and A >= C, set LARGEST = A
4. Otherwise, if B >= A and B >= C, set LARGEST = B
5. Otherwise, set LARGEST = C
6. Display LARGEST
7. STOP

Pseudocode to find the largest of three numbers:
BEGIN
    INPUT A, B, C
    IF A >= B AND A >= C THEN
        LARGEST <- A
    ELSE IF B >= A AND B >= C THEN
        LARGEST <- B
    ELSE
        LARGEST <- C
    END IF
    OUTPUT LARGEST
END

Text form of the largest-of-three flowchart:
 (OVAL) Start -> (PARALLELOGRAM) Input A, B, C
       -> (DIAMOND) A >= B AND A >= C?
           YES -> (RECTANGLE) LARGEST = A ----+
           NO  -> (DIAMOND) B >= A AND B >= C?  |
                    YES -> (RECTANGLE) LARGEST = B
                    NO  -> (RECTANGLE) LARGEST = C
       -> (PARALLELOGRAM) Print LARGEST -> (OVAL) Stop

Algorithm vs flowchart vs pseudocode:
- Algorithm: logical steps written as numbered statements or plain language.
- Flowchart: the steps are represented visually with symbols and arrows.
- Pseudocode: the steps are written in a structured, code-like format.

===============================================================================
2. INTRODUCTION TO C AND STRUCTURE OF A C PROGRAM
===============================================================================

C is a general-purpose, procedural, compiled programming language. It supports
structured programming, functions, pointers, and direct manipulation of data.
It is commonly used in system software, embedded systems, and general programs.

A typical C program contains:
1. Comments/documentation.
2. Preprocessor directives, e.g. #include <stdio.h>.
3. Global declarations/constants (optional).
4. The main() function, where program execution begins.
5. Local declarations and executable statements.
6. A return statement, commonly return 0 for successful completion.

Example structure:
    #include <stdio.h>
    int main(void)
    {
        printf("Hello, World!\\n");
        return 0;
    }

===============================================================================
3. KEYWORDS, IDENTIFIERS, CONSTANTS, VARIABLES, AND DATA TYPES
===============================================================================

KEYWORDS
--------
Keywords are reserved words with predefined meanings in C. They cannot be used
as ordinary variable or function names.
The traditional 32 keywords commonly taught at the introductory level are:
    auto, break, case, char, const, continue, default, do, double, else,
    enum, extern, float, for, goto, if, int, long, register, return, short,
    signed, sizeof, static, struct, switch, typedef, union, unsigned, void,
    volatile, while
Modern C standards have additional keywords; use the list prescribed by your
course/compiler standard if the question asks for every standard's keywords.

IDENTIFIERS
-----------
Identifiers are programmer-defined names for variables, functions, arrays, etc.
Rules:
- They can contain letters, digits, and underscore (_).
- They must not start with a digit.
- They cannot contain spaces or symbols such as @, #, or -.
- They must not be a reserved keyword.
- C is case-sensitive: total, Total, and TOTAL are different identifiers.
Valid: total, marks1, _count, student_name
Invalid: 1marks, student-name, first name, int (keyword)

CONSTANTS
---------
A constant is a value that is not intended to change during the relevant use.
Examples:
- Integer constant: 25, -8
- Floating-point constant: 3.14, 2.5f
- Character constant: 'A', '7' (single quotes)
- String literal: "Hello" (double quotes)
- Named constant using const: const double PI = 3.14159;
- Macro constant: #define MAX_MARKS 100

VARIABLES
---------
A variable is a named memory location used to store a value that may change.
Declaration:   int age;
Initialization: int age = 20;
Assignment:    age = 21;
General syntax: data_type variable_name [= initial_value];

BASIC DATA TYPES
----------------
- char: character/small integer type; print with %c.
- int: integer; print with %d.
- float: single-precision floating-point type; print with %f.
- double: double-precision floating-point type; print with %f in printf.
- void: represents no value/type, often used for a function with no return value.

Type modifiers include signed, unsigned, short, and long where permitted.
Derived/user-defined types include arrays, pointers, functions, structures,
unions, and enumerations.

IMPORTANT: exact type sizes are implementation-dependent. Use sizeof(type)
to inspect sizes on your compiler; do not assume int is always exactly 4 bytes.

===============================================================================
4. INPUT AND OUTPUT STATEMENTS
===============================================================================

printf() displays formatted output. scanf() reads formatted input.
Both are declared in <stdio.h>.

Common format specifiers:
    %d   int
    %u   unsigned int
    %ld  long int
    %lld long long int
    %f   float input in scanf; floating-point output in printf
    %lf  double input in scanf
    %c   char
    %s   character string (word)
    %zu  result of sizeof (size_t)

Examples:
    int age;
    scanf("%d", &age);       // & gives scanf the variable's address
    printf("Age = %d\\n", age);

For scanf("%lf", &value), value must be a double. For a character array used
with %s, the array name is passed without &: scanf("%49s", name).
Always check scanf's return value in robust programs.

Escape sequences:
    \\n = new line; \\t = tab; \\" = double quote; \\\\ = backslash.

===============================================================================
5. OPERATORS AND EXPRESSIONS
===============================================================================

An operator performs an operation. An operand is the value/variable on which it
operates. An expression combines operands and operators and produces a value.

ARITHMETIC OPERATORS
    + addition, - subtraction, * multiplication, / division, % remainder.
If both operands of / are integers, the fractional part is discarded: 5 / 2 = 2.
For floating-point division use 5.0 / 2 or (float)5 / 2 = 2.5.
The % operator is used with integer operands.

ASSIGNMENT OPERATORS
    =, +=, -=, *=, /=, %=, &=, |=, ^=, <<=, >>=
Example: x += 3 means x = x + 3. The expression x = 3 assigns; x == 3 compares.
Compound assignment updates the variable on its left-hand side.

RELATIONAL OPERATORS
    <, >, <=, >=, ==, !=
They compare values and produce 1 for true or 0 for false in C expressions.

LOGICAL OPERATORS
    && logical AND, || logical OR, ! logical NOT.
They treat zero as false and non-zero as true; logical results are 0 or 1.
&& and || short-circuit: the right operand may not be evaluated when the left
operand already decides the result.

INCREMENT / DECREMENT
    ++ increases by 1; -- decreases by 1.
    ++x / --x: prefix, change the value first, then produce the new value.
    x++ / x--: postfix, produce the old value, then change the variable.
Avoid changing the same variable more than once in a single expression; such
expressions may have undefined or otherwise unsafe evaluation behavior.

BITWISE OPERATORS (operate on integer representations)
    & AND, | OR, ^ XOR, ~ one's complement, << left shift, >> right shift.
For example, 5 is 0101 and 3 is 0011 in four-bit notation:
    5 & 3 = 1  (0001)
    5 | 3 = 7  (0111)
    5 ^ 3 = 6  (0110)
    5 << 1 = 10 for this positive value
    5 >> 1 = 2 for this positive value
~ flips bits in the integer representation; its decimal result depends on the
integer type/representation, so understand the bit operation rather than
memorizing a universal decimal result.

TERNARY / CONDITIONAL OPERATOR
    condition ? expression_if_true : expression_if_false
It is a compact alternative for choosing between two expressions.
Example: max = (a > b) ? a : b;

TYPE CONVERSION
    Implicit conversion: performed automatically by C when required.
    Explicit conversion (cast): the programmer requests a conversion.
Example:
    int a = 5, b = 2;
    a / b          gives 2 (integer division)
    (float)a / b   gives 2.5 (floating-point division)
Be mindful that converting a floating-point value to int discards its
fractional part toward zero; e.g. (int)3.9 gives 3.

PRECEDENCE AND ASSOCIATIVITY
Precedence determines which operator groups more tightly. Associativity tells
how operators of the same precedence group in the absence of parentheses.
High-to-low summary (operators on one row share a precedence level):
1. Postfix: function call (), array [], member . and ->, postfix ++ -- (L to R)
2. Unary: ++ -- + - ! ~ (type) * & sizeof (R to L)
3. Multiplicative: * / % (L to R)
4. Additive: + - (L to R)
5. Shift: << >> (L to R)
6. Relational: < <= > >= (L to R)
7. Equality: == != (L to R)
8. Bitwise AND: & (L to R)
9. Bitwise XOR: ^ (L to R)
10. Bitwise OR: | (L to R)
11. Logical AND: && (L to R)
12. Logical OR: || (L to R)
13. Conditional: ?: (R to L)
14. Assignment: =, +=, -=, *=, /=, %=, etc. (R to L)
15. Comma: , (L to R)

L to R = left-to-right associativity; R to L = right-to-left associativity.
Precedence/associativity do NOT mean every operand is evaluated in that order.
Use parentheses to make complex expressions clearer.
Examples:
    2 + 3 * 4       = 14 because * has higher precedence than +
    (2 + 3) * 4     = 20 because parentheses are evaluated first
    20 / 5 * 2      = 8 because / and * have equal precedence and associate L to R
    a = b = 10      assigns 10 to b, then assigns b's value to a (R to L)

===============================================================================
6. PRACTICE PROGRAMS / ILLUSTRATIONS
===============================================================================
The executable program below demonstrates variables, basic data types, input /
output, assignment, relational/logical, increment/decrement, bitwise, ternary,
conversion, and precedence/associativity examples.
===============================================================================
*/

#include <stdio.h>

#define COURSE_NAME "MCA Unit I - C Programming"

int main(void)
{
    /* CONSTANT: a const object cannot be reassigned through this identifier. */
    const double PI = 3.14159;

    /* VARIABLES: declaration and initialization. */
    int numberA = 10;
    int numberB = 3;
    char grade = 'A';
    float percentage = 87.5f;
    double average = 86.75;

    printf("==================================================\n");
    printf("%s\n", COURSE_NAME);
    printf("==================================================\n\n");

    /* BASIC DATA TYPES: the sizeof operator reports sizes for this compiler. */
    printf("1. BASIC DATA TYPES AND CONSTANTS\n");
    printf("int example: %d\n", numberA);
    printf("char example: %c\n", grade);
    printf("float example: %.2f\n", percentage);
    printf("double example: %.2f\n", average);
    printf("Named constant PI: %.5f\n", PI);
    printf("sizeof(char) = %zu byte(s)\n", sizeof(char));
    printf("sizeof(int) = %zu byte(s)\n", sizeof(int));
    printf("sizeof(float) = %zu byte(s)\n", sizeof(float));
    printf("sizeof(double) = %zu byte(s)\n\n", sizeof(double));

    /* INPUT / OUTPUT: scanf reads values; printf displays formatted output. */
    printf("2. INPUT AND OUTPUT\n");
    printf("Enter two integers separated by a space (example: 10 3): ");
    if (scanf("%d %d", &numberA, &numberB) != 2) {
        printf("Invalid input. Please enter two valid integers.\n");
        return 1;
    }

    printf("You entered A = %d and B = %d\n", numberA, numberB);
    printf("A + B = %d\n", numberA + numberB);
    printf("A - B = %d\n", numberA - numberB);
    printf("A * B = %d\n", numberA * numberB);
    if (numberB != 0) {
        printf("A / B (integer division) = %d\n", numberA / numberB);
        printf("A / B (floating-point division) = %.2f\n", (double)numberA / numberB);
        printf("A %% B (remainder) = %d\n", numberA % numberB);
    } else {
        printf("Division and remainder are skipped because B is zero.\n");
    }
    printf("\n");

    /* ASSIGNMENT OPERATORS: each compound operator updates the left variable. */
    printf("3. ASSIGNMENT OPERATORS\n");
    {
        int x = 10;
        printf("Starting x = %d\n", x);
        x += 5;  printf("After x += 5: x = %d\n", x);
        x -= 2;  printf("After x -= 2: x = %d\n", x);
        x *= 2;  printf("After x *= 2: x = %d\n", x);
        x /= 2;  printf("After x /= 2: x = %d\n", x);
        x %= 4;  printf("After x %%= 4: x = %d\n", x);
        printf("Remember: = assigns, while == compares two values.\n\n");
    }

    /* RELATIONAL OPERATORS return 1 (true) or 0 (false). */
    printf("4. RELATIONAL AND LOGICAL OPERATORS\n");
    {
        int a = 10;
        int b = 3;
        printf("a = %d, b = %d\n", a, b);
        printf("a > b  = %d\n", a > b);
        printf("a < b  = %d\n", a < b);
        printf("a == b = %d\n", a == b);
        printf("a != b = %d\n", a != b);
        printf("(a > 5) && (b < 5) = %d\n", (a > 5) && (b < 5));
        printf("(a < 5) || (b < 5) = %d\n", (a < 5) || (b < 5));
        printf("!(a > b) = %d\n\n", !(a > b));
    }

    /* PREFIX changes the value before it is used; POSTFIX uses old value first. */
    printf("5. INCREMENT AND DECREMENT OPERATORS\n");
    {
        int n = 5;
        printf("Initial n = %d\n", n);
        printf("Prefix ++n produces %d\n", ++n);   /* n becomes 6 first */
        n = 5;
        printf("Postfix n++ produces %d\n", n++);  /* produces 5; n becomes 6 */
        printf("After postfix n++, n = %d\n", n);
        printf("Prefix --n produces %d\n", --n);   /* n becomes 5 first */
        n = 5;
        printf("Postfix n-- produces %d\n", n--);  /* produces 5; n becomes 4 */
        printf("After postfix n--, n = %d\n\n", n);
    }

    /* BITWISE OPERATORS: 5 = 0101 and 3 = 0011 in four-bit notation. */
    printf("6. BITWISE OPERATORS\n");
    {
        int a = 5;
        int b = 3;
        printf("a = %d, b = %d (four-bit illustration: 0101 and 0011)\n", a, b);
        printf("a & b  (AND) = %d\n", a & b);  /* 0001 = 1 */
        printf("a | b  (OR)  = %d\n", a | b);  /* 0111 = 7 */
        printf("a ^ b  (XOR) = %d\n", a ^ b);  /* 0110 = 6 */
        printf("~a (complement) = %d; it flips every bit of the int representation\n", ~a);
        printf("a << 1 (left shift) = %d\n", a << 1);
        printf("a >> 1 (right shift) = %d\n\n", a >> 1);
    }

    /* TERNARY OPERATOR: condition ? result_if_true : result_if_false. */
    printf("7. TERNARY / CONDITIONAL OPERATOR\n");
    {
        int a = 14;
        int b = 9;
        int maximum = (a > b) ? a : b;
        printf("Maximum of %d and %d is %d\n\n", a, b, maximum);
    }

    /* TYPE CONVERSION: implicit conversion vs explicit cast. */
    printf("8. TYPE CONVERSION\n");
    {
        int a = 5;
        int b = 2;
        double c = 5.7;
        int converted = (int)c;  /* explicit cast: fractional part is discarded */
        double implicitConversion = a + 2.5; /* int a is converted for calculation */
        printf("a / b with integers = %d\n", a / b);
        printf("(double)a / b = %.2f\n", (double)a / b);
        printf("c = %.1f, (int)c = %d\n", c, converted);
        printf("a + 2.5 (implicit conversion) = %.2f\n\n", implicitConversion);
    }

    /* PRECEDENCE AND ASSOCIATIVITY: parentheses make intent clear. */
    printf("9. PRECEDENCE AND ASSOCIATIVITY\n");
    printf("2 + 3 * 4 = %d (multiplication first)\n", 2 + 3 * 4);
    printf("(2 + 3) * 4 = %d (parentheses first)\n", (2 + 3) * 4);
    printf("20 / 5 * 2 = %d (same precedence; left-to-right associativity)\n", 20 / 5 * 2);
    {
        int a;
        int b;
        a = b = 10; /* assignment associates right to left */
        printf("After a = b = 10: a = %d, b = %d\n", a, b);
    }

    return 0; /* 0 conventionally indicates successful program completion */
}
