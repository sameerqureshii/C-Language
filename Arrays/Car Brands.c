#include <stdio.h>
#include <string.h>

int main(){
	int i;
    char* cars[5] = {"BMW", "Audi", "Ferrari", "Ford", "Bugatti"};
    cars[2] = "Supra";
    for(i = 4; i >= 0; i--){
        printf("%d = %s\n", i, cars[i]);
    }
    return 0;
}

//Output:
//4 = Bugatti
//3 = Ford
//2 = Supra
//1 = Audi
//0 = BMW
