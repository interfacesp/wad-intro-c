#include "stdio.h"

int test();


int main(){

    char * crepes[] = {"mikado", "chocolat", "sarrasin"};
    int prix[] = {10, 21, 32};

    int i;
    for ( i = 0 ; i < 3; i++)
    {
        printf("%s \n", crepes[i]);
    }
    
    i= 0;
    while(i < 3 ){
        printf("%s \n", crepes[i]);
        i++;
    }

     for ( i = 0 ; i < 3; i++)
    {
        printf("%s......%d EUR\n", crepes[i], prix[i]);
    }
    test(1);

    return 0;
}

int test(int x){
    printf("hello");
    test(x);
}