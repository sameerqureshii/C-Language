#include <stdio.h>

int main(){
	int i;
    int array[8] = {5, 7, 8, 11, 3, 14, 8, 2};
    int smallest = array[0];
	    for(i = 1; i < 8; i++){
        if(array[i] < smallest){
            smallest = array[i];
        }
    }
    printf("Smallest number: %d\n", smallest);
    return 0;
}

//Output:
//Smallest number: 2
