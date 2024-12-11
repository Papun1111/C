#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};
void print(struct Node* head){
struct Node* ptr=head;
    while(ptr!=NULL){
printf("%d ",ptr->data);
ptr=ptr->next;
    }
}
void add(struct Node* head,int val){
    struct Node* curr;
    struct Node* temp;
    temp=malloc(sizeof(temp));
    temp->data=val;
    temp->next=NULL;
    curr=head;
    while (curr->next!=NULL)
    {
     curr=curr->next;
    }
    curr->next=temp;
    
}
void deleteFirst(struct Node** head){
*head=(*head)->next;
}
struct Node* addFirst(struct Node* head,int val){
    struct Node* curr=malloc(sizeof(head));
    curr->data=val;
    curr->next=head;
    head=curr;
    return head;
}
void delete(struct Node* head){
    struct Node* temp=head;
    while(head->next!=NULL){
temp=head;
head=head->next;
    }
    temp->next=NULL;
}
int main(){
    struct Node* head = NULL;

    // Correct the malloc allocation to use sizeof(struct Node)
    head = malloc(sizeof(struct Node)); 

    // Check if memory allocation was successful
    if (head == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    head->data = 23;
    head->next = NULL;

add(head,67);
add(head,62);
add(head,12);
delete(head);
deleteFirst(&head);
print(head);
head=addFirst(head,34);
print(head);

    // Free the allocated memory
    free(head);

    return 0;
}
