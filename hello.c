// library: premuses '#include' and the name of the library
#include <stdio.h>                      // std = standard i = input o = output
#include <string.h>                     // for useage of strings

int main(void) {

    int zahl = 42;                      // first declaration of the int
    zahl = 24;                          // second declaration of the int, but without the the int
    double pi = 3.14;                   // floating number, could be possible to use 'float' as floating number, ALWAYS separating with '.' not ','
    short kurz = 2;                     // 4 byte and for a useage of short numbers
    long lang = 4;                      // 8 byte, the doubled amount of useage possible
    long grossezahl = 23894213848;
    char zeichen = 'j';                 // shows symbol/ character

    int groesse_im_speicher = sizeof(grossezahl);

    printf("Hello World \n");
    printf("Zahl: %i", zahl);           // important to include '%i' for integter digit
    printf("\nGroesse im Speicher: %i", groesse_im_speicher);
    printf("\nZeige mir das Symbol: %c", zeichen);  // %i = for integer, %c = character, etc.
    
    
    return 0;
}