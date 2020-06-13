#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* prev;
    Node* next;
};

Node* head=NULL;
Node* newnode(int x)
{
    Node* n=new Node();
    n->data=x;
    n->next=n->prev=NULL;
    return n;
}
void insertathead(int x)
{
     if(head==NULL)
     {
         head=newnode(x);
         return;
     }
     else
    {
       Node* temp=newnode(x);
        head->prev=temp;
        temp->next=head;
        head=temp;

    }
}
void insertatend(int x)
{
    if(head==NULL)
    {
        head=newnode(x);
        return;
    }
    else
    {
        Node* temp=head;
        Node* newN=newnode(x);
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }

        temp->next=newN;
        newN->prev=temp;

    }

}
void reverselist()
{
    Node* temp=head;
    if(temp==NULL)
        return;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    cout<<"\nreverse:";
    while(temp!=NULL)
    {
        cout<<" "<<temp->data;
        temp=temp->prev;
    }
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
    insertathead(3);
    insertatend(12);
    printvalue();
    reverselist();

}
