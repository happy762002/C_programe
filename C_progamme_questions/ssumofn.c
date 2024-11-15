#include <stdio.h>

void sum()
{
    int n;
    printf("enter the number : ");
    scanf("%d", &n);

    int r=0;
    for (int i = 1; i <= n; i++)
    {
        r = r+i;
    }
    printf("%d",r);
}

int main()
{
    sum();
    return 0;
}