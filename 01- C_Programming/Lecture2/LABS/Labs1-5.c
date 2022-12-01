//
// Created by Ahmed Sayed Mousse on 11/27/2022.
//

#include <stdio.h>

int main(){
	printf("Hi, which lab would u like to see. 1-5\n");
	int in1, in2;
	scanf("%d", &in1);
	switch (in1) {
		case 1:
			// This lab prints the value of false & true in gcc.
			printf("False value in GCC = %d", 5>10);
			printf("True value in GCC = %d", 5<10);
			break;
		case 2:
			// This lab calculates the week salary of an employee
			// based on his working hours, hourly rate =50
			// and a 10% deduction in case of less than 40 hours a week
			printf("Please, Enter Your working hours:");
			scanf("%d", &in1);
			in2 = in1*50;
			if (in1<40){
				in2 = in2 - in2*0.1;
			}
			printf("Your Salary is: %d", in2);
			break;
		case 3:
			// This lab prints whether the input is even or odd
			printf("Please, Enter number:\n");
			scanf("%d", &in1);
			printf(in1%2==0?"Number is Even": "Number is Odd");
			break;
		case 4:
			// This lab prints the rate of the student based on his degree.
			printf("Please Enter number:");
			scanf("%d",&in1);
			printf("Your rating is ");
			if( in1>84){
				printf("Excellent");
			}else if( in1>74){
				printf("Very Good");
			}else if( in1>64){
				printf("Good");
			}else if( in1>49){
				printf("Normal");
			}else if( in1 > -1){
				printf("Failed");
			}
			break;
		case 5:
			// This lab is s login system where the user enters the id
			// and the program prints the name of the user.
			printf("Please Enter Your ID:");
			scanf("%d",&in1);
			switch (in1) {
				case 1234:
					printf("Welcome Ahmed");
					break;
				case 5678:
					printf("Welcome Youssef");
					break;
				case 1145:
					printf("Welcome Mina");
					break;
				default:
					printf("Wrong ID");
			}
			break;
		default:
			break;
	}
	return 0;
}