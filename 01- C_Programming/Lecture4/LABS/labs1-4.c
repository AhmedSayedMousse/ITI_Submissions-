//
// Created by Ahmed Sayed Mousse on 11/27/2022.
//
#include <stdio.h>
#include "printmyname.h"
int GetMax(int a, int b);
void swap(void);
int factorial(int num);
int g1, g2;
int main(){
	printf("Hi, which lab would u like to see. 1-4\n");
	int in1, in2, arr[10];
	scanf("%d", &in1);
	switch (in1) {
		case 1:
			// This lab takes from the user 2 numbers then uses a function
			// to return the maximum.
			printf("Please, Enter Value 1:");
			scanf("%d", &in1);
			printf("Please, Enter Value 2:");
			scanf("%d", &in2);
			printf("The Maximum value is %d", GetMax(in1, in2));
			break;
		case 2:
			// This lab takes from the user two values for two global variables
			// Then it swaps the values using a function.
			printf("Please, Enter Value 1:");
			scanf("%d", &in1);
			printf("Please, Enter Value 2:");
			scanf("%d", &in2);
			swap();
			printf("Value 1 after swap:%d", g1);
			printf("Value 2 after swap:%d", g2);
			break;
		case 3:
			// This lab defines a function PrintMyName in another file.
			// It then calls this function from the main of this file.
			PrintMyName();
			break;
		case 4:
			printf("Please Enter the number:");
			scanf("%d", &in1);
			printf("The factorial using recursion is: %d", factorial(in1));
			break;
		default:
			break;
	}
	return 0;
}

int factorial(int num){
	if (num==1){
		return 1;
	}
	return num * factorial(num-1);
}
void swap(void){
	int temp = g1;
	g1 =g2;
	g2 = temp;
}
int GetMax(int a, int b){
	// returns the maximum of the two arguments.
	return a>b ? a:b;
}