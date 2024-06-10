#include <stdio.h>

int main() {
    int i, j;
    int height = 5;
    int width = 7; 
    int counter = 0;

    for(i = 0; i < height - 1; i++){
        for (j = 0; j < width; j++){
            if (j == counter || j == width - counter - 1){
                printf("*");
            } else {
                printf(" ");
            }
        }
        counter++;
        printf("\n");
    }
    return 0;
}

