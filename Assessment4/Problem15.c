#include <stdio.h>

int main()
{
    int x;
    int n, first_digit, last_digit, temp, factor = 1;
    scanf("%d", &n);
    x = 0;
    temp = n;
    loop:if(x<6)
    {
        last_digit = n % 10;
        while(temp >= 10)
        {
            temp = temp / 10;
            factor = factor * 10;
        }
        first_digit = temp;
        if (last_digit%2!=0)
        {
           n = n - (first_digit * factor); 
           n= n +((first_digit-1) * factor);
        }
        x = 6;
        goto loop;
    }
    printf("%d", n);

}
