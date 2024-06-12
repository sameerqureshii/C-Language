#include <stdio.h>

int main(){
	int i, j, k;
    int array[5] = {60, 20, 3, 4, 9};
    int swap;

    for(i = 0; i < 5; i++){
    	
        for (j = 0; j < 5 - 1; j++){
        	
            if (array[j + 1] > array[j]){
                swap = array[j + 1];
                array[j + 1] = array[j];
                array[j] = swap;
            }
        }
    }
    for(k = 0; k < 5; k++){
        printf("%d\n", array[k]);
    }
    return 0;
}

//Output:
//0
//3
//4
//9
//20
