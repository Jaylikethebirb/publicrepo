#include <stdio.h>




int getfibrec(int n) {
    int fibn=0;

    if (n == 0) {
        return 0;
    }
    else if (n == 1) {
        return  1;
    }
    fibn=getfibrec(n-1)+getfibrec(n-2);
    return fibn;
  
}


int main() {
    int n;
    printf("enter a number to get its fibanocci: ");
    scanf("%d",&n);

    printf("Recursive Fibonacci of %d: %d\n", n, getfibrec(n));

    return 0;
}

