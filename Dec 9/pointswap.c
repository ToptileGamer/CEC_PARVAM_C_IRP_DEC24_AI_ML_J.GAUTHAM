#include<stdio.h>
#include<string.h>
int main()
{
    int x=10, y=20, z;
    int *p1, *p2;

    p1=&x;
    p2 = &y;

    printf("Before Interchaning :%d, %d",x,y);
    z=*p1;
    *p1=*p2;
    *p2=z;
    printf("\nAfter Interchaning : %d, %d",x,y);
    p1++;
    printf(*p1);

    return 0;
}