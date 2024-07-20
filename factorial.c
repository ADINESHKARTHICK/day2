#include <stdio.h>
int factorial_iterative(int n) 
{
    int result = 1;
    for (int i = 1; i <= n; ++i) 
   {
        result *= i;
    }
    return result;
}
int main() 
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num < 0) 
   {
        printf("Factorial is not defined for negative numbers.\n");
    } else 
   {
        printf("Factorial of %d is %d\n", num, factorial_iterative(num));
    }

    return 0;
}
