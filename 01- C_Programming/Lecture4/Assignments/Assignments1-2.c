//
// Created by Ahmed Sayed Mousse on 11/27/2022.
//
#include <stdio.h>
#include "functions.h"
int max(int arr[]);
int min(int arr[]);
int main() {
	int in1, in2, in3 = 0, arr[4];
	char operation[10];
	printf("Which assignment would u like to see? 1-2");
	scanf("%d", &in1);
	switch (in1) {
		case 1:
			// This assignment takes 4 values from the user.
			// it then prints the maximum and minimum using function calls.
			for (int i = 0; i < 4; ++i) {
				printf("Please Enter the value %d", i);
				scanf("%d", arr + (i - 1));
			}
			printf("Them maximum of the 4 values is: %d\n", max(arr));
			printf("Them minimum of the 4 values is: %d\n", min(arr));
			break;
		case 2:
			// This assignment takes from the user an arithmetic operation and
			// Then one or two operands, depending on the operation.
			// The program will use then use custom-built functions to
			// apply this operation to the operands and return the result.
			printf("Please Enter one of the following operation IDs\n");
			printf("1-Add, 2-Subtract, 3-Multiply, 4-Divide, 5-reminder\n");
			printf("6-And, 7-Or, 8-Xor, 9-Not, 10-Increment, 11-Decrement\n");
			scanf("%d", &in1);
			printf("Please Enter the first number");
			scanf("%d", &in2);
			switch (in1) {
				case 1 ... 8:
					printf("Please Enter the Second number");
					scanf("%d", &in3);
					switch (in1) {
						case 1:
							Add(in2, in3);
							break;
						case 2:
							Sub(in2, in3);
							break;
						case 3:
							Mul(in2, in3);
							break;
						case 4:
							Div(in2, in3);
							break;
						case 5:
							Rem(in2, in3);
							break;
						case 6:
							And(in2, in3);
							break;
						case 7:
							Or(in2, in3);
							break;
						case 8:
							Xor(in2, in3);
							break;



					}
					break;
				case 9 ... 11:
					switch (in1) {
						case 9:
							Not(in2);
							break;
						case 10:
							Inc(in2);
							break;
						case 11:
							Dec(in2);
							break;
					}
					break;
			}

	}

}

int max(int arr[4]){
	int x=0;
	for (int i = 0; i < 4; i++) {
		if (arr[i]>x){
			x= arr[i];
		}
	}
	return x;
}

int min(int arr[4]){
	int x=arr[0];
	for (int i = 0; i < 3; ++i) {
		if (arr[i]<x){
			x= arr[i];
		}
	}
	return x;
}