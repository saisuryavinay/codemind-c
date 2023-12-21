#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j,s,r=0,a,b=1,c,m=0;
    scanf("%d",&n);
    int d=n;
    while(n!=0)
    {
        j=n%10;
        r=r*10+j;
        n=n/10;
    }
    while(r!=0)
    {
        a=r%10;
        c=pow(a,b);
        b++;
        m=m+c;
        r=r/10;
    }
    if(d == m)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}