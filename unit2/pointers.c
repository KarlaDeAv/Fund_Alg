#include <stdio.h>

//all variables that arent pointers are "conventional"

int edad = 18;
int* miguel; //pointer

int main(){
    miguel = &edad; //& --> direction (where the variable is)
    printf("dato: %p\n", &miguel);
    printf("dato: %p\n", &edad);
    printf("dato: %p\n", miguel);
    printf("dato: %d\n", *miguel); //* --> value (how much is the variable)
    
    return 0;
}