#include<stdio.h>
int main()
{
    int n, original,remainder,sum=0;

    printf("enter a number:");
    scanf("%d",&n);

    original=n;

    while(n!=10)
    {
        remainder=n%10;
        sum=sum+remainder*remainder*remainder;
        n=n/10;
    }
    if(sum==original)
        printf("%d is an armstand number",original);
    else
        printf("%d is not an armstand number", original);
    return 0;
}
