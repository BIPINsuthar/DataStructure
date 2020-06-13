package com.bipin;

public class LinkedList 
{
	 Node head;
	
	//inserting data
	public void insert(int data)
	{
		Node node=new Node();
		node.data=data;
		node.next=null;
		
		Node n=head;
		if(head==null)
		{
			head=node;
		}
		else
		{
			
			while(n.next!=null)
			{
				n=n.next;
			}
			n.next=node;
			
		}
	}
	
	//inserting element at first 
	public void insertfirst(int data)
	{
		Node n=new Node();
		n.data=data;
		n.next=null;
		n.next=head;
		head=n;
	}
	
	//inserting element at user want 
	public void insertAt(int index,int data)
	{
		Node node=new Node();
		node.data=data;
		node.next=null;
		
		Node n=head;
		if(index==0)
		{
			insertfirst(data);
		}
		else
		{
		   for(int i=0;i<index-1;i++)
		    {
			  n=n.next;
		    }
		   node.next=n.next;
		   n.next=node;
		}
	}
	
	public void delete(int index)
	{
		Node n=head;
		Node n1=null;
	
		if(index==0)
		{
			head=head.next;
		}
		else
		{
			for(int i=0;i<index-1;i++)
			{
				n=n.next;
			}
			n1=n.next;
			n.next=n1.next;
			System.out.println(" "+n1.data);
		}
	}
	public void show()
	{
		Node n=head;
		while(n!=null)
		{
			System.out.println(" "+n.data);
			n=n.next;
		}
		System.out.println(" "+n.data);
		
	}
		
}
