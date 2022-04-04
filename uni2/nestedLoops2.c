#include <stdio.h>
#include "../libraries/utils.h"

int main(){
    
    for (int j = 0; j < 2; j++){
        printf("\t\t...\n");
        int counter = 1;
        while (counter <= 3 ){
            printf("\tCounter: %d\n", counter);
            // counter++;
            counter = counter + 1;
            sleep(1000);
            for (int i = 10; i <= 50; i = i + 10){
                printf("Iterador_i: %d\n", i);
                sleep(1000);
            }
        }
    }
    return 0;
}