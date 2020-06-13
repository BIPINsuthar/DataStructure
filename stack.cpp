#include<iostream>

using namespace std;

struct Node
{
    int data;
    Node* next;
};
Node* head=NULL;

Node* createnode(int data)
{
    Node* n=new Node();
    n->data=data;
    n->next=NULL;
    return n;
}
void push(int data)
{
   Node* temp=createnode(data);
    temp->next=head;

   head=temp;
 }
void pop()
{
    Node* temp=head;
    head=head->next;
    delete(temp);

}
void printvalue()
{
     Node* temp=head;
     while(temp!=NULL)
     {
         cout<<" "<<temp->data;
         temp=temp->next;
     }
}
int main()
{

    push(2);
    push(3);
    push(6);push(7);push(12);push(22);push(19);push(35);
    //push(1);
    pop();
    //pop();
    printvalue();
}
