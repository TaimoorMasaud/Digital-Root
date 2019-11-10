//We assume the number has ten digits or less
#include<stdio.h>
int main()
{
    int n,a,b,i,sum=0;
    printf("\nEnter a number : ");
    scanf("%d",&n);
    a=n;
    for (i=1000000000;i>=1;i=i/10)
    {
        b=a/i;
        a=a%i;
        sum=sum+b;
    }
    if (sum>=10)
    {
        a=sum;
        sum=0;
          for (i=10;i>=1;i=i/10)
        {
            b=a/i;
            a=a%i;
            sum=sum+b;

        }
    }
    printf("\nDigital Root is : %d ",sum);
}

