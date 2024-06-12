#include <stdio.h>

int main(){
	int i, j;
    int array[5] = {60, 20, 3, 80, 1};

    for(i = 0; i < 5 - 1; i++){
        for(j = 0; j < 5 - 1 - i; j++){
            if (array[j] > array[j + 1]){
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    for(i = 0; i < 5; i++){
        printf("%d ", array[i]);
    }
    return 0;
}

//Output:
//0
//3
//4
//9
//20
