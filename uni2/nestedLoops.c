#include <stdio.h>
#include "../libraries/utils.h"

int main(){
    for (int i = 0; i < 50; i = i + 10){
        printf("Iterador_i: %d\n", i);
        sleep(1000);

        int counter = 1;
        while (counter <= 3 ){
            printf("\tCounter: %d\n", counter);
            // counter++;
            sleep(1000);

            for (int j = 0; j < 2; j++){
                printf("\t\t...\n");
            }
        }
    }
    return 0;
}