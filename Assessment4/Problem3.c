#include <stdio.h>
int main()
{
    int x;
    x=1;
    loop:if(x<6)
    {
        printf("%d\n",6-x);
        x=x+1;
        goto loop;
    }
}
