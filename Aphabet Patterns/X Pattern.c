#include <stdio.h>

int main(){
    int i, j, counter = 0;
    int height = 5;

    for(i = 0; i <= height; i++){ 
        for(j = 0; j <= height; j++) { 
            if (j == counter || j == height - counter) 
                printf("*"); 
            else
                printf(" "); 
        } 
        counter++; 
        printf("\n"); 
    } 
} 
