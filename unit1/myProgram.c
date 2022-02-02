#include <stdio.h> //External library
#include "utils.h"
int num;

int main(){
    printf("Pick a number: ");
    scanf("%d",&num);
    int value= isGreaterThan10(num);
    if (value == 1){
        printf("The number you picked is greater than 10. (%d > 10)\n",num);
    } else {
        printf("The number you picked is NOT greater than 10. (%d < 10)\n",num);
    }
    return 0;
}