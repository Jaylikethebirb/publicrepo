#include <stdio.h>




int get_fib_recursive(int n) {

    if (n == 0) {
        return 0;
    }
    else if (n == 1) {
        return 1;
    }
  

    ;
  
  
}


int main() {
    int n;
    printf("enter a number to get its fibanocci: ");
    scanf("%d",&n);

    printf("Recursive Fibonacci of %d: %d\n", n, get_fib_recursive(n));

    return 0;
}

