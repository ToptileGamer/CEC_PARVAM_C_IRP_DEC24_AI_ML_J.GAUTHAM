#include<stdio.h>
int main (){


    int i,sum,n;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    sum=0;
    for(i=2;i<=n;i+=2)
    {
        sum=sum+i;
        }
        printf("Sum of first %d natural numbers = %d",n,sum);
         return 0;
        
}
