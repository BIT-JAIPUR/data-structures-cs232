// Develop and implement a menu driven program in C for the following Array operations.
//	a. Creating array of N integer elements.
//	b. Display of array elements with suitable headings.
//	c. Inserting an element (ELEM) at a given valid position.
//	d. Deleting an element at a given valid position (POS).
//	e. Exit.

#include<stdio.h>
#include<stdlib.h>

int arr[50],pos,elem;
int n = 0;

// Function to create an array with N integers
void create()
{
	int i;
	printf("Enter the number of elements : ");
	scanf("%d",&n);
	
	//Input elements
	printf("\nEnter the elements : ");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
}

// Function to print all elements of the array
void display()
{
	int i;
	//When array is empty
	if(n==0){
		printf("\nNo elements to display");
		return;
	}
			
	//Printing the array
	printf("\nArray elements are : ");
	for(i=0;i<n;i++)
		printf(" %d ,",arr[i]);
}

//Function to insert element at given position
void insert()
{
	int i;
	
	//When array is full
	if(n==50){
		printf("\nInsertion is not possible since array is full");
		return;
	}
	
	//Input insertion index until a valid index is entered.
	do{
		printf("\nEnter a valid position where element is to be inserted (0 to %d) : ",n);
		scanf("%d",&pos);
	}
	while(pos>n);
	
	//Input value to be inserted.
	printf("Enter the value to be inserted : ");
	scanf("%d",&elem);
	
	//Shift elements by one position to the right of the entered index
	for(i=n-1;i>=pos;i--)
		arr[i+1] = arr[i];
	
	//Insert value
	arr[pos] = elem;
	
	//Increase array current size
	n = n+1;
	
	//Display array
	display();		
}

//Function to delete element at given current position
void del()
 {
 	int i;
 	//When array is empty.
 	if(n==0){
 		printf("\nNo elements to delete as array is empty.");
 		return;
	}
	
	//Input deletion index until a valid index is entered.
	do{
		printf("\nEnter a valid position from where element is to be deleted (0 to %d) : ",n-1);
		scanf("%d",&pos);
	} 
	while(pos>=n);
	
	//Storing element to be deleted
	elem = arr[pos];
	printf("\nDeleted element is : %d\n",elem);
	
	//Shifting elements on the right of index
	for(i=pos;i<n-1;i++)
		arr[i]=arr[i+1];
		
	//Decrease array size
	n = n-1;
	
	//Display current array
	display();
 }
 
 int main()
 {
 	int choice;
 	while(1)
 	{
	 	//Display menu options
	 	printf("\nMENU : ");
	 	printf("\n 1. Create Array of N Integer elements.");
	 	printf("\n 2. Display of array elements with suitable headings.");
	 	printf("\n 3. Inserting an element (ELEM) at given valid position (POS)");
	 	printf("\n 4. Deleting an element at a given valid position");
	 	printf("\n 5. Exit");
	 	printf("\n\n Press '9' to clear screen");
	 	
		//Input Choice
		printf("\n\nEnter your Choice : ");
		scanf("%d",&choice);
		
		//Call function according to choice
		switch(choice)
		{
			case 1 : create();
			break;
			
			case 2 : display();
			break;
			
			case 3 : insert();
			break;
			
			case 4 : del();
			break;
			
			case 5 : exit(0);
			break;
			
			case 9 : system("cls");
			break;
			
			default : printf("\nPlease Enter a valid choice");
			
		}
    }
    return 0;
 }
