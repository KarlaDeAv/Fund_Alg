#include <stdio.h>
#include "/mnt/c/UPY/ALGORITHMS/TERMINAL/libraries/utils.h"

// int main(){   
//     int i = 1, j = 10;
//     for (;; i++, j = j + 1){
//         printf("i: %d, j: %d\n", i,j);
//         sleep(1000);
//     };
// }

int main(int argc, char ** argv){
    int nfor = atoi(argv[1]);
    int nwhile = atoi(argv[2]);
    
    printf("-even numbers-\n");
    for (int n = 2; n <= nfor; n = n + 2){
        printf("n: %d\n", n);
        sleep(1000);
    }
    
    int n = 1; 
    printf("-odd numbers-\n");
    while(n <= nwhile-1){
        n = n + 2;
        printf("n: %d\n", n);
        sleep(1000);
    }
}

