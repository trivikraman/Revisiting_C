#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    printf("%d",(((a%10)%2!=0)&&(((a-a%10)/10)%2!=0))?a-5:a);
    return 0;
}
