#include <stdio.h>

int main() {
    int x,y;
    printf("Enter Number:");
    scanf("%d",&x);
    y=((x-x%100)/100)*100+(x%10);
    printf("Result= %d",y);
    return 0;
}
