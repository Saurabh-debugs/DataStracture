// Various operation perform on the singly linked List ------------------------------------

# include<stdio.h>
# include<malloc.h>
struct node{
	int data;
	struct node *link;
};
struct node *START;
// -------------------------------------------------------------------------------------------
void Insert(int key){
		struct node *ptr = START;
		struct node *temp;
	        temp = (struct node*)malloc(sizeof(struct node));
	        temp->data = key;
	        temp->link = NULL;	
	        	if(START == NULL){
	        	START = temp;	
	      	}else{
	      	
	      		while(ptr->link!=NULL){
	      			ptr = ptr->link;
				  }
				  ptr->link = temp;
			  }
}
// Traversing the linkedlist  -----------------------------------------------------------------------------------------
void TraverseLinkedList(){
	struct node *ptr = START;
	while(ptr!=NULL){
		printf("%d\t",ptr->data);
		ptr = ptr->link;
	}
}
void InsertAtBeg(int key){
	struct node *temp;
	        temp = (struct node*)malloc(sizeof(struct node));
	        temp->data = key;
	        temp->link = START;
	        START = temp;
	        
}
// -----------------------------------------------------------------------------------------
void InsertAtLast(int key){
	struct node *ptr = START;
	struct node *temp;
	  if(START == NULL){
	  	printf("Linked List is empty");
	  	return;
	  }
	  else{
	  	struct node *temp;
	        temp = (struct node*)malloc(sizeof(struct node));
	        temp->data = key;
	        temp->link = NULL;
	        while(ptr->link != NULL){
	        	ptr  = ptr->link;
			}
			ptr->link = temp;
	  }
}
// -----------------------------------------------------------------------------------------------------
int LinkedListLength(){
	struct node * ptr = START;
	int count = 0;
	if(START == NULL){
		return 0;
	}else{   
	while(ptr != NULL){
		count++;
		ptr = ptr->link;
	//	printf("%d",count);
	}
	return count;
	}
	
}
// -----------------------------------------------------------------------------------------------
void PrintSecondLastNode(){
	struct node * temp;
	struct node * ptr = START;
	if(START == NULL || START->link->link == NULL){
		printf("Linked list has less value");
	}else{
        while(ptr->link->link != NULL){
			ptr = ptr->link;
		}
		printf("%d",ptr->data);
	}
}
//-------------------------------------------------------------------------------------------------
void DeleteFirstNode(){
   if(START == NULL)
   printf("Linked list is empty");
   else{
	   struct node *ptr = START;
	   START = ptr->link;
	   ptr->link = NULL;
	   free(ptr);
   }
}
// -----------------------------------------------------------------------------------------------
void DeleteAtLast(){
	struct node *ptr = START;
	if(START == NULL)
	printf("Linked list is empty");
	else{
		while(ptr->link->link!=NULL){
            ptr = ptr->link;
	}
	ptr->link = NULL;
	//free(ptr);
	}
}
// -----------------------------------------------------------------------------------------------------
void DeleteAtLastNode1(int n){
	struct node *ptr=START;
		struct node *temp;
		int i;
		if(START == NULL)
		{
			printf("Linked list is empty");
		}else if(START->link == NULL){
                temp = START;
				START = NULL;
				free(temp);
		}
		else{
			for(i=0;i<n-2;i++){
                 ptr = ptr->link;
			}
			temp = ptr->link;
			ptr->link = NULL;
			free(temp);
		}
}
// -------------------------------------------------------------------------------------------------
void DeleteAtLastNode(){
        struct node *ptr=START;
		struct node *prev= NULL;
		if(START == NULL || START->link == NULL)
		{
			printf("Linked list have less number of node");
		}else{
		while(ptr->link!=NULL){
			prev = ptr;
			ptr = ptr->link;
		}
          prev->link = NULL;
		  free(ptr);
		}
}  
// ---------------------------------------------------------------------------------------------------
void TraverseByRecursion(struct node *ptr){
      if(ptr == NULL)
	  return;
	  printf("%d\t",ptr->data);
	  TraverseByRecursion(ptr->link);
}
// Print the linked List in Reverse Order --------------------------------------------------------------
void PrintLinkedListInReverseOrder(struct node *ptr){
	if(ptr == NULL)
	  return;
	  PrintLinkedListInReverseOrder(ptr->link);
	  printf("%d\t",ptr->data);
}
// ----------------------------------------------------------------------------------------------
 void ReverseLinkedList(){
	struct node *p = START;
	 struct node *q = p->link;
	struct node  *r = q->link;
	p->link = NULL;
	while(q!= NULL){
		r = q->link;
	    q->link = p;
		p = q;
		q = r;	
	}
	START = p;
} 
// Reverse the LikedList in the Reverse order -------------------------------------------------------
void reverse(){
	struct node *prev, *ptr, *next;
	prev = NULL;
	ptr = START;
	
	while(ptr!=NULL){
		next = ptr->link;
		ptr->link = prev;
		prev = ptr;
		ptr = next;
	}
	START = prev;
}
// Display the middle of a Liked List Method 1 --------------------------------------------------------
void PrintMiddleElement(){
	struct node * ptr = START;
	int len = LinkedListLength();
	int i;
	for(i=0;i<len/2;i++){
            ptr = ptr->link;
	}
	printf("%d",ptr->data);
}
// Display the middle element of a Linked List Method 2 -----------------------------------------------
void PrintMiddleElement_01(){
	struct node *slow = START;
	struct node *fast = START;
	while(fast!=NULL){
		slow = slow->link;
		fast = fast->link->link;
	}
	printf("Middle element is %d",slow->data);
}
// ----------------------------------------------------------------------------------------------------
void main(){
   Insert(10);
   Insert(20);
   Insert(30);
   Insert(40);
   Insert(50);
   Insert(60);
   Insert(70);
   Insert(80);
   TraverseLinkedList();
   InsertAtBeg(5);
   printf("\n");
   TraverseLinkedList();
   InsertAtLast(100);
   printf("\n");
   TraverseLinkedList();
   int length =  LinkedListLength();
   printf("\n");
   printf("Length is %d",length);
   printf("\nPrint The Second Last Node --------------> ");
   PrintSecondLastNode();
   DeleteFirstNode();
   printf("\nDelete the first node ------------> ");
   TraverseLinkedList();
   printf("\nDelete the Last node --------------->");
   DeleteAtLast();
   TraverseLinkedList();
   int n = LinkedListLength();
   DeleteAtLastNode1(n);
   printf("\nDelete the Last node in effective way -----> ");
   TraverseLinkedList();
   DeleteAtLastNode();
   printf("\nDelete the Last node in Second Way --------> ");
   TraverseLinkedList();
   printf("\n Printing the linked list using Recursion ----->");
   TraverseByRecursion(START);
    printf("\n Printing the linked list in Reverse Order using Recursion ----->");
   PrintLinkedListInReverseOrder(START);
   ReverseLinkedList();
   printf("\n Reverse the Linked List --------------> ");
    TraverseByRecursion(START);
	printf("\nMiddle element of a Linked list is ------> ");
	PrintMiddleElement();
	printf("\n");
	PrintMiddleElement_01();
	reverse();
	printf("\n");
	TraverseByRecursion(START);
}

