#include<stdio.h>
int main()
{
    int num, sum=0,rem=0;
    printf("enter the number to get sum of digits:");
    scanf("%d",&num);

    while(num > 0){
        rem = num%10; // 456%10 = 6
        sum=sum + rem; // sum = 0+ 6 = 6
        num = num/10;
    }
    printf("sum of digits = %d",sum);

    return 0;
}
