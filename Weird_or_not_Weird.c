#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n%2==1)
    {
        printf("weird");
    }
    else if(n>=2 && n<=5)
    {
        printf("not weird");
    }
    else if(n>=6 && n<=5)
    {
        printf("Weird");
    }
    else
    printf("not weird");
    
}