#include <stdio.h>

int main(){
    int a;  //length
    int b;  //width

    //Obtener valores
    printf("Type the length of the figure: \n");
    scanf("%d", &a);
    printf("Type the width of the figure: \n");
    scanf("%d", &b);

    //Calculos
    int area = a*b; //base x altura
    if(a == b){
        printf("Your figure is a square!! The area is: %d\n", area);
    }else{
        printf("Your rectangle has an area of: %d\n", area);
    }
    
    return 0;
}