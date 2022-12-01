//
// Created by Ahmed Sayed Mousse on 11/27/2022.
//
#include <stdio.h>
int sum(int*, int*);
void sum_sub(int*, int*);
int sum_array(int* arr);
int dot_product(int *arr1, int *arr2);
int main(){
	printf("Hi, which lab would u like to see. 1-5\n");
	int in1, in2=10, arr[10],arr2[10];
	int *ptr = &in2;
	scanf("%d", &in1);
	switch (in1) {
		case 1:
			// This lab	changes the value of a variable using a pointer to it.
			printf("X before change is: %d", in2);
			*ptr = 20;
			printf("X after change is: %d", in2);
			break;
		case 2:
			// This lab takes two values from user then pass them by reference
			// to another function that sums them.
			printf("Please Enter Value 1:");
			scanf("%d", &in1);
			printf("Please Enter Value 2:");
			scanf("%d", &in2);
			printf("The result is: %d", sum(&in1, &in2));
			break;
		case 3:
			// This lab takes two values from user then pass them by reference
			// to another function that returns their summation & subtraction
			// in pointers.
			printf("Please Enter Value 1:");
			scanf("%d", &in1);
			printf("Please Enter Value 2:");
			scanf("%d", &in2);
			sum_sub(&in1, &in2);
			printf("The sum result is: %d & The sub result is: %d", in1, in2);
			break;
		case 4:
			// This lab calculates the summation of an array using pointer to
			// its first element
			for (int i = 0; i < 10; i++) {
				printf("Please Enter Value %d:", i);
				scanf("%d", arr+i);
			}
			printf("The summation of the array is: %d", sum_array(arr));
			break;
		case 5:
			// This lab calculates the dot product of two arrays and prints it.
			for (int i = 0; i < 10; i++) {
				printf("Please Enter Value %d:", i);
				scanf("%d", arr+i);
			}
			printf("Now fill the second array\n");
			for (int i = 0; i < 10; i++) {
				printf("Please Enter Value %d:", i);
				scanf("%d", arr2+i);
			}
			printf("The dot product of the two arrays is %d",
				   dot_product(arr, arr2));
		default:
			break;
	}
}

int sum(int* a, int* b){
	return (*a)+(*b);
}
void sum_sub(int* a, int* b){
	int sum = (*a) + (*b);
	int sub = (*a) - (*b);
	*a = sum;
	*b = sub;
}

int sum_array(int* arr){
	int sum=0;
	for (int i = 0; i < 10; i++) {
		sum+= arr[i];
	}
	return sum;
}

int dot_product(int *arr1, int *arr2){
	int product=0;
	for (int i = 0; i < 10; i++) {
		product+= arr1[i]*arr2[i];
	}
	return product;
}