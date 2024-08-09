#include<stdio.h>

int main(){

    // assignment
    int c = 50, d = 4;
    // c = c + d
    c += d; // 54
    printf("%d\n",c);
    //c = c - d
    c -= d; // 46
    printf("%d\n",c);

    c *= d; // 200
    printf("%d\n",c);

    c /= d; // 12
    printf("%d\n",c);
    // c = c % = 50 / 4 = 12
    c %= d; // 0

    printf("%d",c);
    return 0;
}