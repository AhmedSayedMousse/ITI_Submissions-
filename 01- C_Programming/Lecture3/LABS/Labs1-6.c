

//
// Created by Ahmed Sayed Mousse on 11/27/2022.
//
#include <stdio.h>
int main(){
	printf("Hi, which lab would u like to see. 1-5\n");
	int in1, in2, arr[10];
	scanf("%d", &in1);
	switch (in1) {
		case 1:
			//This lab prints the same string 10 times in a row.
			for(int i=0;i<10;i++)
				printf("Ahmed\n");
			break;
		case 2:
			//This lab prints the first 10 natural numbers.
			printf("The first 10 natural numbers are:\n");
			for (int i = 0; i < 10; ++i) {
				printf("%d", i);
			}
			break;
		case 3:
			// This numbers prints the summation and average of 10 input numbers
			printf("Enter the 10 numbers\n");
			for (int i = 0; i < 10; i++) {
				printf("Number-%d :", i);
				scanf("%d", &in2);
				in1+=in2;
			}
			printf("The sum of the 10 numbers is:%d", in1);
			printf("The average of the 10 numbers is:%d", in1/10);
			break;
		case 4:
			// This lab will keep taking the result of 3 x 4 from the user
			// until he enters it right.
			printf("Enter the answer of 3 x 4:\n");
			scanf("%d", &in1);
			while(in1!=12){
				printf("Not correct, Please try again: ");
				scanf("%d", &in1);
			}
			printf("Thank You");
			break;
		case 5:
			// This lab prints the multiplication table for the input number.
			printf("Enter the number to display its multiplication table: ");
			scanf("%d", &in1);
			for (int i = 0; i < 13; ++i) {
				printf("%d x %d = %d\n", in1, i, in1*i);
			}
			break;
		case 6:
			// This lab prints the factorial of the input number.
			printf("Enter an integer:\n");
			scanf("%d", &in1);
			in2=0;
			while (in1>1){
				in2 *=in1;
				in1--;
			}
			printf("Factorial= %d", in1);
			break;
		default:
			break;
	}
}