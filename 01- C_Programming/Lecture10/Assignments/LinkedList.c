//
// Created by Ahmed Sayed Mousse on 12/1/2022.
//

#include "LinkedList.h"



node * search(double data){
    node *holder = &head;
    while(holder->data != data && holder->next != &tail){
        holder = holder->next;
    }
    return holder;
}
void add_node(double data, node* node_before){
    node new = {Null, node_before, data};
    new.next = node_before->next;
    node_before->next = &new;
    new.next->prev = &new;
}
void add_node_before(double data, double data_before){
    add_node(data, search(data_before));
}

void remove_node(double data){
    node *removed  = search(data);
    node *node_before = removed->prev;
    node *node_after = removed->next;
    node_before->next = node_after;
    node_after->prev = node_before;
    removed->next = Null;
    removed->prev = Null;
}
