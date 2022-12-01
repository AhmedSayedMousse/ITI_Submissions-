//
// Created by Ahmed Sayed Mousse on 11/27/2022.
//

#include <stdio.h>
#include <stdlib.h>

int max(int arr[]);
int min(int arr[]);
int main() {
	int in1, in2, in3 = 0, arr[10], arr2[10], arr3[10];
	int passed=0, failed=0, highest=0, lowest=0;
	printf("Which assignment would u like to see? 1-2");
	scanf("%d", &in1);
	switch (in1) {
		case 1:
			// This Assignment asks the user for 10 values,
			// stores them in an array Then prints there minimum and maximum.
			for (int i = 0; i < 10; i++) {
				printf("Please Enter number %d:", i);
				scanf("%d", arr + i);
			}
			printf("Maximum of array elements = %d", max(arr));
			printf("Minimum of array elements = %d", min(arr));
			break;
		case 2:
			// This Assignment creates 3 10-student classes with random grades.
			// Then prints some statistics about the 3 classes.
			for (int i = 0; i < 10; i++) {
				arr[i] = rand()%100+1;
				if(arr[i]>=50){
					passed++;
				} else{
					failed++;
				}
				if (arr[i]>highest){
					highest = arr[i];
				} else if(arr[i]<lowest){
					lowest = arr[i];
				}
			}
			for (int i = 0; i < 10; i++) {
				arr2[i] = rand()%100+1;
				if(arr2[i]>=50){
					passed++;
				} else{
					failed++;
				}
				if (arr2[i]>highest){
					highest = arr2[i];
				} else if(arr2[i]<lowest){
					lowest = arr2[i];
				}
			}
			for (int i = 0; i < 10; i++) {
				arr3[i] = rand()%100+1;
				if(arr3[i]>=50){
					passed++;
				} else{
					failed++;
				}
				if (arr3[i]>highest){
					highest = arr3[i];
				} else if(arr3[i]<lowest){
					lowest = arr3[i];
				}
			}
			printf("The Number of students passed is %d",passed);
			printf("The Number of students failed is %d",failed);
			printf("The students Highest grade is %d",highest);
			printf("The students Lowest grade is %d",lowest);
			printf("The students Average grade is %d",(highest+lowest)/2);
		default:
			break;
	}
}
int max(int arr[10]){
	int x=0;
	for (int i = 0; i < 9; i++) {
		if (arr[i]>x){
			x= arr[i];
		}
	}
	return x;
}

int min(int arr[10]){
	int x=arr[0];
	for (int i = 0; i < 9; ++i) {
		if (arr[i]<x){
			x= arr[i];
		}
	}
	return x;
}