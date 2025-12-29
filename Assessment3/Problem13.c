#include <stdio.h>

int main() {
    int x;
    printf("Enter Number:");
    scanf("%d",&x);
    if((((x%100)-(x%10)))/10==(x%10))
    {
        printf("Success");
    }
    else
    {
        printf("Failure");
    }
    return 0;
}
