#include <stdio.h>
int main () {
    //Create a variable
    //Syntax:
    //<data type> <identifier>;

    //Data type keyword         Meaning
    //int                       Whole number (+-)
    //float                     Decimal (approximation)
    //double                    Decimal (better approximation)
    //char                      Single character (ex. 'k')

    //char initial;

    //Assigning a value to a variale 
    //initial gets 'k'
    //initial = 'k';
    //initial = 'x';

    int age;
    age = 23;

    //Arithmetic
    // <number> <arithmetic operator> <number>
    //Arithmetic operators:
    // +    add
    // -    substract
    // *    multiply
    // /    divide
    // %    remainder

    // Note: * and / and % are performed before + and -
    // To prevent anyhting add ()
    // Note: When dividing two integers the result is always an integer 
    //Example: 5/2 --> 2 
    // If you want the decimal result, make on eor both into a floating point
    // Example : 5/2.0 --> 2.5


    printf("His name is %s! His age is %d\n", "Gabriel", 20 );

    //Conditionals in C 
    // if(<comparison>) {
    //  <this block will get executed only if comparison is true>
    //}
    //Example:
    //int x = 7;
    //if(x < 15){
    //  printf("Winner");
    //}

    //Logical operators
    // (&&) or (||)

    //How to use OR:
    // if (<condition1> || <condition 2>){
    //      <This block will execute if any or both conditions are true>
    //}

    //The while loop.

    //while (<condition>){
    //      <this block is repeated as long as condition is true>
    //}

    //Pointers: Special variables that store the adress of a piece of data.
    //Creating a pointer:
    //Just like creating a variable , but add a * next to the data type.
    //Example:
    //int *p;       p is a pointer to an integer 

    //The adress-of operator: It is used to get the adress (location)
    // of a variable. Usually combined with pointers.
    //Example:
    //float price = 3.99;
    //float *fp = &price;  //fp holds the adress of the price

    //The dereference * operator. It is used to "go" tot the memory 
    //location in a pointer;

    //For example: 
    // int x = 7;
    // int *ip = &x;        // ip points to x 
    //printf("x is %d\n", *ip);     // by "going into" /dereferencing ip we get x

    // Pointers are used to store the initial location of a string.
    // For exaple:

    //char *message = "Welcome!";
    // Here, message contains the adress of the first character of the 
    // message. Functions such as printf can use this adress to get 
    // the rest of the string.
    
    
    return 0;
}