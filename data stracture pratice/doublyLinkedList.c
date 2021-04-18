# include<stdio.h>
# include<malloc.h>
struct node{
	int data;
	struct node *next;
	//int data;
    struct node *pre;

};
struct node *START;
void Insert(int key){
		struct node *ptr = START;
		struct node *temp;
	        temp = (struct node*)malloc(sizeof(struct node));
	        temp->data = key;
	        temp->next = NULL;	
            temp->pre =  NULL;
	        	if(START == NULL){
	        	START = temp;	
	      	}else{
	      	
	      		while(ptr->next!=NULL){
	      			ptr = ptr->next;
                    
				  }
				  ptr->next = temp;
                  temp->pre = ptr;
			  }
}
// Traversing the doubly linked list -----------------------------------------------------------------------------------------
void TraverseLinkedList(){
	struct node *ptr = START;
	while(ptr!=NULL){
		printf("%d\t",ptr->data);
		ptr = ptr->next;
	}
}
// Insert in the beginning -----------------------------------------------------------------------------------
void InsertAtBeg(int key){
	struct node *temp;
	        temp = (struct node*)malloc(sizeof(struct node));
	        temp->data = key;
            temp->pre = NULL;
	        temp->next = START;
			START->pre = temp;
	        START = temp;
}
// Insert at the Last ---------------------------------------------------------------------------------------
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
	        temp->next = NULL;
            temp->pre = NULL;
	        while(ptr->next != NULL){
	        	ptr  = ptr->next;
			}
			ptr->next = temp;
            temp->pre = ptr;
	  }
}
// Traversing the linked list from the last -------------------------------------------------------------
void TraverseFromLast(){
    struct node *ptr = START;
	struct node *q;
	printf("\n traversing from left to right -------------> ");
    while(ptr!= NULL){
		printf("%d\t",ptr->data);
		q  = ptr;
        ptr = ptr->next;
    }
	// printf("\n%d\t",ptr->data);
 	printf("\n traversing from right to left -------------> ");
    while(q!= NULL){
		         printf("%d\t",q->data);
                 q = q->pre;
    }
  //   printf("\n%d\t",q->data);  

}
// length of a linked list ---------------------------------
int LengthofDoublyLinkedList(struct node *ptr){
//	struct node *ptr = START;
	int count = 0;
	while(ptr!=NULL){
		count++;
        ptr = ptr->next;
	}
	return count;
}
// Insert the element in the middle of the node ------------------
void InsertAtMiddleDoublyLinkedList(int key){
	struct node *ptr = START;
	int i;
	struct node *temp;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->pre = NULL;
	temp->next = NULL;
	temp->data = key;
	int n = LengthofDoublyLinkedList(START);
	for(i=1;i<n/2;i++){
        ptr = ptr->next;
		
	}
	    printf("\n before %d",ptr->data);
	     temp->next = ptr->next;
         temp->pre  = ptr;
		 ptr->next = temp;
	     ptr->next->pre = temp;
		  printf("\n after %d",ptr->next->data);
		 // free(temp);
}
// delete the node from the last ------------------------------------------------------------------
void deleteFromLastIndoubly(){
	struct node *ptr=START;
		struct node *prev= NULL;
		if(START == NULL || START->next == NULL)
		{
			printf("Linked list have less number of node");
		}else{
		while(ptr->next!=NULL){
			prev = ptr;
			ptr = ptr->next;
		}
		  ptr->pre = NULL;
          prev->next = NULL;
		  free(ptr);
		}
}
// reverse the doubly linked list --------------------------------------------------------------->
/*void ReversedoublyLinkedList(){
	struct node *p = START;
	 struct node *q = p->next;
	struct node  *r = q->next;
	p->next = NULL;
	while(q!= NULL){
		r = q->next;
		q->pre = q->next;
	    q->next = p;
		
		p = q;
		q = r;	
	}
	START = p;
} */
int main(){
   Insert(10);
   Insert(20);
   Insert(30);
   Insert(40);
   TraverseLinkedList();
   InsertAtBeg(5);
   printf("\n");
   TraverseLinkedList();
   InsertAtLast(50);
   printf("\n");
   TraverseLinkedList();
   printf("\n");
   TraverseFromLast();
   int length = LengthofDoublyLinkedList(START);
   printf("\nLength of Doubly linked list is --> %d",length);
   printf("\n Insert tha data into the midddle of an linked list -------> ");
   InsertAtMiddleDoublyLinkedList(25);
   printf("\n Travesrsing after insertion at the middle ");
   TraverseLinkedList();
   printf("\n delete the last node on doubly linked list ------->");
   deleteFromLastIndoubly();
   TraverseLinkedList();
}