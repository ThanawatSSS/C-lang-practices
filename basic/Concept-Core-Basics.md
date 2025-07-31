<!-- GPT generate doc for C language basic -->

# Welcome to C Programming Concepts – Core Basics

## 1. Variables and Data Types

In C, a variable is a name given to a memory location that stores data. You must declare the type of the variable before using it.

### Basic Data Types:

| Type     | Description            | Example           |
| -------- | ---------------------- | ----------------- |
| `int`    | Integer numbers        | `int a = 10;`     |
| `float`  | Single precision float | `float f = 3.2; ` |
| `double` | Double precision float | `double d = 5.9;` |
| `char`   | Single character       | `char c = 'A';`   |

## 2. Operators

Operators are symbols that perform operations on variables and values.

### Categories of Operators:

- Arithmetic: `+`, `-`, `\*`, `/`, `%`
- Relational: `==`, `!=`, `<`, `>`, `<=`, `>=`
- Logical: `&&`, `||`, `!`
- Assignment: `=`, `+=`, `-=`, `\*=`, `/=`
- Increment/Decrement: `++`, `--`

## 3. Control Structures

Control structures manage the flow of a program.

### If-Else Example:

```c
int x = 5;
if (x > 0) {
    printf("Positive");
} else {
    printf("Non-positive");
}
```

### Switch Case:

```c
int day = 3;
switch(day) {
    case 1: printf("Monday"); break;
    case 2: printf("Tuesday"); break;
    default: printf("Other Day");
}
```

## 4. Loops

Loops are used for repeating tasks.

### For Loop:

```c
for (int i = 0; i < 5; i++) {
    printf("%d\n", i);
}
```

### While Loop:

```c
int i = 0;
while (i < 5) {
    printf("%d\n", i);
    i++;
}
```

### Do-While Loop:

```c
int i = 0;
do {
    printf("%d\n", i);
    i++;
} while (i < 5);
```

## 5. Functions

Functions allow you to break code into reusable blocks.

### Declaration and Usage:

```c
int add(int a, int b) {
    return a + b;
}

int main() {
    int result = add(3, 4);
    printf("Sum: %d", result);
    return 0;
}
```

## 6. Arrays

Arrays store multiple values of the same type.

```c
int nums[3] = {10, 20, 30};
printf("%d", nums[0]); // Outputs 10
```

## 7. Pointers

Pointers store memory addresses of variables.

```c
int num = 10;
int *ptr = &num;
printf("Value: %d", *ptr); // Dereferencing
```

## 8. Strings

Strings are arrays of characters ending with '\0'.

```c
char name[] = "John";
printf("Name: %s", name);
```

## 9. Structures

Structures group different types into a single unit.

```c
struct Person {
 char name[20];
    int age;
};

struct Person p1 = {"Alice", 30};
printf("%s is %d", p1.name, p1.age);
```

## 10. Memory Management

C supports dynamic memory using:

```c
#include <stdlib.h>

int _arr = (int _) malloc(5 * sizeof(int));
// Use the array...
free(arr); // Free the allocated memory
```

## 11. File Handling

```c
FILE \*f = fopen("file.txt", "w");
if (f) {
    fprintf(f, "Hello!");
    fclose(f);
}
```

## 12. Enumerations (enum)

Used to define custom symbolic names for integral constants.

```c
enum Day { MON, TUE, WED };
enum Day today = MON;
```

## 13. Unions

Similar to structures but share memory.

```c
union Data {
    int i;
    float f;
};

union Data d;
d.i = 10;

```

## 14 Preprocessor Directives

Used to define constants or include file before compilation.

```c
#define PI 3.14
#include <math.h>
```

## 15. Recursion

Functions that call themselves.

```c
int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}
```

## 16. Command-Line Arguments

Passing parameters into main() from the command line.

```c
int main(int argc, char *argv[]) {
    printf("First argument: %s", argv[1]);
}

```

## 17. Header Files and Modular Programming

Split code into .h and .c files for reuse and clarity.

## 18. Bitwise Operators

Used for low-level manipulation of bits.

```c
int a = 5;  // 0101
int b = 3;  // 0011
int c = a & b; // 0001
```

## 19. Typedef

Create alias names for data types.

```c
typedef unsigned int uint;
uint age = 25;
f
```

## 20. Error Handling with errno and perror()

Used in file I/O and system programming for error checking.
