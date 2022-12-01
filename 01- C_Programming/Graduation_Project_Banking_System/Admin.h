//
// Created by Ahmed Sayed Mousse on 11/24/2022.
//

#ifndef BANKING_SYSTEM_GRADUATION_ADMIN_H
#define BANKING_SYSTEM_GRADUATION_ADMIN_H
#include "BankAccount.h"

u64 admin_password = 123467890;
u8 admin_username[25] = "Ahmed_Sayed";

void createBankAccount();
void openExistingAccount();
void changeAccountStatus();
u8 getID(u8 nationalID[]);
#endif //BANKING_SYSTEM_GRADUATION_ADMIN_H
