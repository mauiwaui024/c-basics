#include <stdio.h>

// int main(){
//     printf("I like pizza \n");
//     printf("It's my favourite food \n");
//     return 0;
// }

// int main(){
//     int x; //declaration
//     x = 123; // initializtion
//     int x = 124; // combined declaration and initilization





//     return 0;
// }

                                 // ESCAPE SEQUENCES//


// In C, an escape sequence is a combination of characters that represents a special character, such as a newline or a tab. Escape sequences begin with a backslash () and are interpreted differently than regular characters. Some common escape sequences include:

// \n: newline
// \r: carriage return
// \t: horizontal tab
// \\: backslash
// \": double quote
// \': single quote
// For example, the following code will print "Hello, World!" followed by a newline:

// Copy code
// printf("Hello, World!\n");
// These escape sequences can be used in strings and character literals, and also in output and input functions in C.

// Escape sequences are also used to represent non-printable characters like \a,\b etc.




/////////////////////////////////////VARIABLES/////////////////////////////////////



// int main() {
//     int a = 5;                       /// 4 bytes(-2,147,483,648 to +2,147,483,647)
//     float b = 3.14;                  /// 4 bytes(32 bits of precision) 6-7 digits %f
//     double c = 6.02214;              /// 8 bytes (64 bits of precision) 15-16 digits %lf

//     char d = 'A';

//     char e[] = "Hello, world!";
//     _Bool f = 1;

//     printf("Integer variable: %d\n", a);
//     printf("Float variable: %f\n", b);
//     printf("Double variable: %lf\n", c);
//     printf("Character variable: %c\n", d);
//     printf("String variable: %s\n", e);
//     printf("Boolean variable: %d\n", f);

//     return 0;
// }



///////////////////////////////Format specifiers!////////////////////////////


// In C programming, format specifiers are used in the printf and scanf functions to specify the type of data being passed as an argument. The following are the format specifiers in C:

// %c : for character
// %s : for strings
// %f : for floating-point numbers
// %lf: for doubles
// %d or %i : for integers
// %e or %E : for scientific notation of floating-point numbers
// %g or %G : for shorter representation of %e or %f
// %o : for octal numbers
// %p : for pointer address
// %u : for unsigned integers
// %x or %X : for hexadecimal numbers
// %ld, %lld, %hd, %hhd for specific width for int, long int, short int, char
// It is important to note that these format specifiers must be used in conjunction with the appropriate type of argument in the printf or scanf function.

// %.1 = decimal precision
// %1 = minimum field width - after percent but before decimal precision
// %- = left align


//////////////////////////////////////////////////CONSTANT////////////////////

// constant = fixed value that cannot be altered by the program during its execution

    // int main(){
    //     const float PI = 3.14159;
    //     printf("pi constant equals %-8.2f\n", PI);   //decimal precision + min field width;
    //     printf("pi constant equals %8.2f\n", PI);
    //     return 0;

    // }


////////////////////////////////////////////Arithmetic operators///////////////////////

// int main(){
//     In C programming language, the following arithmetic operators are commonly used:
// for addition - Example:
// int a = 5, b = 10, c;
// c = a + b; // c = 15
// for subtraction - Example:
// int a = 20, b = 10, c;
// c = a - b; // c = 10
// for multiplication - Example:
// int a = 5, b = 10, c;
// c = a * b; // c = 50
// / for division - Example:
// int a = 20, b = 10, c;
// c = a / b; // c = 2

// % for Modulo - Example:
// int a = 20, b = 3, c;
// c = a % b; // c = 2

// It's important to note that if both operands are integers the division operator will return an integer value and will truncate the remainder.

// Please let me know if you need any more help or examples.
//     return 0;
// }



////////////////////////////AUGMENTED ASSIGNMENT OPERATORS//////////////////////////


// In C programming language, Augmented assignment operators are also available for most basic arithmetic operations.

// For example, instead of writing x = x + 1;, you can use the augmented assignment operator += and write x += 1;. Other examples include -=, *=, /=, and %=.

// Additionally, C also provides compound assignment operator for Bitwise And, Bitwise Or and Bitwise XOR operations, for example, &=, |=, ^=

// These operators are a shorthand way of performing the operation and assignment in a single step. It reduces the number of lines of code and makes the code more readable.


