#include <stdio.h> 

int main(){ 
    int height = 5; 
    int width = (2 * height) - 1; 
    int i, j; 
    
    for(i = 0; i < height; i++){ 
        printf("*"); 
        for (j = 0; j < height; j++){ 
            if ((i == 0) || (i == height / 2 
                            && j <= height / 2)) 
                printf("*"); 
            else
                continue; 
        } 
        printf("\n"); 
    } 
} 
