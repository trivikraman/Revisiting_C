#include <stdio.h>

int main() {
    int x,y;
    printf("Enter Number:");
    scanf("%d",&x);
    y=((((x%1000)-(x%100))/100))*1000+(((x-(x%1000))/1000)*100)+(x%100)
    printf("Result= %d",y);
    return 0;
}
