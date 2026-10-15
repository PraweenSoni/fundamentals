#include <stdio.h>
#include <string.h>   /* for built-in string functions */

/*==========================================================================
  PART 1 : FUNCTIONS
==========================================================================
 THEORY:
 * A function is a named block of code that performs a specific task.
   Syntax:  return_type function_name(parameter_list) { body }

 * Three parts of a function:
   1. Declaration / Prototype : tells the compiler about the function
                                 e.g.  int add(int, int);
   2. Definition              : the actual code of the function
   3. Call                    : using the function, e.g.  add(5, 3);

 * BENEFITS OF FUNCTIONS (write 5-6 points in the exam):
   1. Code reusability  (write once, use many times)
   2. Modularity        (a big program is divided into small parts)
   3. Easy debugging and testing
   4. Smaller program size (no repetition of code)
   5. Better readability and easier maintenance
   6. Team work (different people can write different functions)

 * TYPES OF FUNCTIONS:
   A) Library (built-in) functions: printf, scanf, strlen, sqrt
      (already written and available in header files)
   B) User-defined functions: written by the programmer
   The 4 categories of user-defined functions:
     1. No argument, no return value   -> void f(void)
     2. Argument, no return value      -> void f(int a)
     3. No argument, return value      -> int f(void)
     4. Argument and return value      -> int f(int a)

 * PARAMETER PASSING:
   - Actual parameters : the values passed in the function call (in main)
   - Formal parameters : the variables in the function definition that
                         receive those values
   - CALL BY VALUE : a COPY of the value is passed to the function.
     Changes made inside the function do NOT affect the original variable.
     (C uses this method by default.)
   - Call by reference (using pointers) is covered in Unit IV. This unit
     only needs Call by Value, so it is mentioned here only for comparison.
==========================================================================*/

/* ---- Function prototypes (declarations) ---- */
void  greet(void);                 /* Type 1: no argument, no return value */
void  printSquare(int n);          /* Type 2: argument, no return value    */
int   getTen(void);                /* Type 3: no argument, return value    */
int   add(int a, int b);           /* Type 4: argument and return value    */
void  swapByValue(int a, int b);   /* call by value demo                   */
long  factorial(int n);            /* recursion                            */
int   fibonacci(int n);            /* recursion                            */
void  counterDemo(void);           /* storage class (static) demo          */

/* ---- Type 1: No argument, no return value ---- */
void greet(void) {
    printf("Hello! This is a function (no argument, no return value).\n");
}

/* ---- Type 2: Has argument, no return value ---- */
void printSquare(int n) {
    printf("Square of %d = %d\n", n, n * n);
}

/* ---- Type 3: No argument, has return value ---- */
int getTen(void) {
    return 10;
}

/* ---- Type 4: Argument and return value ---- */
int add(int a, int b) {           /* a, b are formal parameters */
    return a + b;
}

/* ---- CALL BY VALUE ----
   Copies of x and y are passed into a and b. The swap happens only on
   the copies, so x and y in main() remain unchanged.                    */
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("  Inside function  : a=%d, b=%d (swapped copy)\n", a, b);
}

/*==========================================================================
  RECURSION
==========================================================================
 THEORY:
 * Recursion means a function calls itself.
 * Every recursive function needs 2 things:
     1. BASE CONDITION  (where the recursion stops) - otherwise it never ends
     2. RECURSIVE CALL  (calls itself with a smaller version of the problem)
 * Recursion uses stack memory (each call creates a stack frame).
 * Advantages   : short and clean code (factorial, fibonacci, tower of hanoi)
 * Disadvantages: uses more memory, slower than loops, risk of stack overflow
==========================================================================*/
long factorial(int n) {
    if (n == 0 || n == 1)        /* base condition */
        return 1;
    return n * factorial(n - 1); /* recursive call */
}

int fibonacci(int n) {
    if (n == 0) return 0;        /* base conditions */
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

/*==========================================================================
  STORAGE CLASSES
==========================================================================
 THEORY: A storage class tells us a variable's (1) scope, (2) lifetime,
         (3) default value and (4) storage location.

 | Class    | Storage        | Default | Scope           | Lifetime          |
 |----------|----------------|---------|-----------------|-------------------|
 | auto     | Stack (RAM)    | Garbage | Inside the block| Till block ends   |
 | register | CPU register   | Garbage | Inside the block| Till block ends   |
 | static   | Data segment   | 0       | Inside the block| Whole program     |
 | extern   | Data segment   | 0       | Whole program   | Whole program     |

 * auto     : default class of local variables.
 * register : request to keep the variable in a CPU register for fast
              access (the & address operator cannot be used on it).
 * static   : the value is retained between function calls.
 * extern   : refers to a global variable defined elsewhere (another file
              or later in the program).
==========================================================================*/
int globalVar = 100;             /* global variable (accessible everywhere) */

void counterDemo(void) {
    int  autoCount   = 0;        /* auto: reset on every call              */
    static int stCount = 0;      /* static: remembers its value            */
    autoCount++;
    stCount++;
    printf("  auto = %d, static = %d\n", autoCount, stCount);
}

/*==========================================================================
  PART 2 : ARRAYS
==========================================================================
 THEORY:
 * An array is a collection of elements of the SAME data type stored in
   CONTINUOUS memory locations. Indexing starts from 0.
 * Declaration    :  data_type name[size];     e.g.  int marks[5];
 * Initialization :  int a[5] = {10,20,30,40,50};
                     int a[]  = {1,2,3};  (size is automatically 3)
                     int a[5] = {1,2};    (remaining elements become 0)
 * Advantages : many values under one name, easy traversal using loops.
 * Limitations: fixed size (decided at compile time), only one data type.
 * C does NOT check array bounds (accessing outside = undefined behaviour).

 * 2-D ARRAY = matrix (rows x columns).
   Declaration: int m[3][3];   Access: m[row][col]
   It is stored in memory in row-major order.

 * ARRAYS AND FUNCTIONS:
   - The array name is the base address. So when an array is passed to a
     function, its ADDRESS is passed, not a copy. Therefore changes made
     inside the function change the original array.
   - 1-D: void f(int a[], int n)
   - 2-D: void f(int a[][3], int rows)  -> column size is MANDATORY.
==========================================================================*/
void printArray(int a[], int n) {        /* passing a 1-D array to a function */
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

void doubleElements(int a[], int n) {    /* the original array gets modified */
    for (int i = 0; i < n; i++)
        a[i] = a[i] * 2;
}

int sumArray(int a[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i];
    return sum;
}

void print2D(int m[][3], int rows) {     /* passing a 2-D array: column size required */
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 3; j++)
            printf("%3d ", m[i][j]);
        printf("\n");
    }
}

/*==========================================================================
  PART 3 : STRINGS
==========================================================================
 THEORY:
 * A string is a character array that ends with the NULL character '\0'.
   char name[10] = "Anurag";  -> A n u r a g \0 (uses 7 bytes)
   Always keep the size = (number of characters + 1) for the '\0'.

 * STRING INPUT / OUTPUT:
   Input : scanf("%s", s)   -> stops at a space (reads only one word),
                               no & needed for strings
           gets(s)          -> reads the whole line, but UNSAFE (removed in C11)
           fgets(s,n,stdin) -> reads the whole line, SAFE (also stores '\n')
           getchar()        -> reads one character
   Output: printf("%s", s), puts(s) (adds a newline automatically),
           putchar(c)

 * BUILT-IN FUNCTIONS (<string.h>):
   strlen(s)       -> length of the string (excluding '\0')
   strcpy(d, s)    -> copies s into d
   strcat(d, s)    -> appends s at the end of d
   strcmp(s1, s2)  -> 0 if equal, >0 if s1 > s2, <0 if s1 < s2
   strrev(s)       -> reverses the string (NON-STANDARD: available only in
                      Turbo C / old compilers, not in GCC. So a custom
                      function is written below; write the same in the exam.)
==========================================================================*/

/* ---- Without built-in functions (own logic) ---- */
int myStrlen(const char s[]) {
    int i = 0;
    while (s[i] != '\0') i++;
    return i;
}

void myStrcpy(char dest[], const char src[]) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';              /* do not forget to add the null character */
}

void myStrcat(char dest[], const char src[]) {
    int i = myStrlen(dest);      /* move to the end of dest */
    int j = 0;
    while (src[j] != '\0') {
        dest[i++] = src[j++];
    }
    dest[i] = '\0';
}

int myStrcmp(const char s1[], const char s2[]) {
    int i = 0;
    while (s1[i] != '\0' && s1[i] == s2[i]) i++;
    return s1[i] - s2[i];        /* 0 = equal */
}

void myStrrev(char s[]) {
    int i = 0, j = myStrlen(s) - 1;
    while (i < j) {
        char t = s[i];
        s[i] = s[j];
        s[j] = t;
        i++; j--;
    }
}

/*======================== MAIN FUNCTION ================================*/
int main(void) {

    printf("==================== PART 1: FUNCTIONS ====================\n");

    printf("\n[1] Types of user-defined functions\n");
    greet();                              /* Type 1 */
    printSquare(7);                       /* Type 2 */
    int t = getTen();                     /* Type 3 */
    printf("getTen() returned: %d\n", t);
    int sum = add(15, 25);                /* Type 4 (function call) */
    printf("add(15,25) = %d\n", sum);

    printf("\n[2] Call by Value\n");
    int x = 10, y = 20;
    printf("  Before call      : x=%d, y=%d\n", x, y);
    swapByValue(x, y);
    printf("  After call (main): x=%d, y=%d  (no change)\n", x, y);

    printf("\n[3] Recursion\n");
    printf("factorial(5) = %ld\n", factorial(5));
    printf("Fibonacci series (8 terms): ");
    for (int i = 0; i < 8; i++)
        printf("%d ", fibonacci(i));
    printf("\n");

    printf("\n[4] Storage classes\n");
    printf("globalVar = %d\n", globalVar);
    printf("counterDemo() called 3 times:\n");
    counterDemo();
    counterDemo();
    counterDemo();
    register int r = 5;                   /* register variable */
    printf("register variable r = %d\n", r);

    printf("\n==================== PART 2: ARRAYS ====================\n");

    printf("\n[5] One-dimensional array\n");
    int arr[5] = {10, 20, 30, 40, 50};
    printf("Array elements: ");
    printArray(arr, 5);
    printf("Sum = %d\n", sumArray(arr, 5));
    int max = arr[0];
    for (int i = 1; i < 5; i++)
        if (arr[i] > max) max = arr[i];
    printf("Largest = %d\n", max);

    printf("\n[6] Array passed to a function (original array changes)\n");
    doubleElements(arr, 5);
    printf("After doubleElements(): ");
    printArray(arr, 5);

    printf("\n[7] Two-dimensional array (matrix)\n");
    int A[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int B[3][3] = {{9,8,7},{6,5,4},{3,2,1}};
    int C[3][3], T[3][3];
    printf("Matrix A:\n"); print2D(A, 3);
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) {
            C[i][j] = A[i][j] + B[i][j];     /* matrix addition */
            T[j][i] = A[i][j];               /* transpose */
        }
    printf("A + B:\n");       print2D(C, 3);
    printf("Transpose of A:\n"); print2D(T, 3);

    printf("\n================== PART 3: STRINGS ==================\n");

    printf("\n[8] String I/O\n");
    char name[50], word[20];
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);          /* reads the whole line */
    name[strcspn(name, "\n")] = '\0';          /* remove the newline */
    printf("Enter one word: ");
    scanf("%s", word);                         /* reads one word (no &) */
    printf("printf  -> %s\n", name);
    printf("puts    -> "); puts(word);
    printf("putchar -> "); putchar(word[0]); putchar('\n');

    printf("\n[9] Built-in string functions\n");
    char s1[50] = "Hello", s2[20] = " World", s3[50];
    printf("strlen(s1)     = %d\n", (int)strlen(s1));
    strcpy(s3, s1);
    printf("strcpy(s3,s1)  -> s3 = %s\n", s3);
    strcat(s1, s2);
    printf("strcat(s1,s2)  -> s1 = %s\n", s1);
    printf("strcmp(\"abc\",\"abc\") = %d (equal)\n", strcmp("abc", "abc"));
    printf("strcmp(\"abc\",\"abd\") = %d (<0, first string is smaller)\n", strcmp("abc", "abd") < 0 ? -1 : 1);
    printf("strrev -> not available in GCC, custom function used below\n");

    printf("\n[10] Without built-in functions (custom)\n");
    char a1[50] = "Anurag", a2[30] = " University", a3[50], a4[50] = "MCA";
    printf("myStrlen(\"%s\") = %d\n", a1, myStrlen(a1));
    myStrcpy(a3, a1);
    printf("myStrcpy -> a3 = %s\n", a3);
    myStrcat(a1, a2);
    printf("myStrcat -> a1 = %s\n", a1);
    printf("myStrcmp(\"MCA\",\"MCA\") = %d (equal)\n", myStrcmp(a4, "MCA"));
    printf("myStrcmp(\"MCA\",\"BCA\") = %s\n", myStrcmp(a4, "BCA") > 0 ? "positive (MCA is greater)" : "negative");
    myStrrev(a4);
    printf("myStrrev(\"MCA\") = %s\n", a4);

    /* Palindrome check (common exam question) */
    char p[20] = "madam", rev[20];
    myStrcpy(rev, p);
    myStrrev(rev);
    printf("\"%s\" is %s\n", p, myStrcmp(p, rev) == 0 ? "a palindrome" : "not a palindrome");

    return 0;
}