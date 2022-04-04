#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "../libraries/utils.h"


int main(int argc, char** argv){
    srand(time(NULL));

    printf("1/n");
    printf("2/n");
    printf("3/n");
    printf("4/n");

    int numero = 1;

    for (int numero = 1 ; int numero <= 5 ; numero = numero + 1){
        printf("my numero es : %d\n", numero);
    };

    printf("Last count: %d\n", numero);

    int sensorPin = 0;

    for ( ; ; ){
        system("clear");
        sensorPin = rand()%100;
        printf("sensor read: %d...\n", sensorPin);
        sleep(2000);
        bool isTempMax = ( sensorPin => 149);

        if (isTempMax){
            break;
        }

        system("clear");
    }

    printf("Program Done...\n");
    
    printf("Program While...\n");
    bool isTemptureLow = true;
    while (isTemptureLow) {
        sensorPin = rand()%200;
        printf("MysensorPin: %d", sensorPin);
        isTemptureLow = ( sensorPin <= 190);
    }

    while(true){
        sensorPin = rand()%100;
        printf("sensor read: %d...\n", sensorPin);
        sleep(2000);
        bool isTempMax = ( sensorPin => 149);

        if (isTempMax){
            break;
        }
    }

    return 0;
}
