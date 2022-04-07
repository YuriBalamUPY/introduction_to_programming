#include <stdio.h> //its just comment.

//DataType: 
//Create a variable: dataType anyName; | dataType anyName = 12; //Solo se declara una vez

int myInt = 24; //-> text format: %i, %d
float myFloat = 22.7; //-> text format: %f
char myChar = 'l'; // -> %c
int myArray[7] = { 5, 27, 43, 12, 8, 7, 0 };
                // 0  1   2   3   4  5  6 ...n
float myFloatArray[255] = {1.33, 2.55, 666.1};                
char word[10] = {'L', 'u', 'i', 's'};
char country[10] = "Mexico"; // %s
char* aName = "Gerardo";  // %s



int main(){

    //Modified ints
    printf("hola clase, myInt = %d\n", myInt);
    myInt = 25;
    printf("hola clase, myInt = %d\n", myInt);
    int yearsOld = 24;
    printf("%f\n", myFloatArray[1]);
    printf("%c\n", myChar);
    myChar = 'i';
    printf("%c\n", myChar);
    country[0] = 'I';
    country[1]= 't';
    country[2]= 'a';
    country[3]= 'l';
    country[4]= 'y';
    aName = "Gerardo";


    return 0;
}