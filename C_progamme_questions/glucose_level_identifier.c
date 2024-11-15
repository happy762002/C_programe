#include <stdio.h>

void glucose()
{
	int g;
	printf("-----------------------------------\n" "WELCOME TO GLUCOSE LEVEL IDENTIFIER\n");
	printf("-----------------------------------\n");

	printf("enter the glucose level : ");
	scanf("%d", &g);

	if(g<70)
	{
		printf("------------------------\n""Hypoglycemia\n");
	}

	else if(g>=70 && g<=180)
	{
		printf("------------------------\n""Hyperglycemia\n");
	}

	else if(g>180)
	{
		printf("------------------------\n""Diabetics\n");
	}

	else
	{
		printf("------------------------\n""@@@INVAILD ENTRY@@@\n");
	}
}

int main()
{
	char b;
	while(1)
	{
		glucose();
		printf("------------------------\n""To re-run the programme (y/n) : ");
		scanf(" %c", &b);

		if(b=='n' || b=='N')
		{
			printf("------------------------\n""EXITING THE PROGRAMME\n""------------------------\n");
			break;
		}
	}
	return 0;
}


