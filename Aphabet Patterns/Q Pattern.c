#include <stdio.h>

int main() {
    int i, j; 
    int height = 7; 
    int width = height;

    for(i = 0; i < height; i++){
        for(j = 0; j < width; j++){
            // 'O' part
            if ((i == 0 || i == height - 2) && (j > 0 && j < width - 1)){
                printf("*");
            }else if ((j == 0 || j == width - 1) && (i > 0 && i < height - 2)){
                printf("*");
            }
            // Tail part of 'Q'
            else if (i == j && i >= height / 2){
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }

   

    return 0;
}

