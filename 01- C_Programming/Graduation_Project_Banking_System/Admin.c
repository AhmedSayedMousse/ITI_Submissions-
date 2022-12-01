//
// Created by a7m3d on 11/24/2022.
//

#include "Admin.h"
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "Customer.h"
void admin(){
	printf("Welcome, can I have the Username and Password please.");
	u64 password;
	u8 username[25];
	scanf("%lld", &password);
	scanf("%s", username);
	if (password != admin_password || strcmp((char *)username,
											 (char *)admin_username) != 0){
		printf("Wrong Credentials");
		return;
	}
	printf("What would you like to do now sir.");
	printf("1-Creat an account.\n2-Open an existing account.\n3-Exit system.");
	u8 input, strike=0;
	bool done = false;
	while(strike<3 && !done) {
		scanf("%c", &input);
		switch (input) {
			case 1:
				createBankAccount();
				done = true;
				break;
			case 2:
				openExistingAccount();
				done = true;
				break;
			case 3:
				changeAccountStatus();
				return;
			default:
				printf("Sry wrong choice\n Please Enter a num between 1 & 3");
				strike++;
				break;
		}
	}
}

void createBankAccount(){
	u8  full_name[50];
	u8  full_address[100];
	u8  nationalID[14];
	u8  age;
	u8  guardian_name[50] = {0};
	u8  guardianID[14]= {0};
	f64 balance;
	printf("First I need the name of the account owner.");
	scanf("%s", full_name);
	printf("Second I need the address of the account owner.");
	scanf("%s", full_address);
	printf("Third I need the national ID. It has to be 14 digits");
	if (!getID(nationalID)){
		return;
	}
	do{
		printf("Next I need the age of the account owner.");
		scanf("%c", &age);
	}while(age <0 || age >150);
	if (age <21){
		printf("This account owner needs to have a guardian.");
		printf("Please, Enter the guardian name.");
		scanf("%s", guardian_name);
		printf("Please, Enter the guardian ID");
		if (!getID(guardianID)){
			return;
		}
	}
	printf("What would u like to deposit initially in the account.");
	scanf("%lf", &balance);
	createAccount(full_name, full_address, age, nationalID, balance,
				  guardianID, guardian_name);
};

u8 getID(u8 *ID){
	s8  nationalID[14] = {[0 ... 13]=-1};
	scanf("%s", nationalID);
	u8 digit;
	bool done = false;
	do {
		for (int i = 0; i < 14; i++) {
			digit = nationalID[i];
			if (digit < 0 || digit > 9) {
				printf("This ID is Wrong.\n"
					   "you can't have any negative "
					   "numbers or numbers greater than 9."
				);
				printf("Would you like to have another try?");
				printf("1-Yes\n2-No");
				scanf("%c", &digit);
				if(digit == 2){
					printf("Ok we will return to the main menu");
					return 0;
				}
				printf("Ok Please make sure you use the correct ID.");
				printf("Enter the National ID.");
				break;
			}else if (digit == nationalID[13]){
				strcpy((char *) ID, (char *) nationalID);
				return 1;
			}
		}
	} while(1);
}
void openExistingAccount(){
	customer();
}

void changeAccountStatus(){
	while(1) {
		s8 input;
		BankAccount *account;
		printf("Ok What statues do u want this account to be in.");
		printf("1-Active.\n2-Restricted.\n3-Closed.");
		scanf("%c", &input);
		account = getAccount();
		switch (input) {
			case 1:
				changeStatus(account, Active);
				return;
			case 2:
				changeStatus(account, Restricted);
				return;
			case 3:
				changeStatus(account, Closed);
				return;
			default:
				printf("Sry Please stick to the given options.");
		}

	}
}
