#include "stdio.h"
#include "string.h"

int main(){
    printf("Hello les WAD");

    char * tabChaines[]  = {"hello1","hello2"};

    int nombre = 10;
    int nombre2 = 11; 
    int nombre3 = 14;  
    char uneChaine[] = "Bienvenue";
    char secondString[] = "test";

    char tableauChaines[3][10];
    strcpy(tableauChaines[0],"mikado");
    strcpy(tableauChaines[1],"chocolat");
    strcpy(tableauChaines[2],"mikado");


    for (int j = 0; j < 2; j++)
    {
        /* code */
        printf("%s",tabChaines[j]);

    }
    
    
    for (int i = 0; i < 3; i+=1 )
    {
        /* code */

        printf("%s\n", tableauChaines[i]);
    }
    
    
    printf("Mes nombres sont  %d %d %d", nombre, nombre2, nombre3);
    printf("Ma chaine de type de string: %s",uneChaine);



    return 0;
}