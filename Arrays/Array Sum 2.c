#include <stdio.h>

int main(){
    int i, c = 0;
    int array[5] = {60, 70, 6, 8, 2};

    for(i = 0; i < 5; i++){
        c += array[i];
    }
    printf("%d\n", c);
    return 0;
}

//Output:
//10 + 50 = 60
//20 + 60 = 80
//30 + 70 = 100
//40 + 80 = 120
