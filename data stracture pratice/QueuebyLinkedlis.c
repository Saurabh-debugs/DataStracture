// Implementation of the Queue from Linked List --------------------->

# include<stdio.h>
# include<malloc.h>
struct node {
    int data;
    struct node *next;
};
struct node *START;
struct node *front; 
struct node *rear;  
// Insertion of the data into the queue ------------------------> <******** Enqueue ********>
void Insert(int key){
    struct node *ptr = START;
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = key;
    temp->next = NULL;
    if(START == NULL )
    {
        START = temp;
        front = START;
         }
         else{
             while(ptr->next!=NULL){
	      			ptr = ptr->next;
				  }
				  ptr->next = temp;
                  rear = ptr->next;
                  front = START;
         }
}
// deletion of the Data from queue -------------------------> <*********** Dequeue ***********>
void DeleteInQueue(){
    if(front == NULL)
   printf("\nQueue is empty at deletion time");
   else{
	   struct node *ptr = START;
	   START = ptr->next;
	   ptr->next = NULL;
       front = START;
	   free(ptr);
   }
}
// Display the Queue ------------------------------------------------------------------------>
void TraverseQueue(){
struct node *ptr = START;
if(front == NULL){
    printf("queue is empty at traverrsing time");
}else if(front == rear){
    printf("this is a single element left in the Queue --> %d%d",front->data);
}
else{
while(ptr!=NULL){
printf("%d\t",ptr->data);
		ptr = ptr->next; 
} }
}
// ------------------------------------------------------------------------------------------>
int main(){
    Insert(10);
    Insert(20);
    Insert(30);
    Insert(40);
    Insert(50);
    printf("\n");
    TraverseQueue();
    DeleteInQueue();
    DeleteInQueue();
    DeleteInQueue();
    DeleteInQueue();
    DeleteInQueue();
    DeleteInQueue();
    printf("\n");
    TraverseQueue();
}