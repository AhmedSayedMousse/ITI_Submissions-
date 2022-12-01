//
// Created by a7m3d on 11/24/2022.
//

#ifndef BANKING_SYSTEM_GRADUATION_CUSTOMER_H
#define BANKING_SYSTEM_GRADUATION_CUSTOMER_H
#include "BankAccount.h"

#define max_cash (f64)0xFFFFFFFFFFFFFFFF
void customer();
void makeTransaction(BankAccount *source, BankAccount *destination, f64 amount);
void  deposit(BankAccount *account, f64 amount);
u8 changeAccountPassword(BankAccount *account, u64 old_pass, u64 new_pass);
f64  getCash(BankAccount *account, f64 amount);
#endif //BANKING_SYSTEM_GRADUATION_CUSTOMER_H
