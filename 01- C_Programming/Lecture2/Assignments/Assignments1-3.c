//
// Created by Ahmed Sayed Mousse on 11/27/2022.
//
#include <stdio.h>

int main() {
	int in1, in2, arr[10];
	printf("Which assignment would u like to see? 1-3");
	scanf("%d", &in1);
	switch (in1) {
		case 1:
			// This assignment takes from the user 10 numbers then
			// search for the 11th input in them.
			for (int i = 0; i < 10; i++) {
				printf("Enter Number %d", i + 1);
				scanf("%d", arr + i);
			}
			printf("Enter the value to search:");
			scanf("%d", &in1);
			for (int i = 0; i < 10; i++) {
				if (arr[i] == in1) {
					printf("Value exists at element number: %d", i);
					break;
				}
			}
			printf("Value doesn't exist");
			break;
		case 2:
			//This assignment takes from the user an id and password
			// It prints Incorrect ID, Incorrect Password or UserName
			// depending on the input.
			printf("Please, Enter the ID");
			scanf("%d", &in1);
			if (in1 == 12345){
				printf("Now, Enter the Password number");
				scanf("%d", &in1);
				if (in1 == 67890){
					printf("The user name is : UserName");
				} else{
					printf("Incorrect Password");
				}
			} else{
				printf("Incorrect ID");
			}
			break;
		case 3:
			//This assignment the maximum of 3 input numbers.
			in1 = 0;
			for (int i = 0; i < 3; i++) {
				printf("Enter Number %d", i + 1);
				scanf("%d", &in2);
				if (in2 > in1){
					in1 = in2;
				}
			}
			printf("Maximum number is %d", in1);
			break;
		default:
			break;
	}
}