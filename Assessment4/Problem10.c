#include <stdio.h>
int main()
{
    int x;
    int odd,result;
    odd=70;
    x=1;
    result=0;
    loop:if(x<6)
    {
        if(((odd-odd%10)/10==7)&&(odd%2!=0))
        {
         result=result+odd;
         x=x+1;
        }
        odd=odd+1;
        goto loop;
    }
    printf("%d",result);
}
