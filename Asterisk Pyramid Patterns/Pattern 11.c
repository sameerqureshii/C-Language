#include <stdio.h>

int main(){
    int i, j, k;
    
    for(i = 1; i <= 4; i++){
        for(j = 1; j < i; j++){
            printf("");
        }
        for(k = i; k <= 5; k++){
            printf("* ");
        }
        printf("\n");
    }
    for(i = 0; i <= 4; i++){
        for(j = 0; j <= i; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

//Output:
//* * * * * 
//* * * * 
//* * * 
//* * 
//* 
//* * 
//* * * 
//* * * * 
//* * * * * 
