//C program to search a key value in the given list usinng Recursive & Non-Recursive Binary Search
#include<stdio.h>
int binary_re(int n,int arr[*],int beg,int end,int val);   //Recursive function
void binary_non_re(int n,int arr[*],int beg,int end,int val);	//Non-Recursive function
void main()
{
	int n,i,val,pos,opt;
	printf("Enter the size of array: \n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements in ascending order: \n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("Enter the value to search: \n");
	scanf("%d",&val);
	printf("Enter 1 for Non-Recursive Binary search\n");
	printf("Enter 2 for Recursive Binary search\n");
	scanf("%d",&opt);
	switch(opt)
	{
	    case 1:
	    {
	       	binary_non_re(n,arr,0,n-1,val);
	       	break;
	    }
	    case 2:
	    {
	       pos=binary_re(n,arr,0,n-1,val);
			if(pos!=-1)
				printf("Element %d found at %d position using Recursion\n",val,pos+1);
			else
				printf("The element is not present in the list\n");
	        break;	
	    }
	    default:
	        printf("Enter correct option");
	}		
}//Non-Recursion Binary search
void binary_non_re(int n,int arr[n],int beg,int end,int val)	
{
	int mid,pos=-1;
	while(beg<=end)
	{
		mid=(beg+end)/2;
		if(arr[mid]==val)
		{
			pos=mid+1;
			printf("Element %d is found at position %d using Non-Recursion",val,pos);
			break;
		}
		else 
		if(arr[mid]>val)
			end=mid-1;
		else
			beg=mid+1;	
	}
	if(pos==-1)
		printf("Element is not found in the list");
}//Recursive Binary Search
int binary_re(int n,int arr[n],int beg,int end,int val)	
{
	if(beg<=end)
	{
		int mid=(beg+end)/2;
		if(arr[mid]==val)
			return mid;
		else if(arr[mid]>val)
			    return binary_re(n,arr,beg,mid-1,val);
		    else
			    return binary_re(n,arr,mid+1,end,val);		
	}
	return -1;
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
step 14: initialize beg<-0, end<- (n-1)
step 15: eclare mid, pos<- (-1)
step 16: Repeat step (17) until (beg<=end)
step 17: Assign mid<- (beg+end)/2
		if (arr[mid])
			assign pos <- mid+1
			print pos
			go to step (19)
		else if(arr[mid]>val)
				assign end <- mid-1
				go to step (16)
			 else
			 	assign beg<- mid+1
				 go to step (16)
			[End of if]
		[End of loop]
step 18: if(pos= (-1))
			Display value is not present in the array
			[End of if]
step 19: STOP
step 20: initialize beg<-0, end<- (n-1)
step 21: if (beg<=end) else go to step (23)
			Assign mid=(beg+end)/2
			if (arr[mid]=val)
				assign pos <- mid
				go to step (23)
			else 
				go step (22)
step 22: if arr[mid]>val
			assign end = mid-1
			go to step(21)
		else
			assign beg = mid+1
			go to step (21)
		[End of loop]
		pos <- (-1)
step 23: if(pos!= (-1))
			Display the position
		else
			Display element is not present in the array
step 24: STOP	*/