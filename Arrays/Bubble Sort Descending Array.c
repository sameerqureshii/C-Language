#include <stdio.h>

int main(){
	int i, j;
    int array[5];

    printf("Enter 5 integers for the array:\n");
    for(i = 0; i < 5; i++){
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array[i]);
    }
    for(i = 0; i < 5 - 1; i++){
        for(j = 0; j < 5 - 1 - i; j++){
            if (array[j] < array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    printf("Sorted array in descending order: ");
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
