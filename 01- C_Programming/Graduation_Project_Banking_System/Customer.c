//
// Created by a7m3d on 11/24/2022.
//

#include "Customer.h"
#include <stdio.h>
#include <stdbool.h>
extern BankAccount accounts[];

void customer(){
	printf("%s","Welcome can I have Your Account ID please");
	u8 strikes = 0;
	bool done = false;
	while (strikes < 3) {
		u8 input;
		BankAccount *account;
		BankAccount *destination;
		u64 old_password, new_password;
		f64 amount;
		account = getAccount();
		if (account == NULL) {
			break;
		}
		printf("Welcome Mr.%s", account->full_name);
		printf("How can I help u today sir");
		printf("1-You want to make a transaction.");
		printf("2-YoU want to withdraw cash from the account.");
		printf("3-You want to deposit money into the account.");
		printf("4-You want to change the Password for the account.");
		printf("5-You want to return to the main menu.");

		scanf("%c", &input);
		while (strikes < 3 && !done) {
			switch (input) {
				case 1:
					printf("Ok sir. I need the destination Bank Account ID");
					destination = getAccount();
					if (account == NULL) {
						printf("Sry sir there is no account with that ID.");
						strikes += 1;
						break;
					}
					printf("Now I need the amount of transaction.");
					scanf("%lf", &amount);
					if (amount > account->balance) {
						printf("Sry sir your account doesn't have enough cash.");
						strikes += 1;
						break;
					}
					if (amount + destination->balance > max_cash) {
						printf("Sry this account's cash would exceed the allowed limit.");
						strikes++;
						break;
					}
					makeTransaction(account, destination, amount);
					printf("your transaction was successful");
					printf("Thx for using our Banking system");
					done = true;
					break;
				case 2:
					printf("Ok how much cash would you like to withdraw.");
					scanf("%lf", &amount);
					if (amount > account->balance) {
						printf("Sry sir your account doesn't have enough cash.");
						strikes++;
						break;
					}
					getCash(account, amount);
					printf("your transaction was successful");
					printf("Thx for using our Banking system");
					done = true;
					break;
				case 3:
					printf("Ok how much cash would you like to deposit.");
					scanf("%lf", &amount);
					if (amount + account->balance > max_cash) {
						printf("Sry sir your account can't have that much cash.");
						printf("You can only deposit %lf",
							   max_cash - account->balance);
						strikes += 1;
						break;
					}
					deposit(account, amount);
					printf("Your transaction was successful");
					printf("Thx for using our Banking system");
					done = true;
					break;
				case 4:
					printf("Ok sir can you please enter the old password.");
					scanf("%llu", &old_password);
					printf("Ok sir can you please enter the new password.");
					scanf("%llu", &new_password);
					if (changeAccountPassword(account, old_password,
											  new_password)) {
						strikes++;
					} else {
						done = true;
					}
					break;
				case 5:
					printf("hope to see u soon.");
					return;
				default:
					printf("Wrong input. Please try again.");
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