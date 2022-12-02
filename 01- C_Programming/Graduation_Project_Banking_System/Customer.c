//
// Created by a7m3d on 11/24/2022.
//

#include "Customer.h"
#include <stdio.h>
#include <stdbool.h>
extern BankAccount accounts[];

void customer(){
	printf("Welcome To the customer Window.\n");
	u8 strikes = 0;
	bool done = false;
    BankAccount  *account = getAccount();
    while (strikes < 3) {
		u8 input;
		BankAccount *destination;
		u64 old_password, new_password;
		f64 amount;
        if (account == NULL) {
            break;
        }
        _flushall();
        printf("Welcome Mr.%s\n", account->full_name);
		printf("How can I help u today sir\n");
		printf("1-You want to make a transaction.\n");
		printf("2-YoU want to withdraw cash from the account.\n");
		printf("3-You want to deposit money into the account.\n");
		printf("4-You want to change the Password for the account.\n");
		printf("5-You want to return to the main menu.\n");
		scanf("%d", &input);
		while (strikes < 3 && !done) {
			switch (input) {
				case 1:
					printf("Ok sir. I need the destination Bank Account ID\n");
					destination = getAccount();
					if (account == NULL) {
						printf("Sry sir there is no account with that ID.\n");
						strikes += 1;
						break;
					}
					printf("Now I need the amount of transaction.\n");
                    _flushall();
					scanf("%lf", &amount);
					if (amount > account->balance) {
						printf("Sry sir your account doesn't have enough cash.\n");
						strikes += 1;
						break;
					}
					if (amount + destination->balance > max_cash) {
						printf("Sry this account's cash would exceed the allowed limit.\n");
						strikes++;
						break;
					}
					makeTransaction(account, destination, amount);
					printf("your transaction was successful\n");
					printf("Thx for using our Banking system\n");
					done = true;
					break;
				case 2:
					printf("Ok how much cash would you like to withdraw.\n");
					scanf("%lf", &amount);
					if (amount > account->balance) {
						printf("Sry sir your account doesn't have enough cash.\n");
						strikes++;
						break;
					}
					getCash(account, amount);
					printf("your transaction was successful\n");
					printf("Thx for using our Banking system\n");
					done = true;
					break;
				case 3:
					printf("Ok how much cash would you like to deposit.\n");
					scanf("%lf", &amount);
					if (amount + account->balance > max_cash) {
						printf("Sry sir your account can't have that much cash.\n");
						printf("You can only deposit %lf\n", max_cash - account->balance);
						strikes += 1;
						break;
					}
					deposit(account, amount);
					printf("Your transaction was successful\n");
					printf("Thx for using our Banking system\n");
					done = true;
					break;
				case 4:
					printf("Ok sir can you please enter the old password.\n");
					scanf("%llu", &old_password);
					printf("Ok sir can you please enter the new password.\n");
					scanf("%llu", &new_password);
					if (changeAccountPassword(account, old_password,
											  new_password)) {
						strikes++;
					} else {
						done = true;
					}
					break;
				case 5:
					printf("hope to see u soon.\n");
					return;
				default:
					printf("Wrong input. Please try again.\n");
					break;
			}
		}

	}
}
void makeTransaction(BankAccount *source, BankAccount *destination, f64 amount){
	depositCash (destination, amount);
	withdrawCash (source, amount);
}
u8 changeAccountPassword(BankAccount *account, u64 old_pass, u64 new_pass){
	if (account->password != old_pass){
		printf("Wrong Password");
		return 1;
	}
	else {
		changePassword(account, new_pass);
		return 0;
	}

}
f64  getCash(BankAccount *account, f64 amount){
    account->balance -= amount;
}
void  deposit(BankAccount *account, f64 amount) {
    if ((0xFFFFFFFF - account->balance) > amount) {
        account->balance += amount;
    }
}