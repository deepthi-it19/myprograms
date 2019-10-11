#include <stdio.h>
int main() {
    int n,a[n];
    printf("enter the length");
    scanf("%d",&n);
    printf("enter %d values",n);
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
    {
    printf("%d\t",a[i]);
    }
    return 0;
}
