#include <stdio.h>

void bmi()
{
	printf("WELCOME TO BMI CALCULATOR \n");
}

void bmi_formula()
{
	float w,h,h2,b;

	printf("--------------------------\n""Enter the Weight (KG) : \n");
  	scanf("%f", &w);
	
	printf("---------------------------\n""Enter teh Height (M) : \n");
	scanf("%f", &h);

	printf("-----------------------\n");
	h2=h/100;
	b=w/(h2*h2);
	printf("Your BMI is %.2f\n", b);

	if(b<18.5)
	{
		printf("------------------\n""underweight\n""---------------------\n");
	}

	else if(b>=18.5 && b<24.9)
        {
                printf("------------------\n""Normal\n""--------------------------\n");
        }

	else if(b>=25 && b<29.9)
        {
                printf("------------------\n""Overweight\n""------------------------\n");
        }

	else
        {
                printf("-------------------\n""Obese\n""----------------------------\n");
        }
}

int main()
{
	char choice;

	while (1)
	{
		bmi();
		bmi_formula();

		printf("Do you want to calculate again? (y/n): ");
		scanf(" %c", &choice);

		if (choice == 'n' || choice == 'N')
		{
			printf("Exiting the programme!!");
			break;
		}
	}

	return 0;
}
