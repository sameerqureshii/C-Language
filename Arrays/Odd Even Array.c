#include<stdio.h>
main(){
	int i;
	int arr[5];
	
	printf("Enter values for this array:\n");
	for(i=1;i<=5;i++){
		scanf("%d",&arr[i]);
	}
	printf("\nOdd values in the array are:\n");
	
	for(i=1; i<5;i++){
		if(arr[i]%2 !=0){
			printf("\n%d",arr[i]);
		}
    }
	printf("\nEven values in the array are:\n");
	
	for(i=1; i<5;i++){
		if(arr[i]%2==0){
			printf("\n%d",arr[i]);
		}
	}
}

//Output:
//Enter values for this array:
//4
//5
//6
//7
//8
//
//Odd values in the array are:
//5
//7
//
//Even values in the array are:
//
//4
//6
