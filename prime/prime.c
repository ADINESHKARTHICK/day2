#include <stdio.h>
int main()
{
    int N = 91;
    int flag = 0;
    for (int i = 2; i <= N / 2; i++) 
  {
        if (N % i == 0) 
       {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf("Not a Prime Number");
    else
        printf("Is a Prime Number");
    return 0;
}
