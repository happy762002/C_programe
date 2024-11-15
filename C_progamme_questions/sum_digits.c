#include <stdio.h>
void sum()
{
    int user,user2,sum,r;
    printf("enter the digits : ");
    scanf("%d", &user);
    user2 = user;
    sum = 0;

    while (user>0)
    {
        r = user % 10;
        sum = r + sum;
        user = user / 10;
    }
    printf("the the sum of digit %d = %d", user2, sum);
}

int main()
{
    sum();
    return 0;
}