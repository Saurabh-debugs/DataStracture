// Implementation of the Prioty Queue ---------------------------------------------->
# include<stdio.h>
# include<malloc.h>
struct node{
  int data;
  int prt;
  struct node *next;
};
struct node *START;
struct node *front; 
struct node *rear;  
// Insertion of the data into the Priority queue ------------------------> <******** Enqueue ********>
void Insert(int key,int p){
    struct node *ptr = START;
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = key;
    temp->prt = p; 
    temp->next = NULL;
    if(START == NULL || p < START->prt)
    {
        START = temp;
        front = START;
         }
         else{
             while(ptr->next!=NULL && ptr->next->prt<=p){
	      			ptr = ptr->next;
				  
				  ptr->next = temp;
                  rear = ptr->next;
             }
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
    printf("this is a single element left in the Queue --> %d%d",front->data,front->prt);
}
else{
while(ptr!=NULL){
printf("%d\t%d\t",ptr->data,ptr->prt);

		ptr = ptr->next; 
} } }
int main(){
    Insert(10,1);
    Insert(20,2);
    Insert(30,3);
    Insert(40,4);
    Insert(50,5);
    printf("\n");
    TraverseQueue();
    DeleteInQueue();
   // DeleteInQueue();

    printf("\n");
    TraverseQueue();
}