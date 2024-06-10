#include <stdio.h>

int main(){
    int i, j; 
    int height = 5;
    int middle = height / 2;

    for (i = 0; i < height; i++){
        printf("*");

        for(j = 0; j < height; j++){
            if(i == middle - j || i == middle + j){
                printf("*");
                break;
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

