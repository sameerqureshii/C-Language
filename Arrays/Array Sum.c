#include <stdio.h>

int main(){
	int i;
    int array1[] = {10, 20, 30, 40};
    int array2[] = {50, 60, 70, 80};
    int array3[4];

    for(i = 0; i < 4; i++){
        array3[i] = array1[i] + array2[i];
        printf("%d + %d = %d\n", array1[i], array2[i], array3[i]);
    }
    return 0;
}

//Output:
//10 + 50 = 60
//20 + 60 = 80
//30 + 70 = 100
//40 + 80 = 120
