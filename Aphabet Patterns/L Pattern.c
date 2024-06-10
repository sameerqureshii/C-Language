#include <stdio.h>

int main(){
    int i, j; 
    int height = 5;

    for (i = 0; i < height; i++) { 
        printf("*"); 
        for (j = 0; j <= height; j++) { 
            if (i == height - 1) 
                printf("*"); 
            else
                printf(" "); 
        } 
        printf("\n"); 
    } 
} 
