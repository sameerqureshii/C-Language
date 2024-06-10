#include <stdio.h>

int main() {
    int i, j; 
    int height = 7;
    int width = height - 3;
    int half = height / 2;

    for(i = 0; i < height; i++){ 
        printf("*"); 

        for(j = 0; j < width; j++){ 
        
            if((i == 0 || i == half) && j < (width - 1)){
                printf("*"); 
            } 
			else if(j == (width - 1) && i != 0 && i != half && i < half){
                printf("*"); 
            } 
			else if(i - j == half) {
                printf("*");
            } 
			else{
                printf(" "); 
            }
        } 
        printf("\n"); 
    } 
    return 0;
}

