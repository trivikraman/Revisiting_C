#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    do   
    {
        a=((a-a%100)/100)+((a%100-a%10)/10)+(a%10);
        
    }while(a%10!=a);
    printf("%d",a);
    return 0;
}
