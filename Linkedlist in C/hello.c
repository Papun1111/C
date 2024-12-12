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
    return ;
}
struct Node* newNode=malloc(sizeof(head));
newNode->data=val;
newNode->next=NULL;
struct Node* temp=head;
while (temp->next!=NULL)
{
    temp=temp->next;
}
temp->next=newNode;
newNode->next=NULL;
}
void print(){
    struct Node* temp=head;
    while (temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    
}
void addFirst(int val){
    if(head==NULL){
    head=malloc(sizeof(head));
head->data=val;
    head->next=NULL;
    return ;
}
struct Node* newNode=malloc(sizeof(head));
newNode->next=head;
newNode->data=val;
head=newNode;
}
void delete(){
 if(head==NULL){
        printf("Bhai kuch hai hee nahi");
        return;
    }
    if (head->next==NULL)
    {
        head=NULL;
        return;
    }
    struct Node* temp=head;
    struct Node* curr=head;
    while(temp->next!=NULL){
    curr=temp;
    temp=temp->next;
    }
    curr->next=NULL;
    free(temp);
    temp=NULL;
}
void deleteFirst(){
    if(head==NULL){
        printf("Bhai kuch hai hee nahi");
        return;
    }
    if (head->next==NULL)
    {
        head=NULL;
        return;
    }
    struct Node* newNode=malloc(sizeof(head));
    newNode=head;
    head=head->next;
    free(newNode);
    newNode=NULL;
}
void insatidex(int val,int idx){
struct Node* temp=head;
for(int i=0;i<idx-1;i++){
temp=temp->next;
}
struct Node* newnode=malloc(sizeof(head));
newnode->data=val;
newnode->next=temp->next->next;
temp->next=newnode;
}
void delatidex(int idx){
if(head==NULL){
        printf("Bhai kuch hai hee nahi");
        return;
    }
    if (head->next==NULL)
    {
        head=NULL;
        return;
    }
struct Node* temp=head;
for(int i=0;i<idx-1;i++){
temp=temp->next;
}
temp->next=temp->next->next;
}
 int main(){
add(32);
add(34);
add(345);
addFirst(23);

delatidex(2);
insatidex(34,1);
print();
    return 0;
 }