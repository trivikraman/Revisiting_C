#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    printf("%d",((((a%1000)-(a%100))/100))*1000+(((a-(a%1000))/1000)*100)+(a%100));
    return 0;
}
