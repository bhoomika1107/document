#include<stdio.h>

int main(){

    /*
    Operator is symbol that is used to perform specific mathematical and logical task.
    
        1. Arithmetic : + , -, *, /, %
        2. Relational or Comparison : >, <, >=, <=, ==, !=
        3. Logical : &&, ||, !
        4. Assignment : +=, -=,*=,/=,%=
        5. Increment and decrement: ++, --
        6. Conditional or Ternary : ? : 
        7. Bitwise : &, |, !, ^
        8. sizeof operator : sizeof
    */

    // Arithmetic
    // && : true true true, true false false false true false
    // || : true true true, true false true, false true true, false false false
    // ! = true = false,false = true
    int a = 10,b = 5;

    int add,sub,mul,div,rem;
    int res;
    res = a < b ; /// 0
    
    sub = a > b && a != b; // 1
    mul = a <= b || a >= b; // 1
    div = !(a >= b && a != b); // 0
    rem = a != b; // 0

    printf("Addition : %d\nSubstraction: %d\nMultiplication : %d\nDivision : %d\nRemainder : %d\n ",add,sub,mul,div,rem);
    printf("%d + %d = %d\nSubstraction: %d\nMultiplication : %d\nDivision : %d\nRemainder : %d\n ",a,b,add,sub,mul,div,rem);

    return 0;
}