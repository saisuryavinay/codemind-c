#include<stdio.h>
int main()
{
    char str1[20],str[20];
    scanf("%[^
]s",&str);
    int i,len=0;
    for(i=0;str[i]!=NULL;i++)
    {
        len+=1;
        
    }
    printf("%d",len);
}