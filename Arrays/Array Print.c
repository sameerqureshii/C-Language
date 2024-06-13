#include <stdio.h>

int main(){
	int i;
    char* car[5] = {"Volve", "BMW", "Ford", "Dodge", "Ferrari"};
    car[2] = "Audi";

    for(i = 0; i < 5; i++){
        printf("%s\n", car[i]);
    }
    return 0;
}

//Output:
//Volve
//BMW
//Audi
//Dodge
//Ferrari 
