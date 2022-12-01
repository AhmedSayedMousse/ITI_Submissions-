//
// Created by Ahmed Sayed Mousse on 11/27/2022.
//
#include <stdio.h>

int main(){
	int in1, in2, in3;
	printf("Which assignment would u like to see? 1-3");
	scanf("%d", &in1);
	switch (in1) {
		case 1:
			// This assignment prints a 6 row pyramid
			//     *
			//    ***
			//   *****
			//  *******
			// *********
			//***********
			for(int i=0; i<6; i++){
				for(int j=0; j<5-i; j++){
					printf(" ");
				}
				for(int j=0; j<2*i+1; j++){
					printf("*");
				}
				printf("\n");
			}
			break;
		case 2:
			// This assignment takes 3 numbers and print them in reversed order.
			printf("Please Enter the first number 1:");
			scanf("%d", &in1);
			printf("Please Enter the second number 2:");
			scanf("%d", &in2);
			printf("Please Enter the third number 3:");
			scanf("%d", &in3);
			printf("number 3: %d\n", in3);
			printf("number 2: %d\n", in2);
			printf("number 1: %d\n", in1);
			break;
		case 3:
			// This assignment executes some bitwise operations
			// on two input numbers.
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