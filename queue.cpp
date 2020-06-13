#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node* next;
};
Node* fron=NULL;
Node* rear=NULL;

Node* createnode(int data)
{
    Node* n=new Node();
    n->data=data;
    n->next=NULL;
    return n;
}
void enqueue(int data)
{

      Node* temp=createnode(data);
      if(fron==NULL&&rear==NULL)
      {
          fron=rear=temp;
          return;
      }
      else
      {
            rear->next=temp;
            rear=temp;
      }
}
void dequeue()
{
   if(fron==NULL)
   {
       cout<<"queue is empty!";
   }
   else if(fron==rear)
   {
       fron==rear==NULL;
   }
   Node* temp=fron;
   fron=fron->next;
   delete(temp);
}
void printvalue()
{
    Node* temp=fron;
    while(temp!=NULL)
    {
        cout<<" "<<temp->data;
        temp=temp->next;
    }
}
int main()
{
      enqueue(55);
      enqueue(3);
      enqueue(7);
      enqueue(10);
      enqueue(23);
      enqueue(12);
      enqueue(4);
      enqueue(34);
      enqueue(90);
      dequeue();
      printvalue();
}
