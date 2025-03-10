// library: premuses '#include' and the name of the library
#include <stdio.h>                      // std = standard i = input o = output
#include <string.h>                     // for useage of strings

int main(void) {                        // 'void' could be left out, bc it has no output to provide

    int zahl = 42;                      // first declaration of the int
    zahl = 24;                          // second declaration of the int, but without the the int
    double pi = 3.14;                   // floating number, could be possible to use 'float' as floating number, ALWAYS separating with '.' not ','
    short kurz = 2;                     // 4 byte and for a useage of short numbers
    long lang = 4;                      // 8 byte, the doubled amount of useage possible
    long grossezahl = 23894213848;
    char zeichen = 'j';                 // shows symbol/ character
    int groesse_im_speicher = sizeof(grossezahl);
    double gehalt = 2343.08972;
    int a = 23;
    int b = 3;
    int ergebnis = a%b;                 // modulo = rest of the full dividation
    int eingabe = 10;

    printf("Hello World \n");
    printf("Zahl: %i", zahl);           // important to include '%i' for integter digit
    printf("\nGroesse im Speicher: %i", groesse_im_speicher);
    printf("\nZeige mir das Symbol: %c", zeichen);  // %i = for integer, %c = character, etc.
    printf("\nGehalt: %3.2f", gehalt);  // shows number of digits bevor and after the comma
    printf("\nErgebnis: %i", ergebnis);
    
    printf("\nBitte gib eine Zahl ein: ");

    // do {
    //     scanf("%d", &eingabe);              // '&'-operator needs to be set before the scan-input
    // if (eingabe > 0 && eingabe < 111) { 
    //     printf("\nFolgende Eingabe: %i", eingabe);
    // } else { 
    //     printf("Falsche Eingabe");
    // } 
    // } while(eingabe < 0 || eingabe > 111);
    
    while (1==1) {
        printf("\nServus!");
    }

    return 0;
}