#include <stdio.h>
int main()
{
    int x;
    int odd;
    odd=10;
    x=1;
    loop:if(x<6)
    {
        if((((((odd-odd%10)/10)+(odd%10))==7))&&(odd%2!=0))
        {
          printf("%d\n",odd);
          x=(odd-odd%10)/10;
        }
        odd=odd+1;
        goto loop;
    }
}
