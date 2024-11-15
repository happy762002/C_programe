#include <stdio.h>

void rev()
{
	int n,r;
	printf("Enter the number you want to reverse : ");
	scanf("%d", &n);
	printf("Reverse number is : ");

	while(n>0)
	{
		r=n%10;
		printf("%d ", r);
		n=n/10;
	}
}

int main()
{
	rev();
	return 0;

}

