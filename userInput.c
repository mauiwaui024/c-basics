// #include <stdio.h>

// int main(){
//     char name[25];
//     int age;
//     printf("\nWhat's your name?");
//     scanf("%s", &name);
//     printf("\nHow old are you?");
//     scanf("%d", &age);

//     printf("Your name is %s and you are %d years old", name,age);

//     return 0;
// }



// fgets() is a function in the C programming language that reads a specified number of characters from a file or input stream, and stores them in a string. The first argument of the function is a pointer to the string where the input will be stored, the second argument is the maximum number of characters to read, and the third argument is the file or stream to read from. The function returns the string if successful, and NULL if it reaches the end of the file or an error occurs.

// Example:

// #include <stdio.h>
// int main()
// {
//     char str[100];
//     printf("Enter a string: ");
//     fgets(str, 100, stdin);
//     printf("You entered: %s", str);
//     return 0;
// }