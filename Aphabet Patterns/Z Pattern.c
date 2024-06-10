#include <stdio.h>

int main() {
    int i, j;
    int height = 5;
    int counter = height - 1;

    for(i = 0; i < height; i++){ 
        for(j = 0; j < height; j++){ 
            if (i == 0 || i == height - 1 || j == counter) 
                printf("*"); 
            else
                printf(" "); 
        } 
        counter--; 
        printf("\n"); 
    } 
    return 0;
}

