#include <stdio.h>
int main()
{
    int x;
    int sum;
    sum=1;
    x=1;
    loop:if(x<6)
    {
        x=x+1;
        sum=sum+x;
        goto loop;
    }
    printf("%d",sum);
}
