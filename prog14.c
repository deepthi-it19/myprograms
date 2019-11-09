#include <stdio.h>
int main() {
    int x,y,z,big;
    printf("enter 3 numbers");
    scanf("%d %d %d",&x,&y,&z);
    big=(x>y)?(x>z?x:z):(y>z?y:z);
    printf("the greatest of three given number is %d:",big);
}
