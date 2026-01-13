#include <stdio.h>
int main()
{
    int x;
    int even;
    even=10;
    x=1;
    loop:if(x<6)
    {
        if((((((even-even%10)/10)+(even%10))==6))&&(even%2==0))
        {
          printf("%d\n",even);
          x=(even-even%10)/10;
        }
        even=even+1;
        goto loop;
    }
}
