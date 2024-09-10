#include <stdio.h>
#include <math.h>

int main(){
    int x = 0;
    
    // Read the input
    printf("Enter an integer: ");
    scanf("%d", &x);
    
    // A loop to generate the pattern
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            // Print '#' for the boundary of the pattern
            if (j == i || j == (x - i - 1)) { // Adjusted indices for correctly positioning '#' 
                printf("#");
            } else {
                printf("-");
            }
        }
        printf("\n"); // New line after each row
    }

    return 0;
}