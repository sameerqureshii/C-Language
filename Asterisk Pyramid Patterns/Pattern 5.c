#include <stdio.h>

int main(){
    int i, j, k, rows = 5;

    for(i = 1; i <= rows; i++){
    	
        for(j = i; j < rows; j++){
            printf("  ");
        }
        
        for(k = 1; k <= i; k++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

//Output:
//         *
//       * *
//     * * *
//   * * * *
// * * * * *
