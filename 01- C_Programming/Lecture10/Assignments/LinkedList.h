//
// Created by a7m3d on 12/1/2022.
//

#ifndef ITI_SUBMISSIONS__LINKEDLIST_H
#define ITI_SUBMISSIONS__LINKEDLIST_H
#define Null ((void *) 0)

typedef struct node{
    struct node *next;
    struct  node *prev;
    double data;
}node;
node head = {Null, Null, 0}; //These will be sentinels
node tail = {Null, Null, 0}; //These will be sentinels

node * search(double data);
void add_node(double data, node* node_before);
void add_node_before(double data, double data_before);
void remove_node(double data);

#endif //ITI_SUBMISSIONS__LINKEDLIST_H
