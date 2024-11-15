#include <stdio.h>
int main()
{
    int n,a,s,r;
    printf("Enter the to check : ");
    scanf("%d", &n);

    a=n;
    s=0;

    while (n>0);
    {
        r = n % 10;
        s = r + (s*10);
        n = n/10;
    }
    if (a==s)
    {
        printf("The number %d is palindrome\n", a);
    }
    else
    {
        printf("Not a %d palindrome\n", a);
    }
    return 0;

}   