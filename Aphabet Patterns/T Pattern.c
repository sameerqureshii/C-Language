#include <stdio.h>

int main(){
    int i, j; 
    int height = 5;

    for(i = 0; i < height; i++){ 
        for (j = 0; j < height; j++){ 
            if (i == 0) 
                printf("*"); 
            else if (j == height / 2) 
                printf("*"); 
            else
                printf(" "); 
        } 
        printf("\n"); 
    } 
} 
