#include <stdio.h>

int main() {
    int x,y;
    printf("Enter Number:");
    scanf("%d",&x);
    y=((x-x%100)/100)+((x%100-x%10)/10)+(x%10);
    y=y<10?y:((y-y%100)/100)+((y%100-y%10)/10)+(y%10);
    y=y<10?y:((y-y%100)/100)+((y%100-y%10)/10)+(y%10);
    y=y<10?y:((y-y%100)/100)+((y%100-y%10)/10)+(y%10);
    printf("Result= %d",y);
    return 0;
}
//Alternate Solution
#include <stdio.h>

int main() {
    int x,y;
    printf("Enter Number:");
    scanf("%d",&x);
    y=((x-x%100)/100)+((x%100-x%10)/10)+(x%10);
    do   
    {
        y=((y-y%100)/100)+((y%100-y%10)/10)+(y%10);
        
    }while(y%10!=y);//(y<10)
    printf("Result= %d",x);
    return 0;
}
