#include<stdio.h>

int main(){

    int a = 10;

    // post and pre
    // ++,--
    --a; // pre increment a = 1 + a
    printf("%d",a);
    a--; // a = a + 1
   
    int c = a >= 10 ? 5 : 2;
    printf("%d",a);
    printf("\nc = %d",c);

    char d = 'd';
    int size = sizeof(d);

    printf("size of d : %d",size);
    return 0;
}