#include <stdio.h>

int main()
{
    int x;
    int n, reverse;
    scanf("%d", &n);
    x = 0;
    reverse = 0;
    loop:if(x<6)
    {
        while(n > 0)
        {
            reverse = reverse * 10 + (n % 10);
            n = n / 10;
        }
        x = 6;
        goto loop;
    }

    printf("%d", reverse);
}
