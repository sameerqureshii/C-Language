#include <stdio.h>

int main(){
    int i, j, counter = 2; 
    int height = 5;

    for(i = 0; i < height; i++){ 
        printf("*"); 
        for (j = 0; j <= height; j++){ 
            if (j == height) 
                printf("*"); 
            else if ((i >= height / 2) && (j == counter || j == height - counter - 1)) 
                printf("*"); 
            else
                printf(" "); 
        } 
        if(i >= height / 2){ 
            counter++; 
        } 
        printf("\n"); 
    } 
} 
