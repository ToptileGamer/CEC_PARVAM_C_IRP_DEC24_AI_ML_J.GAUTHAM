#include<stdio.h>
int main(){

 int no, remainder;
    printf( "enter the number : ");
    scanf("%d", &no);
    remainder = no % 2;
    if (remainder == 0)
        print("even!!");
    else
        print("odd...");

return 0;
}

