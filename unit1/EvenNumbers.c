#include <stdio.h>

int main (){
    int num1;
    printf("Enter a number to know if it's an EVEN or ODD number: ");
    scanf("%d", &num1);
    int residue = num1%2;

    if(residue == 0){
        printf("%d is an EVEN number\n", num1);
    }else{
        printf("%d is an ODD number\n", num1);
    }

    return 0;
}