#include <stdio.h>

int main() {
    int i, j, n = 5;

    for(i = 1; i <= n - 0; i++){
        for(j = 1; j <= i; j++){
            printf("* ");
        }
        printf("\n");
    }

    for(i = n - 1; i >= 1; i--){
        for(j = 1; j <= i; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

//Output:
//*
//* *
//* * *
//* * * *
//* * * * *
//* * * *
//* * *
//* *
//*
