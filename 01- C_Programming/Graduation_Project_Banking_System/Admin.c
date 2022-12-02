//
// Created by a7m3d on 11/24/2022.
//

#include "Admin.h"
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "Customer.h"

u64 admin_password = 1234567890;
u8 admin_username[25] = "Ahmed_Sayed";
void admin(){
    printf("Welcome, can I have the Username and Password please.\n");
    u64 password;
	u8 username[25];
    printf("The UserName:");
    scanf("%s", username);
    printf("The Password:");
	scanf("%lld", &password);

	if (password != admin_password || strcmp((char *)username,
											 (char *)admin_username) != 0){
		printf("Wrong Credentials\n");
		return;
	}

	u8 input, strike=0;
	bool done = false;
	while(strike<3) {
        printf("What would you like to do now sir.\n");
        printf("1- Creat an account.\n2- Open an existing account.\n3- Change account status.\n"
               "4- Exit system\n");
        _flushall();
		scanf("%d", &input);
		switch (input) {
			case 1:
				createBankAccount();
				break;
			case 2:
				openExistingAccount();
				break;
			case 3:
				changeAccountStatus();
				break;
            case 4:
                return;
			default:
				printf("Sry wrong choice\n Please Enter a num between 1 & 3\n");
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
	printf("First I need the name of the account owner.\n");
	scanf("%s", full_name);
	printf("Second I need the address of the account owner.\n");
	scanf("%s", full_address);
	printf("Third I need the national ID. It has to be 14 digits\n");
	if (!getID(nationalID)){
		return;
	}
	do{
		printf("Next I need the age of the account owner.\n");
        _flushall();
		scanf("%d", &age);
	}while(age <0 || age >150);
	if (age <21){
		printf("This account owner needs to have a guardian.\n");
		printf("Please, Enter the guardian name.\n");
		scanf("%s", guardian_name);
		printf("Please, Enter the guardian ID\n");
		if (!getID(guardianID)){
			return;
		}
	}
	printf("What would u like to deposit initially in the account.\n");
	scanf("%lf", &balance);
	createAccount(full_name, full_address, age, nationalID, balance,
				  guardianID, guardian_name);

};


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
u8 getID(u8 *ID){
    s8  nationalID[14] = {[0 ... 13]=-1};
    scanf("%s", nationalID);
    u8 digit;
    bool done = false;
    do {
        for (int i = 0; i < 14; i++) {
            digit = nationalID[i]-48;
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
            }else if (i == 13 && digit > 0 && digit<10){
                strcpy((char *) ID, (char *) nationalID);
                return 1;
            }
        }
    } while(1);
}