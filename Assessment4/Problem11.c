#include <stdio.h>

int main()
{
    int x;
    int n, count;
    scanf("%d", &n);
    x = 0;
    count=0;
    loop:if(x<6)
    {
        while(n > 0)
        {
            count=count+1;
            n = n / 10;
        }
        x = 6;
        goto loop;
    }

    printf("%d", count);
}
