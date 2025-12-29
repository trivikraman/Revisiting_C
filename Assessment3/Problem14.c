#include <stdio.h>

int main() {
    int x,y;
    printf("Enter Number:");
    scanf("%d",&x);
    if(((x-(x%100))/100)==(x%100))
    {
        printf("Success");
    }
    else
    {
        printf("Failure");
    }
    return 0;
}
