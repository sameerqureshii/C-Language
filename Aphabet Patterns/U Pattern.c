#include <stdio.h>

int main(){
    int i, j; 
    int height = 5;
    int width = 6; 

    for (i = 0; i < height; i++){ 
        for (j = 0; j < width; j++){ 
            if ((j == 0 || j == width - 1) && i != height - 1){
                printf("*");
            } else if (i == height - 1 && j > 0 && j < width - 1){
                printf("*");
            } else {
                printf(" "); 
            }
        }
        printf("\n"); 
    }
    return 0;
}

