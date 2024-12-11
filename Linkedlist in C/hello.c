#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};
static struct Node* head=NULL;
void add(int val){
if(head==NULL){
    head=malloc(sizeof(head));
    head->data=val;
    head->next=NULL;
    return;
}
struct Node* newNode=malloc(sizeof(head));
struct Node* temp=head;
newNode->data=val;
newNode->next=NULL;
while (temp->next!=NULL)
{
    temp=temp->next;
}
temp->next=newNode;
}
void addFirst(int val){
    if(head==NULL){
    head=malloc(sizeof(head));
    head->data=val;
    head->next=NULL;
    return;
}
struct Node* newNode=malloc(sizeof(head));
newNode->data=val;
newNode->next=head;
head=newNode;
}
void delete(){
struct Node* temp=head;
struct Node* second;
while (temp->next!=NULL)
{
    second=temp;
    temp=temp->next;
}
second->next=NULL;
free(temp);
temp=NULL;
}
void print(){
    struct Node* temp=head;
    while ((temp!=NULL))
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    
}
void deleteFirst(){
 struct Node* temp=head;
    head=head->next;
    free(temp);
    temp=NULL;
}
int main(){

add(45);
add(23);
add(45);
addFirst(25);
delete();
deleteFirst();
print();
}