#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    printf("%d",(a-(a%100))+(((a%100)%10)*10)+((a%100)-(a%10))/10);
    return 0;
}
