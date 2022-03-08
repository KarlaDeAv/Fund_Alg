#include <stdio.h>

//Prototype (theres a function down below)//

int sumaNumbers(int num1, int num2);

void modificarVariables (int a, int b){
    a = a*2;
    b = b*2;
    printf("localVariables Arguments::: a: %d, b=%d\n", a, b);
    return;
}

//Function per value
void modificarVariablesAddress(int* variable1, int* variable2){
    *variable1 = *variable1 * 2;
    *variable2 = *variable2 * 2;
    return;
}

int a = 10;
int b = 20;

int main(int argc, char** argv){
    //Calling the function
    int mySuma = sumaNumbers(2, 4);
    printf("Suma 10 + 20 = %d\n", sumaNumbers(10, 20));
    //modify variables
    printf("a: %d  b: %d\n", a, b);
    modificarVariables (a, b);
    printf("a: %d  b: %d\n", a, b);
    //pointers
    printf(":::a: %d  b: %d\n", a, b);
    modificarVariablesAddress (&a, &b);
    printf("a: %d  b: %d\n", a, b);
    return 0;
}

//Define the function
int sumaNumbers(int num1, int num2){
    //Local variables
    int suma = 0;
    suma = num1 + num2;
    
    return suma;
}
