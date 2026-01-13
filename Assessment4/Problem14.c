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
        n = n - (first_digit * factor) - last_digit;
        n = n + (last_digit * factor) + first_digit;
        x = 6;
        goto loop;
    }

    printf("%d", n);
}
