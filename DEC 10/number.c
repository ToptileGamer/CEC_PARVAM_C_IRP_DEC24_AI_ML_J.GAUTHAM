#include<stdio.h>

int main(){

    int a;
    printf("enter the number : ");
    scanf("%d", &a);


    //printf("Enter the number : \n");
    

    //printf("your name is %d" ,a);

    if (a > 100 && a < 500)
    {
        printf("aX500 = %d", a*500 );
    }
    else if (a > 500)
    {
        printf("a/2 = %d", a/2 );
    }
    else if (a < 100)
    {
        printf("%d" ,a%10);
    }
    else
        printf("invalid number");

        


    

    
    
    


    return 0;
}