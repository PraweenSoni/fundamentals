/*==========================================================================
  MCA - PROGRAMMING IN C | UNIT III : SAMPLE + TRICKY QUESTIONS
  Each question is written in a comment, followed by its program and answer.
  Compile : gcc unit3_sample_questions.c -o q
  Run     : ./q
==========================================================================*/
#include <stdio.h>
#include <string.h>

/*==========================================================================
  SECTION A : THEORY QUESTIONS (write answers from Unit III notes)
==========================================================================
 2-MARK QUESTIONS
 Q1. What is a function? Write its syntax.
 Q2. Differentiate formal and actual parameters.
 Q3. What is recursion? What is a base condition?
 Q4. What is the default value of a static variable?
 Q5. Why is the column size mandatory when passing a 2-D array?
     (Ans: to calculate the address of a[i][j], the compiler needs the
      number of columns: address = base + (i*cols + j)*size)
 Q6. What is the null character? What is its ASCII value? (Ans: '\0', 0)
 Q7. Difference between gets() and fgets().

 5-MARK QUESTIONS
 Q8.  Explain the benefits and types of functions with examples.
 Q9.  Explain call by value with a swap program. Why does swap fail?
 Q10. Explain the storage classes with a table.
 Q11. Explain string I/O functions with examples.
 Q12. Explain string built-in functions with syntax and examples.

 10-MARK / PROGRAM QUESTIONS (all solved below)
 Q13. Matrix multiplication              Q14. Sort an array (bubble sort)
 Q15. Count vowels in a string           Q16. Palindrome check (in Unit III file)
 Q17. Reverse a number using recursion   Q18. Sum of digits using recursion
 Q19. Demonstrate extern                 Q20. GCD using recursion
==========================================================================*/

/*==========================================================================
  SECTION B : PROGRAMS (frequently asked)
==========================================================================*/

/* ---- Q13. Matrix multiplication ----
   RULE: columns of A must be equal to rows of B.
   C[i][j] = sum of A[i][k] * B[k][j]                                     */
void matrixMultiply(void) {
    int A[2][2] = {{1, 2}, {3, 4}};
    int B[2][2] = {{5, 6}, {7, 8}};
    int C[2][2];
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++) {
            C[i][j] = 0;                       /* must initialise to 0 */
            for (int k = 0; k < 2; k++)
                C[i][j] += A[i][k] * B[k][j];
        }
    printf("A x B =\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) printf("%3d ", C[i][j]);
        printf("\n");
    }
}

/* ---- Q14. Bubble sort (array passed to function, so original changes) ---- */
void bubbleSort(int a[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (a[j] > a[j + 1]) {             /* swap adjacent elements */
                int t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
}

/* ---- Q15. Count vowels and consonants (without built-in functions) ---- */
void countVowels(const char s[]) {
    int v = 0, c = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        char ch = s[i];
        if (ch >= 'A' && ch <= 'Z') ch = ch + 32;   /* convert to lowercase */
        if (ch >= 'a' && ch <= 'z') {
            if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') v++;
            else c++;
        }
    }
    printf("\"%s\" -> vowels = %d, consonants = %d\n", s, v, c);
}

/* ---- Q17. Reverse a number using recursion ----
   rev keeps building the reversed number                                  */
int reverseNum(int n, int rev) {
    if (n == 0) return rev;                         /* base condition */
    return reverseNum(n / 10, rev * 10 + n % 10);
}

/* ---- Q18. Sum of digits using recursion ---- */
int sumDigits(int n) {
    if (n == 0) return 0;
    return (n % 10) + sumDigits(n / 10);
}

/* ---- Q20. GCD using recursion (Euclid's algorithm) ---- */
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

/* ---- Q19. extern demo ----
   'extern int counter;' says "counter is defined somewhere else".
   The real definition is below the function, so extern is required here.  */
void showExtern(void) {
    extern int counter;          /* declaration (no memory allocated) */
    counter++;
    printf("counter (extern) = %d\n", counter);
}
int counter = 50;                /* definition (memory allocated) */

/*==========================================================================
  SECTION C : TRICKY OUTPUT-PREDICTION QUESTIONS
==========================================================================*/

/* ---- T3 helper: recursion, print AFTER the recursive call ---- */
void printAfter(int n) {
    if (n > 0) {
        printAfter(n - 1);
        printf("%d ", n);
    }
}
/* ---- T3 helper: recursion, print BEFORE the recursive call ---- */
void printBefore(int n) {
    if (n > 0) {
        printf("%d ", n);
        printBefore(n - 1);
    }
}

/* ---- T4 helper: sizeof on an array parameter ---- */
void arraySize(int a[]) {
    /* 'a' is really a POINTER here, so sizeof gives pointer size (8 on 64-bit) */
    printf("  Inside function : sizeof(a) = %zu (pointer size!)\n", sizeof(a));
}

/* ---- T5 helper: static variable ---- */
int nextId(void) {
    static int id = 100;
    return id++;                 /* returns old value, then increments */
}

/* ---- T6 helper: modifying a formal parameter ---- */
int addTen(int n) {
    n = n + 10;                  /* changes only the copy */
    return n;
}

/* ---- T7 helper: recursion with return ---- */
int mystery(int n) {
    if (n <= 1) return 1;
    return n + mystery(n - 2);
}

int main(void) {

    printf("############ SECTION B : PROGRAMS ############\n");

    printf("\n[Q13] Matrix multiplication\n");
    matrixMultiply();

    printf("\n[Q14] Bubble sort\n");
    int arr[6] = {64, 25, 12, 22, 11, 90};
    bubbleSort(arr, 6);
    printf("Sorted: ");
    for (int i = 0; i < 6; i++) printf("%d ", arr[i]);
    printf("\n");

    printf("\n[Q15] Vowels and consonants\n");
    countVowels("Anurag University");

    printf("\n[Q17] Reverse of 1234 = %d\n", reverseNum(1234, 0));
    printf("[Q18] Sum of digits of 9876 = %d\n", sumDigits(9876));
    printf("[Q20] GCD(48, 18) = %d\n", gcd(48, 18));

    printf("\n[Q19] extern demo\n");
    showExtern();
    showExtern();

    printf("\n############ SECTION C : TRICKY QUESTIONS ############\n");

    /* ---------------------------------------------------------------
       T1. What is the output?
           char s[] = "Hello";   printf("%zu %zu", sizeof(s), strlen(s));
       ANSWER: 6 5
       WHY   : sizeof counts the '\0' too (5 + 1 = 6), strlen does not.
       --------------------------------------------------------------- */
    printf("\n[T1] ");
    char s1[] = "Hello";
    printf("sizeof = %zu, strlen = %zu  (6 5)\n", sizeof(s1), strlen(s1));

    /* ---------------------------------------------------------------
       T2. What is the output?
           char s[10] = "Hi";  printf("%zu %zu", sizeof(s), strlen(s));
       ANSWER: 10 2
       WHY   : sizeof gives the declared size, strlen counts till '\0'.
       --------------------------------------------------------------- */
    printf("[T2] ");
    char s2[10] = "Hi";
    printf("sizeof = %zu, strlen = %zu  (10 2)\n", sizeof(s2), strlen(s2));

    /* ---------------------------------------------------------------
       T3. Predict the output of printAfter(3) and printBefore(3).
       ANSWER: printAfter(3)  -> 1 2 3
               printBefore(3) -> 3 2 1
       WHY   : In printAfter the print runs while the calls are returning
               (stack unwinds), so the order reverses.
       --------------------------------------------------------------- */
    printf("[T3] printAfter(3): ");  printAfter(3);
    printf("| printBefore(3): ");    printBefore(3);
    printf("\n");

    /* ---------------------------------------------------------------
       T4. What does sizeof(a) print inside a function that receives
           an int array? Is it the size of the array?
       ANSWER: NO. It prints the size of a POINTER (8 on 64-bit systems).
       WHY   : An array decays to a pointer to its first element when
               passed to a function.
       --------------------------------------------------------------- */
    printf("[T4] ");
    int nums[10];
    printf("In main: sizeof(nums) = %zu\n", sizeof(nums));
    arraySize(nums);

    /* ---------------------------------------------------------------
       T5. What is the output?
           printf("%d %d %d", nextId(), nextId(), nextId());
       NOTE: The order of evaluating function arguments is NOT defined in C.
             To get a guaranteed order, call them in separate statements.
       --------------------------------------------------------------- */
    printf("[T5] ");
    int a = nextId();
    int b = nextId();
    int c = nextId();
    printf("separate calls: %d %d %d  (100 101 102)\n", a, b, c);

    /* ---------------------------------------------------------------
       T6. int x = 5; int y = addTen(x);  printf("%d %d", x, y);
       ANSWER: 5 15
       WHY   : Call by value. x is not changed.
       --------------------------------------------------------------- */
    printf("[T6] ");
    int x = 5;
    int y = addTen(x);
    printf("x = %d, y = %d  (5 15)\n", x, y);

    /* ---------------------------------------------------------------
       T7. What does mystery(7) return?
       ANSWER: 7 + 5 + 3 + 1 = 16
       --------------------------------------------------------------- */
    printf("[T7] mystery(7) = %d  (16)\n", mystery(7));

    /* ---------------------------------------------------------------
       T8. int a[5] = {1, 2};  Print all elements.
       ANSWER: 1 2 0 0 0
       WHY   : Remaining elements are automatically initialised to 0.
               (This works only when at least one value is given.)
       --------------------------------------------------------------- */
    printf("[T8] ");
    int p[5] = {1, 2};
    for (int i = 0; i < 5; i++) printf("%d ", p[i]);
    printf(" (1 2 0 0 0)\n");

    /* ---------------------------------------------------------------
       T9. int m[2][3] = {1, 2, 3, 4};  Print the matrix.
       ANSWER: 1 2 3
               4 0 0
       WHY   : 2-D arrays fill row by row (row-major order).
       --------------------------------------------------------------- */
    printf("[T9] matrix:\n");
    int m[2][3] = {1, 2, 3, 4};
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) printf("%d ", m[i][j]);
        printf("\n");
    }

    /* ---------------------------------------------------------------
       T10. char s[] = "ab\0cd";  printf("%zu %zu", strlen(s), sizeof(s));
       ANSWER: 2 6
       WHY   : strlen stops at the FIRST '\0'. sizeof = a b \0 c d \0 = 6.
       --------------------------------------------------------------- */
    printf("[T10] ");
    char s3[] = "ab\0cd";
    printf("strlen = %zu, sizeof = %zu  (2 6)\n", strlen(s3), sizeof(s3));

    /* ---------------------------------------------------------------
       T11. strcmp("apple", "Apple") - is it positive, negative or zero?
       ANSWER: POSITIVE ('a' = 97 is greater than 'A' = 65).
       NOTE  : strcmp is case-sensitive. Do NOT assume it returns exactly
               1 or -1; only the sign (<0, 0, >0) is guaranteed.
       --------------------------------------------------------------- */
    printf("[T11] strcmp(\"apple\",\"Apple\") is %s\n",
           strcmp("apple", "Apple") > 0 ? "positive" : "not positive");

    /* ---------------------------------------------------------------
       T12. char s1[] = "abc", s2[] = "abc";  if (s1 == s2) ...
            Will this be TRUE?
       ANSWER: FALSE. '==' compares the ADDRESSES of the two arrays, not
               their contents. Always use strcmp(s1, s2) == 0.
       --------------------------------------------------------------- */
    printf("[T12] ");
    char u[] = "abc", v[] = "abc";
    printf("u == v      -> %s\n", (u == v) ? "true" : "false (compares addresses)");
    printf("      strcmp==0   -> %s\n", strcmp(u, v) == 0 ? "true (correct way)" : "false");

    /* ---------------------------------------------------------------
       T13. scanf("%s", s) with input "Anurag University". What is stored?
       ANSWER: only "Anurag". scanf stops at whitespace. Use
               fgets(s, size, stdin) to read the full line.
       --------------------------------------------------------------- */

    /* ---------------------------------------------------------------
       T14. char s1[5] = "Hello";  Is this correct?
       ANSWER: NO. "Hello" needs 6 bytes (5 letters + '\0'). With size 5
               the '\0' does not fit (no terminator -> strlen gives
               garbage). Always keep size = characters + 1.
       --------------------------------------------------------------- */

    /* ---------------------------------------------------------------
       T15. char d[5]; strcat(d, "Anurag");  What is the problem?
       ANSWER: (1) d is uninitialised (no '\0' to find the end).
               (2) The destination is too small -> buffer overflow
                   (undefined behaviour). The destination must be
                   initialised and large enough for both strings.
       --------------------------------------------------------------- */

    /* ---------------------------------------------------------------
       T16. How many times is fibonacci() called for fibonacci(5)?
       ANSWER: 15 calls. The tree recomputes the same values again and
               again, so plain recursion for Fibonacci is inefficient
               (exponential time).
       --------------------------------------------------------------- */

    /* ---------------------------------------------------------------
       T17. Can a function return an array in C?
       ANSWER: No, not directly. It can return a pointer, or the array
               can be passed in as a parameter and filled by the function.
               Never return the address of a normal local array (it is
               destroyed when the function ends).
       --------------------------------------------------------------- */

    return 0;
}