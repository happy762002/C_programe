#include <stdio.h>
#include <string.h>

// Define the amino acid struct
typedef struct {
    char name[20];        // Full name
    char threeLetter[4];  // Three-letter code
    char oneLetter;       // One-letter code
} AminoAcid;

// Function to initialize the dictionary
void initializeDictionary(AminoAcid aminoAcids[]) {
    // Define amino acids with their names, three-letter codes, and one-letter codes
    AminoAcid aminoData[] = {
        {"Alanine", "Ala", 'A'},
        {"Cysteine", "Cys", 'C'},
        {"Aspartic Acid", "Asp", 'D'},
        {"Glutamic Acid", "Glu", 'E'},
        {"Phenylalanine", "Phe", 'F'},
        {"Glycine", "Gly", 'G'},
        {"Histidine", "His", 'H'},
        {"Isoleucine", "Ile", 'I'},
        {"Lysine", "Lys", 'K'},
        {"Leucine", "Leu", 'L'},
        {"Methionine", "Met", 'M'},
        {"Asparagine", "Asn", 'N'},
        {"Proline", "Pro", 'P'},
        {"Glutamine", "Gln", 'Q'},
        {"Arginine", "Arg", 'R'},
        {"Serine", "Ser", 'S'},
        {"Threonine", "Thr", 'T'},
        {"Valine", "Val", 'V'},
        {"Tryptophan", "Trp", 'W'},
        {"Tyrosine", "Tyr", 'Y'}
    };
    
    // Copy data to the aminoAcids array
    for (int i = 0; i < 20; i++) {
        aminoAcids[i] = aminoData[i];
    }
}

// Function to print the dictionary
void printDictionary(AminoAcid aminoAcids[], int size) {
    printf("Amino Acid Dictionary:\n");
    printf("-------------------------------\n");
    printf("Name               3-Letter  1-Letter\n");
    printf("-------------------------------\n");
    for (int i = 0; i < size; i++) {
        printf("%-18s %-8s %c\n", aminoAcids[i].name, aminoAcids[i].threeLetter, aminoAcids[i].oneLetter);
    }
    printf("-------------------------------\n");
}

int main() {
    AminoAcid aminoAcids[20];
    
    // Initialize the dictionary
    initializeDictionary(aminoAcids);
    
    // Print the dictionary
    printDictionary(aminoAcids, 20);
    
    return 0;
}

