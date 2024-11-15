#include <stdio.h>
int main()
{
    int d,l,a;
    printf("enter the number daigonal : ");
    scanf("%d", &d);
    printf("enter the number left : ");
    scanf("%d", &l);
    printf("enter the number above : ");
    scanf("%d", &a);

    if (d>l && d>a)
    {
        printf("diagonal is maximum.\n");
    }
    if (l>d && l>a)
    {
        printf("left is maximum.\n");
    }
    else
    {
        printf("above is maximum.\n");
    }
    return 0;
}