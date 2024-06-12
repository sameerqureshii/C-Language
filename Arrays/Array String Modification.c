#include <stdio.h>

int main(){
    int i, n;
    printf("Enter array size: ");
    scanf("%d", &n);

    char names[n][100];
    for(i = 0; i < n; i++){
        printf("Enter value for Array %d: ", i + 1);
        scanf("%s", names[i]);
    }
    printf("Output:\n");
    for (i = 0; i < n; i++){
        printf("%s1\n", names[i]);
    }
    return 0;
}

//Output:
//Enter array size: 4
//Enter value for Array 1: 3
//Enter value for Array 2: 2
//Enter value for Array 3: 6
//Enter value for Array 4: 8

//Output:
//31
//21
//61
//81
