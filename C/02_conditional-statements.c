/*
STUDY NOTES
- if: executes its body only when the condition is true.
- if-else: chooses one of two alternative blocks.
- nested if-else: a decision statement placed inside another decision block.
- else-if ladder: checks multiple conditions in sequence; first true branch wins.
- switch: selects among constant case labels for an integral/enum expression.
  break exits the switch; default handles unmatched choices.
- while: entry-controlled; condition is checked before the body.
- do-while: exit-controlled; body executes at least once; trailing semicolon required.
- for: puts initialization, condition, update together in the loop header.
- break exits the nearest loop/switch; continue skips the current loop iteration.
*/
#include <stdio.h>

static int read_int(const char *prompt, int *value) {
    printf("%s", prompt);
    if (scanf("%d", value) != 1) {
        printf("Invalid input. Please restart and enter the expected type.\n");
        return 0;
    }
    return 1;
}

static void demo_if(void) {
    int n;
    if (!read_int("Enter an integer: ", &n)) return;
    if (n > 0) {
        printf("The number is positive.\n");
    }
    printf("The program continues whether the condition was true or false.\n");
}

static void demo_if_else(void) {
    int n;
    if (!read_int("Enter an integer: ", &n)) return;
    if (n % 2 == 0) {
        printf("Even number\n");
    } else {
        printf("Odd number\n");
    }
}

static void demo_nested_if(void) {
    int a, b, c, largest;
    if (!read_int("Enter first integer: ", &a)) return;
    if (!read_int("Enter second integer: ", &b)) return;
    if (!read_int("Enter third integer: ", &c)) return;

    /* The second comparison is nested inside the outer decision. */
    if (a >= b) {
        if (a >= c) largest = a;
        else largest = c;
    } else {
        if (b >= c) largest = b;
        else largest = c;
    }
    printf("Largest = %d\n", largest);
}

static void demo_else_if(void) {
    int marks;
    if (!read_int("Enter marks (0-100): ", &marks)) return;
    if (marks < 0 || marks > 100) {
        printf("Marks must be between 0 and 100.\n");
    } else if (marks >= 90) {
        printf("Grade A\n");
    } else if (marks >= 80) {
        printf("Grade B\n");
    } else if (marks >= 70) {
        printf("Grade C\n");
    } else if (marks >= 60) {
        printf("Grade D\n");
    } else if (marks >= 40) {
        printf("Grade E (Pass)\n");
    } else {
        printf("Grade F (Fail)\n");
    }
}

static void demo_switch(void) {
    double a, b;
    char op;
    printf("Enter operator (+, -, *, /): ");
    if (scanf(" %c", &op) != 1) {
        printf("Invalid operator input.\n");
        return;
    }
    printf("Enter two numbers: ");
    if (scanf("%lf %lf", &a, &b) != 2) {
        printf("Invalid number input.\n");
        return;
    }
    switch (op) {
        case '+': printf("Result = %.2f\n", a + b); break;
        case '-': printf("Result = %.2f\n", a - b); break;
        case '*': printf("Result = %.2f\n", a * b); break;
        case '/':
            if (b == 0.0) printf("Division by zero is not allowed.\n");
            else printf("Result = %.2f\n", a / b);
            break;
        default: printf("Invalid operator.\n");
    }
}

static void demo_while(void) {
    int n, i = 1;
    long long sum = 0;
    if (!read_int("Enter N (0 or greater): ", &n)) return;
    if (n < 0) {
        printf("N must be non-negative.\n");
        return;
    }
    while (i <= n) {
        sum += i;
        i++;
    }
    printf("Sum from 1 to %d = %lld\n", n, sum);
}

static void demo_do_while(void) {
    int n;
    /* Unlike while, this body executes once before testing the condition. */
    do {
        if (!read_int("Enter a number (0 to stop): ", &n)) return;
        printf("You entered: %d\n", n);
    } while (n != 0); /* Required semicolon after while condition. */
    printf("Loop ended.\n");
}

static void demo_for(void) {
    int n;
    if (!read_int("Enter a number for its multiplication table: ", &n)) return;
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}

static void demo_break_continue(void) {
    int i;
    printf("break example (stops when i reaches 6): ");
    for (i = 1; i <= 10; i++) {
        if (i == 6) break;
        printf("%d ", i);
    }
    printf("\ncontinue example (skip even values): ");
    for (i = 1; i <= 10; i++) {
        if (i % 2 == 0) continue;
        printf("%d ", i);
    }
    printf("\n");
}

int main(void) {
    int choice;
    do {
        printf("\n===== MCA UNIT II: C CONTROL STATEMENTS =====\n");
        printf("1. if statement\n");
        printf("2. if-else (even/odd)\n");
        printf("3. nested if-else (largest of three)\n");
        printf("4. else-if ladder (grades)\n");
        printf("5. switch (calculator)\n");
        printf("6. while (sum 1 to N)\n");
        printf("7. do-while (repeat until zero)\n");
        printf("8. for (multiplication table)\n");
        printf("9. break and continue\n");
        printf("0. Exit\n");
        if (!read_int("Choose an option: ", &choice)) return 1;

        switch (choice) {
            case 1: demo_if(); break;
            case 2: demo_if_else(); break;
            case 3: demo_nested_if(); break;
            case 4: demo_else_if(); break;
            case 5: demo_switch(); break;
            case 6: demo_while(); break;
            case 7: demo_do_while(); break;
            case 8: demo_for(); break;
            case 9: demo_break_continue(); break;
            case 0: printf("Goodbye.\n"); break;
            default: printf("Invalid menu option. Select 0-9.\n");
        }
    } while (choice != 0);

    return 0;
}
