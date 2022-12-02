#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "./STD_Libs/STD_Types.h"
#include "Admin.h"
#include "Customer.h"
int main() {
    create_ten_accounts(); // creates 10 random test accounts .
    int input_1;
    srand( time(NULL));
    printf("-------WelcomeToTheBank-------\n");
    while(1) {
        printf("Please Enter your choice:\n");
        printf("1- Admin\n2- Customer\n3- Exit\n");
        scanf("%d", &input_1);
        switch (input_1) {
            case 1:
                admin();
                break;
            case 2:
                customer();
                break;
            case 3:
                return 0;
            default:
                printf("Wrong Choice. Please Stick to the choices.");
        }
    }

}
