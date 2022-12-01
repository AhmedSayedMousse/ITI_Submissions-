//
// Created by Ahmed Sayed Mousse on 11/27/2022.
//
#include <stdio.h>

int main() {
	int in1, in2 = 0;
	printf("Which assignment would u like to see? 1-3");
	scanf("%d", &in1);
	switch (in1) {
		case 1:
			// This assignment keeps asking the user for two numbers and
			// Then prints their summation. This program never ends.
			while (1){
				printf("Please enter first number\n");
				scanf("%d", &in1);
				printf("Please enter second number\n");
				scanf("%d", &in2);
				printf("The result is %d", in1+in2);
			}
		case 2:
			//This assignment takes from the user an id and password
			// It prints Incorrect ID, Incorrect Password or UserName
			// depending on the input. The user only has 3 tries.
			printf("Please, Enter the ID");
			scanf("%d", &in1);
			while (in2<3) {
				switch (in1) {
					case 1234:
						printf("Now, Enter the Password number");
						scanf("%d", &in1);
						if (in1 == 7788) {
							printf("The user name is : Ahmed");
							in2 = 0;
						} else {
							printf("Incorrect Password");
							in2++;

						}
					case 5678:
						printf("Now, Enter the Password number");
						scanf("%d", &in1);
						if (in1 == 5566) {
							printf("The user name is : Amr");
							in2 = 0;
						} else {
							printf("Incorrect Password");
						}
					case 9870:
						printf("Now, Enter the Password number");
						scanf("%d", &in1);
						if (in1 == 1122) {
							printf("The user name is : Wael");
							in2 = 0;
						} else {
							printf("Incorrect Password");
							in2++;
						}
					default:
						printf("Incorrect ID");
				}
				printf("Try again\n");
			}
			printf("No more tries");
			break;
		case 3:
			// This assignment takes an input from the user
			// the number of rows in the pyramid then prints the pyramid of *s.
			printf("Enter the height of the pyramid:");
			scanf("%d", &in1);
			for(int i=0; i<in1; i++){
				for(int j=0; j<(in1-1)-i; j++){
					printf(" ");
				}
				for(int j=0; j<2*i+1; j++){
					printf("*");
				}
				printf("\n");
			}
			break;
		default:
			break;
	}
}