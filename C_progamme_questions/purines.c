#include <stdio.h>
#include <string.h>

int main()
{
    char dna[100];
    int pu = 0, py = 0;

    printf("Enter the DNA sequence: ");
    scanf("%s", dna);

    for (int i = 0; i < strlen(dna); i++) 
    {
        if (dna[i] == 'a' || dna[i] == 'A' || dna[i] == 'g' || dna[i] == 'G') 
        {
            pu++;
        }
        
        else if (dna[i] == 't' || dna[i] == 'T' || dna[i] == 'c' || dna[i] == 'C') 
        {
            py++;
        }
    }

    printf("The number of purines (A/G): %d\n" "The number of pyrimidines (C/T): %d\n", pu, py);
    return 0;
}
