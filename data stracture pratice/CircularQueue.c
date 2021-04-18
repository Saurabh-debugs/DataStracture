// Implementing the queue by using array 
# include<stdio.h>
# define size 7
int QUEUE[size];
int front = -1;
int rear = -1;
// insert the element into the queue --------------------------------------------------><***** Enque ****>
void InsertInCircularQueue(int key){
    if((front == 0 && rear == size-1) || (front == (rear+1)%size)){
        printf("Circular Queue is full");
        return;
    }
    else if(front == -1){
        front = rear = 0;
        QUEUE[rear] = key;
    }
    else if(rear == size-1){
      rear = 0;
      QUEUE[rear] = key;
    }
    else{
        rear++;
        QUEUE[rear] = key;
    }
}
// delete the element from the queue --------------------------------------------> <***** Deque ****>
void DeleteFromCircularQueue(){
     if(front == -1){
         printf("\n No, element is in the Circular Queue");
         return;
     }
     else if(front == rear){
        front = -1;
        rear = -1;
        printf("\nthis is a first element\n");
    }else if(front == size-1){
        front = 0;
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
        if(front<rear){
        for(i=front; i<=rear;i++){
            printf("%d\t",QUEUE[i]);
        }}
        else{
          for(i=front; i<=size-1;i++){
            printf("%d\t",QUEUE[i]);
        } for(i=0; i<=rear;i++){
            printf("%d\t",QUEUE[i]);
        } 

        }
    }
}
int main(){
    InsertInCircularQueue(10);
    InsertInCircularQueue(20);
    InsertInCircularQueue(30);
    InsertInCircularQueue(40);
    InsertInCircularQueue(50);
    InsertInCircularQueue(60);
    InsertInCircularQueue(70);
    printf("\n After Insertion of element in the queue ------------>");
    DisplayQueue();
    DeleteFromCircularQueue();
    DeleteFromCircularQueue();
    DeleteFromCircularQueue();
    DeleteFromCircularQueue();
    DeleteFromCircularQueue();
    printf("\n After Deletion of element from queue ---------> ");
    DisplayQueue();
    InsertInCircularQueue(80);
    InsertInCircularQueue(90);
    InsertInCircularQueue(100);
    InsertInCircularQueue(110);
    InsertInCircularQueue(120);
    printf("\n After Insertion of element from queue ---------> ");
    DisplayQueue();


}