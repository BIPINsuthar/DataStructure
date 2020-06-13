#include<iostream>
#include<stack>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

Node* head=NULL;

//new node create
Node* newnode(int data)
{
    Node* n=new Node();
    n->data=data;
    n->next=NULL;
    return n;
}
//insert value at head
void insertathead(int data)
{
    //cout<<"insert"<<head;
    Node* temp;
    temp=newnode(data);
    temp->next=head;
    head=temp;

}
//insert value at any index
void insertanyindex(int data,int index)
{
    Node* temp=head;
    if(index==0)
    {
        insertathead(data);
    }
    else
    {
        //create new node
        Node* temp1=newnode(data);
        for(int i=0;i<index-1;i++)
        {
            temp=temp->next;
        }
        temp1->next=temp->next;
        temp->next=temp1;

    }
}
//insert value at end
void insertatend(int data)
{
    Node* temp=head;
    if(temp==NULL)
    {
        head=newnode(data);
    }
    else
    {
        Node* temp1=newnode(data);
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=temp1;
    }
}
//delete at head
void deleteathead()
{
    if(head==NULL)
    {
        cout<<"list is empty!";
    }
    else
    {
        Node* temp1=head;
        head=head->next;
        delete temp1;

    }
}
//delete at any index
void deleteatanyindex(int index)
{
    Node* temp=head;
    if(index==0)
    {
        deleteathead();
    }
    else
    {
        for(int i=0;i<index-1;i++)
        {
            temp=temp->next;
        }
        Node* temp2=temp->next;
        temp->next=temp2->next;
        delete temp2;
    }
}
//delete at end
void deleteatend()
{
    Node* temp=head;
    if(temp==NULL)
    {
        cout<<"list is empty!";
    }
    else
    {
        Node* prenode;//here we store value of previous not before loop closed
        while(temp->next!=NULL)
        {
            prenode=temp;
            temp=temp->next;
        }
        prenode->next=temp->next;
        delete temp;
    }

}

void printvalue()
{
    Node* temp=head;
    // cout <<"print value"<<head;
    cout<<"list is:";
    while(temp!=NULL)
    {
        cout<<" "<<temp->data;
        temp=temp->next;
    }

}
//reverse linked list using iteration
void reverseusingiteration()
{
    Node *current,*prev,*next;
    current=head;
    prev=NULL;
    while(current!=NULL)
    {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    head=prev;
}

void reverseusingrecursionprintvalue(Node* head)
{
    if(head==NULL)
    {
       return;
    }
    reverseusingrecursionprintvalue(head->next);
    cout<<" "<<head->data;
}
//reverse linked list using recursion
void reverseusingrecursion(Node* p)
{
    if(p->next==NULL)
    {
        head=p;
        return;
    }
    reverseusingrecursion(p->next);
    Node* q=p->next;
    q->next=p;
    p->next=NULL;
}
//reverse linked list using stack
void reverseusingstack()
{
    stack<Node*>s;
    Node *temp=head;
    //push all element in stack
    while(temp!=NULL)
    {
        s.push(temp);
        temp=temp->next;
    }
    //top assign into temp node
     temp=s.top();
    //in head assign value of temp so head point the last element of linked list
    head=temp;
    s.pop();
    while(!s.empty())
    {
        temp->next=s.top();
        s.pop();
        temp=temp->next;
    }
    temp->next=NULL;
}
int main()
{
   //int value;
   insertathead(1);
   insertatend(22);
   insertatend(35);
   insertathead(12);
   insertanyindex(45,2);
   printvalue();
   cout<<"\n";
   //reverseusingrecursion(head);
   reverseusingstack();
   printvalue();

   /*for(int i=0;i<=4;i++)
   {
        cout<<"\nEnter the list of elments:";
        cin>>value;
        //insertathead(value);
        insertatend(value);
        printvalue();
   }*/
   return 0;
}
