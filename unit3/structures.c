#include <stdio.h>

struct student{
    int math;
    int english;
    float average;
    char* name;
    char* group;
};

struct transport{
    int wheels;
    char* color;
    char* name;
};

int main (){
    struct student sonia = {10, 10, 10, "Sonia", "A"};
    struct student diego = {5, 7, 6.5, "Diego", "A"};

    struct transport car = {4, "black", "Honda Civic"};
    struct transport bus = {8, "purple", "Ruta 17"};
    struct transport motorbike = {2, "white", "Honda"};

    //Show information
    printf("Name: %s\n Total Score:%f\n", sonia.name, sonia.average);
    return 0;
}