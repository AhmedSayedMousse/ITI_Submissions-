//
// Created by a7m3d on 11/24/2022.
//

#ifndef BANKING_SYSTEM_GRADUATION_BANKACCOUNT_H
#define BANKING_SYSTEM_GRADUATION_BANKACCOUNT_H

#include "./STD_Libs/STD_Types.h"

#define Active 1
#define Restricted 2
#define Closed 3

typedef struct account{
	u8  full_name[50];
	u8  full_address[100];
	u8  nationalID[14];
	u8  age;
	u8  bankAccountID[10];
	u8  guardian_name[50];
	u8  guardianID[14];
	u8  account_status;
	u64 password;
	f64 balance;
} BankAccount;

void createAccount(u8 name[], u8 address[], u8 age, u8 id[], f64 balance,
				   u8 guard_id[], u8 guard_name[]);
void setGuardian(BankAccount *account, u8 guard_id[], u8 guard_name[]);
void depositCash(BankAccount *account, f64 deposit_amount);
void withdrawCash(BankAccount *account, f64 withdraw_amount);
void changeStatus(BankAccount *account, u8 new_status);
void changePassword(BankAccount *account, u64 new_password);
BankAccount *getAccount();
u64 generatePassword();
void generateID(u8 id[]);
#endif //BANKING_SYSTEM_GRADUATION_BANKACCOUNT_H
