#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    printf("%d",a-(((a-a%10)/10)-1)*10);
    return 0;
}
