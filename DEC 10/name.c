#include<stdio.h>
#include<string.h>

int main(){

    char a[50];
    int no, remainder;

    printf("enter your name : ");
    scanf("%s", &a);

    printf("your name is  %s \n", a);
    printf(" The length of your name is : %lu \n", strlen(a));

    if (strlen(a) % 2 == 0)
        printf("even!!");
    else
        printf("odd...");
                           
    

    return 0;
}