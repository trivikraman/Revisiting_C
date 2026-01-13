#include <stdio.h>

int main()
{
    int x;
    int n,sum;
    scanf("%d", &n);
    x = 0;
    sum=0;
    loop:if(x<6)
    {
        while(n > 0)
        {
            sum=sum+n%10;
            n=n/10;
        }
        x = 6;
        goto loop;
    }

    printf("%d",sum);
}
