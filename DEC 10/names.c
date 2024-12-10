#include<stdio.h>

int main()
{
    char name[20];
    int count=0;


    printf("Enter Your Name : ");
    scanf("%s", &name);

    for(int i=0; name[i]!='\0'; i++)
    count++;
    if(count%2 == 0)
    {
        for(int k=0; k<count; k++)
        {
            if(k%2 == 0)
            {
                name[k]='1';
            }
        }
    }
    else
    {
        for(int k=0; k<count; k++)
        {
            if(k%2 != 0)
            {
                name[k]='0';
            }
        }
    }
    printf("The Result Is : %s",name);


    return 0;
}