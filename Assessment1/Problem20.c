#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    printf("%d",((a-a%100)/100)*100+(a%10));
    return 0;
}
