//
// Created by Ahmed Sayed Mousse on 12/1/2022.
//
#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
void bubble_sort(int arr[], int length);

int main(){
    printf("Hi, which lab would u like to see. 1-5\n");
    int in1, in2=0, count=0, *dynamic_arr, arr[10];
    scanf("%d", &in1);
    switch (in1) {
        case 1:
            // This lab asks the user for number of values he wants to sort,
            // Takes & stores them in an array
            // Then prints there values after bubble sorting them
            printf("Please, Enter the num of values");
            scanf("%d", &in1);
            dynamic_arr = malloc(in1*sizeof (int));
            for (int i = 0; i < in1; i++) {
                printf("Please Enter number %d:",i);
                scanf("%d",dynamic_arr+i);
            }
            bubble_sort(dynamic_arr, in1);
            printf("The values in order are:\n");
            for (int i = 0; i < in1 ; i++) {
                printf("%d", *(dynamic_arr+i));
            }
            break;
        case 2:
            // This lab allows the user to use linked lists.
            printf("To add node enter 0\n");
            printf("To print the linked list enter 1\n");
            printf("To exit press 2\n");
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
                        if (count == 0) {
                            printf("The List is Empty\n");
                            break;
                        }
                        for (int i = 0; i < count; i++) {
                            printf("Value %d is : %f", i, (&head + i)->data);
                        }
                        break;
                    case 2:
                        printf("Thank You\n Good Bye");
                        return 0;
                    default:
                        printf("Incorrect entry");
                        break;
                }
            }
    }
}

void bubble_sort(int *arr, int length){
    for (int i = 0; i < length-1; i++) {
        for(int j=0; j<length-1-i; j++){
            if ( arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}