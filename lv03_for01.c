#include <stdio.h>
void main ()
{
    int n, i;
    float s=0;
    printf("nhap n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       s+=(float)1/i;
    }
    printf("tong : s=%0.2f",s);
}
