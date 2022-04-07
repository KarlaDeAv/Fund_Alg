#include <stdio.h>

int max(int array[], int len){
    int max;
    for(int i = 0; i < len; i++){
        if(array[i] > array[i + 1]){
            max = array[i];
        }else{
            max = array[i + 1];
        }
    }
    return max;
}

int main(){
    int array[]= {0,0,0};
    int len = sizeof(array)/sizeof(int);

    //Scan Array Values
    printf("Enter three numbers for the array: \n");
    scanf("%d%d%d", &array[0],&array[1],&array[2]);

    //Determine the biggest number
    int biggest = max(array,len);
    printf("The biggest number is: %d\n",biggest);
   
    return 0;
}