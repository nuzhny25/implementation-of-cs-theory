#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 100

int main() {
    // Seed the random number generator
    srand(time(NULL));
    
    // Declare the array
    int random_array[ARRAY_SIZE];
    
    // Fill the array with random numbers between 1 and 100
    for (int i = 0; i < ARRAY_SIZE; i++) {
        random_array[i] = (rand() % 100) + 1;
    }
    
    // Print the array (optional)
    printf("Random array of %d elements (1-100):\n", ARRAY_SIZE);
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("%d, ", random_array[i]);
    }
    
    return 0;
}