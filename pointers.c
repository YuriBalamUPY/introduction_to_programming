#include <stdio.h>
#include <stdlib.h>

int edad = 25;
int mes = 2;

int main(int argc, char** argv){
    printf("La variable edad = %d\n",edad);
    printf("La dirección de la variable edad = %p\n" %edad);

    int* myPtr = NULL;
    myPtr = &edad;

    printf("La variable pointer 'myPtr' es igual a %p\n", myPtr);
    printf("La dirección de la variable 'myPtr' = %p\n", &myPtr);

    //Modificacion de un pointer:
    myPtr = &mes;
    myPtr = edad;

    //Problem: change the value of edad
    //edad = edad * 2; //edad = 25 * 2 --> edad = 50
    printf("El valor de lo que apunta 'myPtr' = %d\n", *myPtr);
    printf("La valor de variable 'edad' = %d\n",edad);
    *myPtr = *myPtr * 2;
    printf("After of be modified:--\n");
    printf("El valor de lo que apunta 'myPtr' = %d\n", *myPtr);
    printf("La valor de variable 'edad' = %d\n",edad);
    
    int* secondPtr = NULL;
    secondPtr = myPtr;
    return 0;
}