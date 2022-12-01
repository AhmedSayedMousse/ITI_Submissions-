//
// Created by Ahmed Sayed Mousse on 11/27/2022.
//
#include <stdio.h>
int main(void){

	printf("Hi, which lab would u like to see. 1-4\n");
	int in1, in2;
	scanf("%d", &in1);
	switch (in1) {
		case 1:
			// This lab prints my short biography.
			printf("Hi, My name is Ahmed Sayed Mousse\n");
			printf("My birth date is 26 Fep 1999\n");
			printf("I graduate from Faculty of Engineering Shobra college\n");
			printf("Benha University 2022\n");
			break;
		case 2:
			// This lab takes an input from the user then prints it again
			printf("Please, Enter the value: ");
			scanf("%d", &in1);
			printf("The value you entered is %d", in1);
			break;
		case 3:
			// This lab takes two numbers from the user then prints
			// there summation and multiplication.
			printf("Please Enter the first number 1:");
			scanf("%d", &in1);
			printf("Please Enter the second number 2:");
			scanf("%d", &in2);
			printf("a + b = %d\n", in1+in2);
			printf("a x b = %d", in1*in2);
			break;
		case 4:
			// This lab executes some bitwise operations on two input numbers.
			printf("Please Enter the first number 1:");
			scanf("%d", &in1);
			printf("Please Enter the second number 2:");
			scanf("%d", &in2);

			printf("%d & %d = %d\n", in1, in2, in1 & in2);
			printf("%d | %d = %d\n", in1, in2, in1 | in2);
			printf("%d ^ %d = %d\n", in1, in2, in1 ^ in2);
			printf("%d << %d = %d\n", in1, in2, in1 << in2);
			printf("%d >> %d = %d\n", in1, in2, in1 >> in2);
			break;
	}

	return 0;
}