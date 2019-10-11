#include <stdio.h>
int main() {
    int a[10];
    printf("enter 10 values");
    for(int i=0;i<10;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<10;i++)
    {
    printf("%d\t",a[i]);
    printf("%p\n",&a[i]);
    }
}
