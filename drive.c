#include "matriks.h"
#include <stdio.h>

int main(){
    MATRIKS M,T;
    printf("================\n");
    BacaMATRIKS(&M,3,4);
    printf("================\n");
    BacaMATRIKS(&T,4,2);
    printf("================\n");

    TulisMATRIKS(KaliMATRIKS(M,T));


    return 0;
}
