#include <stdio.h>
int main() {
    int n,fact=1;
    printf("enter the number for factorial:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        fact*=i;
    }
    printf("the factorial of %d is %d",n,fact);
}
