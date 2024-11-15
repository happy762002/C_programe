#include <stdio.h>

void ane()
{
	float a;
	printf("------------------------\n""WELCOME TO ANEMIC LEVEL IDENTIFIER\n""------------------------\n");
	printf("enter the hemoglobin value : ");
	scanf("%f", &a);
	printf("-----------------------------\n");

	if(a==9.6 && a>=13)
	{
		printf("MILD\n""------------------------\n");
	}
	else if(a==8 && a<=9.5)
	{
		printf("MOODERATE\n""------------------------\n");
	}
	else if(a>8)
	{
		printf("SEVERE\n""------------------------\n");
	}
	else if(a>13 && a<=17)
	{
		printf("NORMAL\n""------------------------\n");
	}
}

int main()
{
	char b;
        while(1)
        {
                ane();
                printf("To re-run the programme (y/n) : ");
                scanf(" %c", &b);

                if(b=='n' || b=='N')
                {
                        printf("------------------------\n""EXITING THE PROGRAMME\n""------------------------\n");
                        break;
                }
        }
	return 0;
}

