#include <stdio.h>

int main(){
    int i, j, s, r = 5;

    for(i = r; i >= 1; i--){
        for(s = i; s < r; s++){
            printf("  ");
        }
        for(j = 1; j <= 2 * i - 1; j++){
            if(i == r || j == 1 || j == 2 * i - 1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}

//Output:
// * * * * * * * * *
//   *           *
//     *       *
//       *   *
//         *
