#include<stdio.h>
void main()
{
    int a,b,r;
    printf("Nhap 2 so a b:");
    scanf("%d%d",&a,&b);
    while(r!=0)
    {
        r=a%b;
        a=b;
        b=r;
    }
    printf("UCLN=%d",a);
}
