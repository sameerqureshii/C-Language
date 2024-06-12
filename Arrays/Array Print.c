#include <stdio.h>

int main(){
	int i;
    char* car[5] = {"Volve", "BMW", "Ford", "Mazda", "Tesla"};
    car[2] = "Civic";

    for(i = 0; i < 5; i++){
        printf("%s\n", car[i]);
    }
    return 0;
}

//Output:
//Volve
//BMW
//Civic
//Mazda
//Tesla
