#include <stdio.h>

void amino()
{
	char a;
	printf("*************************************\n"
	       "WELCOME TO THE AMINO ACID DICTIONARY.\n"
	       "**************************************\n");
	printf("\n");
	printf("enter the alphabet to search releated amnio acid : ");
	scanf(" %c", &a);
	printf("---------------------------------------------------\n");

	switch(a)
	{
	
	case 'A':case 'a':
		printf("  Amino Acid  :  Three letter code : One letter Code\n"
		       "-----------------------------------------------------\n"	
		       "    Alanine   :        Ala         :       A\n");
		break;
	case 'C':case 'c':
                printf("  Amino Acid  :  Three letter code : One letter Code\n"
                       "-----------------------------------------------------\n"
                       "   Cysteine   :        Cys         :       C\n");
                break;
	case 'D':case 'd':
                printf("    Amino Acid   : Three letter code  : One letter Code\n"
                       "--------------------------------------------------------\n"
                       "  Aspartic Acid  :        Asp         :       D\n");
                break;
	case 'E':case 'e':
                printf("    Amino Acid  :  Three letter code : One letter Code\n"
                       "-------------------------------------------------------\n"
                       " Glutamic Acid  :        Glu         :       E\n");
                break;
	case 'F':case 'f':
                printf("    Amino Acid  :  Three letter code : One letter Code\n"
                       "-------------------------------------------------------\n"
                       "  Phenylalanine :        Phe         :       F\n");
                break;
	case 'G':case 'g':
                printf(" Amino Acid  :  Three letter code : One letter Code\n"
                       "---------------------------------------------------\n"
                       "   Glycine   :        Gly         :       G\n");
                break;
	case 'H':case 'h':
                printf(" Amino Acid  :  Three letter code : One letter Code\n"
                       "---------------------------------------------------\n"
                       "   Histidine :        His         :       H\n");
                break;
	case 'I':case 'i':
                printf(" Amino Acid  :  Three letter code : One letter Code\n"
                       "---------------------------------------------------\n"
                       "  Isoleucine :        Ile         :       I\n");
                break;
	case 'K':case 'k':
                printf(" Amino Acid  :  Three letter code : One letter Code\n"
                       "---------------------------------------------------\n"
                       "   Lysine    :        Lys         :       K\n");
                break;
	case 'L':case 'l':
                printf(" Amino Acid  :  Three letter code : One letter Code\n"
                       "---------------------------------------------------\n"
                       "   Leucine   :        Leu         :       L\n");
                break;
	case 'M':case 'm':
                printf(" Amino Acid  :  Three letter code : One letter Code\n"
                       "---------------------------------------------------\n"
                       "  Methionine :        Met         :       M\n");
                break;
	case 'N':case 'n':
                printf(" Amino Acid  :  Three letter code : One letter Code\n"
                       "---------------------------------------------------\n"
                       "  Asparagine :        Asp         :       N\n");
                break;
	case 'P':case 'p':
                printf(" Amino Acid  :  Three letter code : One letter Code\n"
                       "---------------------------------------------------\n"
                       "   Proline   :        Pro         :       P\n");
                break;
	case 'Q':case 'q':
                printf(" Amino Acid  :  Three letter code : One letter Code\n"
                       "---------------------------------------------------\n"
                       "  Glutamine  :        Gln         :       Q\n");
                break;
	case 'R':case 'r':
                printf(" Amino Acid  :  Three letter code : One letter Code\n"
                       "---------------------------------------------------\n"
                       "  Arginine   :        Arg         :       R\n");
                break;
	case 'S':case 's':
                printf(" Amino Acid  :  Three letter code : One letter Code\n"
                       "---------------------------------------------------\n"
                      "    Serine    :        Ser         :       S\n");
                break;
	case 'T':case 't':
                printf(" Amino Acid  :  Three letter code : One letter Code\n"
                       "---------------------------------------------------\n"
                       "  Threonine  :        Thr         :       T\n");
		break;
	case 'V':case 'v':
                printf(" Amino Acid  :  Three letter code : One letter Code\n"
                       "---------------------------------------------------\n"
                       "   Valine    :        Val         :       V\n");
                break;
	case 'W':case 'w':
                printf(" Amino Acid  :  Three letter code : One letter Code\n"
                       "---------------------------------------------------\n"
                       "  Tryptophan :        Try         :       W\n");
                break;
	case 'Y':case 'y':
                printf(" Amino Acid  :  Three letter code : One letter Code\n"
                       "---------------------------------------------------\n"
                       "   Tyrosine  :        Tyr         :       Y\n");
                break;
  
	default:
		printf("-----------------------------------------------------\n"
		       "INVALID ENTRY, NOT IN DICTIONARY!!\n");
		break;
	}

}

int main()
{
	char b;
        while(1)
        {
                amino();
                printf("-------------------------------------------------------\n"
		       "To re-run the programme (y/n) : ");
                scanf(" %c", &b);

                if(b=='n' || b=='N')
                {
                        printf("#####################\n"
			       "EXITING THE PROGRAMME\n"
			       "#####################\n");
                        break;
                }
        }
	return 0;
}
