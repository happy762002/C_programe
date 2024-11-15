#include <stdio.h>
#include <math.h>

void ph()
{
        printf("Welcome to pH calculator\n""---------------------------\n");
	
        float h,ph;
        printf("enter the H+ concentration : ");
        scanf("%f", &h);
	printf("------------------------------\n");

        ph = -log10(h);

        printf("The ph of the solution is : %.f\n" "---------------------------\n", ph);
}

int main()
{
        char choice;

        while(1)
        {
		ph();
                
                printf("Do you want to run programme again (y/n) ");

                scanf(" %c", &choice);

		printf("------------------------------------------\n");

                if(choice == 'n' || choice == 'N')
                {
			printf("Exiting Programme!!\n" "---------------------------\n");
                       	break;
                }
        }
        return 0;
}
