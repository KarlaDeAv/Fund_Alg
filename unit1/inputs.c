#include <stdio.h>

int num1; //Declarando la variable
int num2;

int main(){

    //Imprimir mensaje//
    printf("Enter num1:\n\tnum1: "); //print en pantalla
    scanf("%d", &num1); //Inputs Keyboard
    printf("Enter num2:\n\tnum2: ");
    scanf ("%d", &num2); //Output Screeen
    //Proceso//
    int sum = num1 + num2;
    printf("suma = %d\n", sum);
    return 0;
}