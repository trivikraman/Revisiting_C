#include <stdio.h>
int main()
{
    int x;
    int odd;
    odd=0;
    x=1;
    loop:if(x<6)
    {
        odd=odd+1;
        if(odd%2!=0)
        {
          printf("%d\n",odd+10);
          x=x+1;
        }
        goto loop;
    }
}
