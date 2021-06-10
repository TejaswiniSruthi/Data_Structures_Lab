#include<stdio.h>
void linear_search(int val,int n,int arr[*]);
int linear_search_re(int val,int n,int arr[*]);
//linear_search -> non-recursion
//linear_search_re -> recursion
void main()
{
	int n,i,val,pos,option;
	printf("Enter the size of array:\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("Enter the value to search:\n");
	scanf("%d",&val);
	printf("Enter 1 for Non-Recursive Function \n");
	printf("Enter 2 for Recursive Linear search\n ");
	scanf("%d",&option);
	switch(option)
	{
	    case 1:
	    {
	       	linear_search(val,n,arr);
	       	break;
	    }
	    case 2:
	    {
	        pos=linear_search_re(val,n,arr);
	        if(pos!=0)
		        printf("Element %d is found at position %d using Recursion\n",val,pos);
	        else 
	        	printf("Element is not present in the list\n");
	        break;	
	    }
	    default:
	        printf("Enter correct option");
	}
}//Non-recursive Linear search
void linear_search(int val,int n,int arr[n])	
{
	int i,found=0,pos=-1;
	for(i=0;i<n;i++)
	{
		if(arr[i]==val)
		{
			found=1;
			pos=i+1;
			printf("Element %d is found at position %d using Non-Recursion\n",val,pos);
			break;
		}
	}
	if(found==0)
		printf("The element is not present in the list\n");
}//Recursive function
int linear_search_re(int val,int n,int arr[n])	  
{
	if(n>0)
	{
		if(arr[n-1]==val)
			return n;
		else
			return linear_search_re(val,n-1,arr);	
	}
	return 0;
}
/*Algorithm
step 1: Start
step 2: Declare n,i,val,pos,opt
step 3: take input "n"
step 4: Declare arr[n]
step 5: Initialize i=0
step 6: if(i<n)
			go to step (7)
		else
			go to step (9)
step 7: Read arr[i]
step 8: i <- i+1
		go to step (6)
step 9: Tkae input "val"
step 10: Display Enter 1 for Non-recursive function
step 11: Display Enter 2 for Recursive Linear search
step 12: Take input "opt"
step 13: if(option=1) then
			go to step (14)
		else if (option=2)
			go to step (20)
			else Display Enter correct option
				go to step (19)
		[End of if]
step 14: Assign found <- 0, pos <- (-1)
step 15: [Initialize] Assign i <- 0
step 16: Repeat step 17 until i<=n
			else
				go to step (18)
step 17: if (arr[i]=val)
			Assign pos<-i+1, found<-1
			print pos
			go to step (19)
		 [End of if]
		set i <- i+1
		 [End of if]
step 18: if (found=0)
			Display value is not present
		 [End of if]
step 19: STOP
step 20: if (n>0)
			go to step (21)
		 else
		 	go to step (22)
step 21: if (arr[n-1]=val)
			assign pos <- n
		 else
		 	assign n <- n-1
			go to 21
		[End of if]
		 Assign pos <- 0
step 22: if(pos != 0)
			Display pos
		 else
		 	Display element is not found
step 23: STOP
*/