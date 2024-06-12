#include <stdio.h>
#include <string.h>

int main(){
	int i, j;
    char* letters[2][4] = {
        {"A", "B", "C", "D"},
        {"E", "F", "G", "H"}
    };

    for(i = 0; i < 2; i++){
        for (j = 0; j < 4; j++) {
            printf("%s\n", letters[i][j]);
        }
    }
    return 0;
}

//Output:
//A
//B
//C
//D
//E
//F
//G
//H
