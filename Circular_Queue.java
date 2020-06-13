package com.bipin;

public class Circular_Queue 
{
	int c_queue[]=new int[5];
	int size;
	int front;
	int rear;
	
	public void enqueue(int data)
	{
		if(!isfull())
		{
		c_queue[(rear+1)%5]=data;
		rear++;
		size++;	
		}
		else 
			System.out.println("queue is full!");
	}
	public int dequeue()
	{
		if(!isempty())
		{
		int data=c_queue[(front+1)%5];
		front++;
		size--;
		return data;
		}
		else
			System.out.println("queue is empty!");
		    return 0;
	}
	public boolean isfull()
	{
		if(size==5)
		{
		return true;
		}
		else
			return false;
		
	}
	public boolean isempty()
	{
		if(size==0)
		{
		return true;
		}
		else
		 return false;
	}
	public void show()
	{
		for(int i=0;i<size;i++)
		{
			System.out.println(c_queue[((front+i)+1)%5]);
		}
	}

}
