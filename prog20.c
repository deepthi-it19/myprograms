#include <stdio.h>
int main() {
    int n;
    char result[4];
    printf("enter the numer :");
    scanf("%d",&n);
    (n%2==0)? printf("%d is even",n):printf("%d is odd",n);
}
