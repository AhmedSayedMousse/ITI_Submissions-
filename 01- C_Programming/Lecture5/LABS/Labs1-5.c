//
// Created by Ahmed Sayed Mousse on 11/27/2022.
//

#include <stdio.h>
int sum(int arr[10]);
void bubble_sort(int arr[]);
void binary_search(int *arr, int value, int l, int h);
int main(){
	printf("Hi, which lab would u like to see. 1-4\n");
	int in1, in2, arr[10];
	scanf("%d", &in1);
	switch (in1) {
		case 1:
			// This lab asks the user for 10 values, stores them in an array
			// Then prints them in reversed order.
			for (int i = 0; i < 10; i++) {
				printf("Please Enter number %d:",i);
				scanf("%d", arr+i);
			}
			printf("The values in reversed order\n");
			for (int i = 9; i > -1 ; i--) {
				printf("%d", arr[i]);
			}
			break;
		case 2:
			// This lab asks the user for 10 values, stores them in an array
			// Then prints there summation and average.
			for (int i = 0; i < 10; i++) {
				printf("Please Enter number %d:",i);
				scanf("%d", arr+i);
			}
			printf("Sum of array elements = %d", sum(arr));
			printf("Average of array elements = %d", sum(arr)/10);
			break;
		case 3:
			// This lab asks the user for 10 values, stores them in an array
			// Then prints there values after bubble sorting them
			for (int i = 0; i < 10; i++) {
				printf("Please Enter number %d:",i);
				scanf("%d", arr+i);
			}
			bubble_sort(arr);
			printf("The values in order are:\n");
			for (int i = 0; i < 10 ; i++) {
				printf("%d", arr[i]);
			}
			break;
		case 4:
			// This lab asks the user for 10 values, stores them in an array
			// Then uses linear search to search for the 11th input in the array
			// If found prints the number of times it was found else not found.
			for (int i = 0; i < 10; i++) {
				printf("Please Enter number %d:",i);
				scanf("%d", arr+i);
			}
			printf("Please Enter the number to search for:");
			scanf("%d", &in1);
			for (int i = 0; i < 10; i++) {
				if (arr[i] == in1)
					in2++;

			}
			printf(in2>0 ?"Value Not Exits": "Value Exists %d times",in2);
			break;
		case 5:
			for (int i = 0; i < 10; i++) {
				printf("Please Enter number %d:",i);
				scanf("%d", arr+i);
			}
			printf("Please Enter the number to search for:");
			scanf("%d", &in1);
			bubble_sort(arr);
			binary_search(arr, in1, 0, 10);
		default:
			break;
	}
}

void binary_search(int *arr, int value, int l, int h){
	if(l<h){
		int m = l+(h-l)/2;
		if (arr[m] == value){
			printf("Value Found\n");
		}else if( value > m){
			binary_search(arr, value, m+1, h);
		} else{
			binary_search(arr, value, l, m-1);
		}
	}
	printf("Value Not Found");
}
int sum(int arr[10]){
	int sum = 0;
	for (int i = 0; i < 10; i++) {
		sum+=arr[i];
	}
}

void bubble_sort(int *arr){
	for (int i = 0; i < 9; i++) {
		for(int j=0; j<9-i; j++){
			if ( arr[j]>arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}