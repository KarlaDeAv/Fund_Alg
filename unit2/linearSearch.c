#include <stdio.h>
#include <stdlib.h>

int linearSearch(int array[], int sizeArr, int valueToFind){
    for (int index = 0; index < sizeArr; index ++){
       if(array[index] == valueToFind){
           return index;
       }
    }
    return -1;
}

int main(int argc, char** argv){
    int array[5] = {50, 5, 1, 37, 4};
    int indexFound = linearSearch(array, 5, atoi(argv[1]));
    printf("index found %d\n", indexFound);
    return 0;
}