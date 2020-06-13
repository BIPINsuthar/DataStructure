package com.bipin;

public class Queue 
{
	
	int queue[]=new int[5];
	int size;
	int front;
	int rear;
	
	public void enqueue(int data)
	{
		if(!isfull())
		{
		queue[rear]=data;
		rear++;
		size++;
		}
		else
		{
			System.out.println("queue is full!");
		}
		
	}
	public int dequeue()
	{
		if(!isempty())
		{
		int data=queue[front];
		front++;
		size--;
		 return data;
		 
		}
		else
		{
			System.out.println("queue is empty!");
			return 0;
		}
		
		

	}
	public boolean isfull()
	{
		return false;
	}
	public boolean isempty()
	{
		return false;
	}
	public void show()
	{
		for(int i=0;i<size;i++)
		{
			System.out.println(queue[front+i]);
		}
	}

}
