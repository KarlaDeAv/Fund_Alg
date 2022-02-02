#include <stdio.h>

int isGreaterThan10(int num){
    int resultado = 0;
    if (num > 10){
        resultado = 1;
    } else {
        resultado = 0;
    }
    return resultado;
}