#include <stdio.h>

int main(){
    int i, size;
    printf("Enter array size: ");
    scanf("%d", &size);

    char names[size][100];

    for(i = 0; i < size; i++){
        printf("Enter value %d: ", i + 1);
        scanf("%s", names[i]);
    }
    printf("Values in the array:\n");
    for(i = 0; i < size; i++){
        printf("%s\n", names[i]);
    }
    return 0;
}

//Output:
//Enter array size: 4
//Enter value 1: 5
//Enter value 2: 6
//Enter value 3: 3
//Enter value 4: 9
//
//Values in the array:
//5
//6
//3
//9
