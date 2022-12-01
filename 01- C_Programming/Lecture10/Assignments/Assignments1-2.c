//
// Created by Ahmed Sayed Mousse on 12/1/2022.
//

#include <stdio.h>
#include "LinkedList.h"
int main(){
    printf("Hi, which Assignment would u like to see. 1-2\n");
    int in1, in2=0, count=0, *dynamic_arr, arr[10];
    scanf("%d", &in1);
    switch (in1) {
        case 1:
            // This Assignment allows the user to use linked lists with the ability to remove nodes.
            printf("To add node enter 0\n");
            printf("To remove node enter 1");
            printf("To print the linked list enter 2\n");
            printf("To exit press 3\n");
            while (1) {
                printf("Your Choice: ");
                scanf("%d", &in1);
                switch (in1) {
                    case 0:
                        printf("Ok Please Enter the number u want to add\n");
                        scanf("%d", &in2);
                        add_node(in2, &head + count);
                        count += 1;
                        break;
                    case 1:
                        printf("Ok Please Enter the number u want to remove\n");
                        scanf("%d", &in2);
                        remove_node(in2);
                        count -= 1;
                        break;
                    case 2:
                        if (count == 0) {
                            printf("The List is Empty\n");
                            break;
                        }
                        for (int i = 0; i < count; i++) {
                            printf("Value %d is : %f", i, (&head + i)->data);
                        }
                        break;
                    case 3:
                        printf("Thank You\n Good Bye");
                        return 0;
                    default:
                        printf("Incorrect entry");
                        break;
                }
            }
        case 2:
            // This Assignment allows the user to use linked lists with the ability to add nodes at certain position.
            printf("To add node enter 0\n");
            printf("To remove node enter 1");
            printf("To print the linked list enter 2\n");
            printf("To exit press 3\n");
            while (1) {
                printf("Your Choice: ");
                scanf("%d", &in1);
                switch (in1) {
                    case 0:
                        printf("Ok Please Enter the number u want to add\n");
                        scanf("%d", &in2);
                        printf("Now Please Enter the number u want to add after\n");
                        scanf("%d", &in1);
                        add_node_before(in2, in1);
                        count += 1;
                        break;
                    case 1:
                        printf("Ok Please Enter the number u want to remove\n");
                        scanf("%d", &in2);
                        remove_node(in2);
                        count -= 1;
                        break;
                    case 2:
                        if (count == 0) {
                            printf("The List is Empty\n");
                            break;
                        }
                        for (int i = 0; i < count; i++) {
                            printf("Value %d is : %f", i, (&head + i)->data);
                        }
                        break;
                    case 3:
                        printf("Thank You\n Good Bye");
                        return 0;
                    default:
                        printf("Incorrect entry");
                        break;
                }
            }
        default:
            break;
    }
}
