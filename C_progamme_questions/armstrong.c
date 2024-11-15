#include <stdio.h>
int main()
{
    int n,sum,a,r;
    printf("enter the number : ");
    scanf("%d", &n);

    sum = 0;
    a = n;

    while (n>0)
    {
        r = n % 10;
        sum = (r*r*r)+sum;
        n = n/10;
    }
    if (sum == a)
    {
        printf("%d is Armstrong No.", a);
    }
    else
    {
        printf("%d is not Armstrong No.", a);
    }
    return 0;
}
