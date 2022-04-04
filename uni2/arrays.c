#include stdio.h>

int main(int argc, char** argv){
    int myVar = 25;
    int alturas[4] = {1.70, 1.80, 1.50, 1.68}; // len = 4, D =
    //         index:  0      1     2      3
    int img[3][3] = { //D = 2
    {255, 0, 255},
    {0, 255, 0},
    {0, 255, 0},
    };

    printf("el valor de arr[2]: %f\n", alturas[2]);
    return 0;
}
