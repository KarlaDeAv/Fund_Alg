#include <stdio.h>
#include "sum.h"

//cajitas de almacenamiento, usarlas despues en codigo
//Global variables//
int edad = 18; //integrer (entero)
float estatura = 1.65; //flotante (punto decimal)
char* name = "Karla Delgado"; //String, comillas dobles
char sexo = 'F'; //caracteres, comillas simples

int main(){
    int after10years = suma(edad, 10);
    printf("Mi edad despues de 10 años: %d", after10years);
    return 0;    
}