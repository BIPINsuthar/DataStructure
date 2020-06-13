package com.bipin;

public class Stack 
{
	int stack[]=new int [5];
	int top=0;
	
	public void push(int data)
	{
		if(!isfull())
		{
		stack[top]=data;
		top++;
		}
		else
		{
			System.out.println("stack is full");
		}
	}
	public void pop()
	{ 
		if(!isempty())
		{
			top--;
			stack[top]=0;	
		}
		else
		{
			System.out.println("stack is empty!");
		}
		
		
	}
	public boolean isempty()
	{
		if(top==0)
			return true;
		else
		 return false;
	}
	public boolean isfull()
	{
		if(top==stack.length)
			return true;
		else 
			return false;
	}
	public void show()
	{
		for(int i=0;i<5;i++)
		{
			System.out.println(stack[i]);
		}
	}
	
}
