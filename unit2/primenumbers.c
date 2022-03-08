#include <stdio.h>


int main(){
    int num;
    int r2=0;
    int r3=0;
    int r5=0;
    int r7=0;
    
    printf("Pick a number: ");
    scanf("%d", &num);
    if (num==2||num==3||num==5||num==7){
        printf("%d is a prime number\n", num);
    }
     else if(r2 == num%2||r3 == num%3||r5 == num%5||r7 == num%7){
        printf("%d is NOT a prime number\n", num);
    }else{
        printf("%d is a prime number\n", num);
    }
    return 0;
}