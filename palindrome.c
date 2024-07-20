#include <stdio.h>
int main() 
{
    int num, original_num, reversed = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &num);
    original_num = num;
    while (num != 0) 
   {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    if (original_num == reversed) 
    {
        printf("%d is a palindrome.\n", original_num);
    } else 
    {
        printf("%d is not a palindrome.\n", original_num);
    }
    return 0;
}
