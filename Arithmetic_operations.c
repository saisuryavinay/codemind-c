#include<stdio.h>
int main()
{
    int Sum,Difference,Product,Quotient,Remainder,a,b;
    scanf("%d%d",&a,&b);
    Sum=a+b;
    Difference=a-b;
    Product=a*b;
    Quotient=a/b;
    Remainder=a%b;
    printf("Sum:%d
",Sum);
    printf("Difference:%d
",Difference);
    printf("Product:%d
",Product);
    printf("Quotient:%d
",Quotient);
    printf("Remainder:%d
",Remainder);
}