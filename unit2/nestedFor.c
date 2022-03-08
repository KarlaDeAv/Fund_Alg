#include <stdio.h>
#include "../libraries/utils.h" 
#include <stdlib.h>

int main(int argc, char** argv){

    //Validators
    //if(argc!= 2)

    for(int i = 0 ; i<= atoi(argv[1]); i = i + 1){
        printf("i: %d\n", i);
        sleep(1);

        for (int j = 2; j< atoi(argv[2]); j++){
            printf("\tj %d\n", j);
            sleep(1);
        }
        
    };

    return 0;
}