package tree;

import java.util.Scanner;

public class Binary_Search 
{

	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter the size of array:");
		int n=sc.nextInt();
	    int a[]=new int[n];
	    System.out.println("Enter the value of array:");
	    for(int i=0;i<n;i++)
	    {
	    	a[i]=sc.nextInt();
	    }
	    int l=0;
	    int r=n;
	    System.out.println("Enter data which you can find:");
		int data=sc.nextInt();
	    searchdata(a,l,r,data);
	}
	
	public static void searchdata(int a[],int l,int r,int data)
	{
		int mid=(l+r)/2;		
		if(a[mid]==data)
		{
			 System.out.println("value find index id"+mid);
			 
		}
		else if(a[mid]>data)
		{
			 r=mid-1;
			 searchdata(a,l,r,data);
		}
		else 
		{
			 l=mid+1;
			 searchdata(a,l,r,data);
		}
	  }
	}


