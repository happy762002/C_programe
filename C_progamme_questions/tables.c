#include <stdio.h>
void tables()
{
    int n,s;
    printf("enter the no. to print table : ");
    scanf("%d", &n);
    printf("The table of %d is : \n", n);

    for (int i = 1; i <= 10; i++)
    {
        s = n*i;
        printf("%d X %d = %d \n", n, i, s);
    }
}

int main()
{
    int a;
    while (1)
    {
        tables();
        printf("do you want to run the programme angain press 1 (yes) and press 0 (no) : ");
        scanf("%d", &a);
        if (a==0)
        {
            printf("exiting the programme!!\n");
            break;
        }
        
    }
    return 0;
}