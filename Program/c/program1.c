/*
    Documentation Section or Comment Section
     
     Write a program which print the value of a which is 10

*/
#include<stdio.h> // Header Section
#include<math.h>

//definition section
int bhoomi();
//global variable or global section
int b = 20;

// main section or main function
//datatype main is function name () - round bracket or parantheses
void main(){ // opening brace
    // block of code or statement

    // declarative or definition section
    int a = 10;

    // execution section
    printf("Hello");
    printf(" %d",a);
    bhoomi();


    // return; //return statement
} // closing braces

int bhoomi(){
    printf("Hello I am bhoomi ");
    printf(" %d ",b);
    return 0;
}

