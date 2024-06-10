#include <stdio.h>

int main(){
    int i, j; 
    int height = 5;

    for(i = 0; i < height; i++){ 
        printf("*"); 
        for(j = 0; j < height; j++){ 
            if ((i == 0 || i == height / 2) && j < height - 1) 
                printf("*"); 
            else if(i < height / 2 && j == height - 1 && i != 0) 
                printf("*"); 
            else
                printf(" "); 
        } 
        printf("\n"); 
    } 
} 
