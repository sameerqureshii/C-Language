#include <stdio.h>

int main(){
    int array1[4] = {10, 20, 30, 40};
    int array2[4] = {50, 60, 70, 80};

    printf("%d\n", array1[0] + array2[0]);
    printf("%d\n", array1[1] + array2[1]);
    printf("%d\n", array1[2] + array2[2]);
    printf("%d\n", array1[3] + array2[3]);

    return 0;
}

//Output:
//10 + 50 = 60
//20 + 60 = 80
//30 + 70 = 100
//40 + 80 = 120
