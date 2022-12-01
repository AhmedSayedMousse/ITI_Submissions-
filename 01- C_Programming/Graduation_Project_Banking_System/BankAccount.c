//
// Created by a7m3d on 11/24/2022.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "BankAccount.h"

# define num_of_accounts 100
BankAccount accounts[num_of_accounts];
u8 accounts_created = 0;

// if gid == 0 then it will not be set together with the guardian name.
void createAccount(u8 name[], u8 address[], u8 age, u8 id[], f64 balance,
				   u8 guard_id[], u8 guard_name[]){
	BankAccount new_account;
	strcpy((char *) new_account.full_name, (char *) name);
	strcpy((char *) new_account.full_address, (char *) address);
	strcpy((char *) new_account.nationalID, (char *) id);
	generateID(new_account.bankAccountID);
	new_account.balance = balance;
	new_account.age = age;
	new_account.password = generatePassword();
	new_account.account_status = Active;
	if (guard_id != 0){
		setGuardian(guard_id, guard_name);
	}
	accounts[accounts_created++] = new_account;
}
void setGuardian(BankAccount *account,u8 guard_id[], u8 guard_name[]){
	strcpy((char *) account->guardianID,
		   (char *) guard_id);
	strcpy((char *) account->guardian_name,
		   (char *) guard_name);
}
void depositCash(BankAccount *account, f64 deposit_amount){
	account->balance += deposit_amount;

}
void withdrawCash(BankAccount *account, f64 withdraw_amount){
	account->balance-=withdraw_amount;
}
void changeStatus(BankAccount *account, u8 new_status){
	account->account_status = new_status;
}
void changePassword(BankAccount *account, u64 new_password){
	account->password = new_password;
}

BankAccount *getAccount(){
	BankAccount *account = accounts;
	while(1){
		u8 accountID[10];
		u8 strikes=0;
		scanf("%s", accountID);
		while(account->bankAccountID != accountID && account != NULL){
			account+=1;
		}
		if (account == NULL){
			printf("Sry we don't have an account with this ID");
			printf("Can u please Enter it again");
			strikes++;
			if (strikes == 3){
				printf("You reached your maximum trials.");
				break;
			}
		}
	}
	return account;
}
u64 generatePassword(){
	u64 n = rand(); // the rand function generates only 4 bytes so
	n = (n<<32) | rand(); // I used it twice to generate an 8 byte random num.
	return n;
}

void  generateID(u8 id[]){
	for (int i=0; i<10; i++){
		id[i] = rand()%10;
	}
}