#include <stdio.h>

#define SIZE 5

#define PI 3.1416

int main(){

    const int len = 4;
    int myArray[SIZE] = {5, 1, 20, 60, 15};

    for int (i = 0; i < len; i++){
        printf("i: %d\n", i);
        printf(" array[%d] = %d, array[%d] = %d\n", i, myArray[i], i + 1);
        printf("--------\n")
    }
}