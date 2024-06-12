#include <stdio.h>

int main(){
    int i, size;
    
    printf("Enter size: ");
    scanf("%d", &size);
    int array[size];

    for(i = 0; i < size; i++){
        scanf("%d", &array[i]);
    }

    int smallest = array[0];
    for(i = 0; i < size; i++){
        if (array[i] < smallest) {
            smallest = array[i];
        }
    }
    printf("Smallest number: %d\n", smallest);
    return 0;
}

//Output:
//Enter size: 5
//4
//3
//5
//6
//7

//Smallest number: 3
