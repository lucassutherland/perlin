#include <stdio.h>
#include <stdlib.h>

#define LENGTH 10

void generate(double arr[LENGTH]);
void display(double arr[LENGTH]);

int main(void) { 
    
    double arr[LENGTH];
    
    printf("Generating values...\n");
    generate(arr);
    
    printf("Printing array...\n");
    display(arr);
    
    return 0;
}

void generate(double arr[LENGTH]) {
    for (int i; i < LENGTH; i++) {
        arr[i] = rand() / 32767.0;
        }
}

void display(double arr[LENGTH]) {
    for (int i; i < LENGTH; i++) {
        printf("%.2f ", arr[i]);
    }
}