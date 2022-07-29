
#include<stdio.h>
struct node{
    int data;
    struct node * next;
    };
    node*josephus(node*ptr,int pos){
    while(ptr->next!=ptr);
    {
        for(i=1;i<pos-1;i++)
        ptr=ptr->next;
        tmp=ptr->next;
        ptr->next=tmp->next;
        free(tmp);
        ptr=ptr->next;
    }
    return ptr;
}
