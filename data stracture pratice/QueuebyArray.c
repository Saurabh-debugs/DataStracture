// Implementing the queue by using array 
# include<stdio.h>
# define size 10
int QUEUE[size];
int front = -1;
int rear = -1;
// insert the element into the queue --------------------------------------------------><***** Enque ****>
void InsertInQueue(int key){
    if(rear == size-1){
        printf("queue is full");
        return;
    }
   else if(front == -1 && rear == -1){
        front++;
        rear++;
        QUEUE[rear] = key;
   }
   else{
       rear++;
       QUEUE[rear] = key;
   }
}
// delete the element from the queue --------------------------------------------> <***** Deque ****>
void DeleteFromQueue(){
    if(front == -1){
        printf("queue is already empty");
        return;
    }
    else if(front == rear){
        front = -1;
        rear = -1;
        printf("\nthis is a first element\n");
    }
    else{
        front++;
    }
}
// display the queue ------------------------------------------>
void DisplayQueue(){
    if(front == -1 && rear == -1){
        printf("queue is empty");
        return;
    }
    else{
        int i;
        for(i=front; i<=rear;i++){
            printf("%d\t",QUEUE[i]);
        }
    }
}
int main(){
    InsertInQueue(10);
    InsertInQueue(20);
    InsertInQueue(30);
    InsertInQueue(40);
    InsertInQueue(50);
    InsertInQueue(60);
    InsertInQueue(70);
    printf("\n After Insertion of element in the queue ------------>");
    DisplayQueue();
    DeleteFromQueue();
    DeleteFromQueue();
    DeleteFromQueue();
    DeleteFromQueue();
    printf("\n After Deletion of element from queue ---------> ");
    DisplayQueue();


}