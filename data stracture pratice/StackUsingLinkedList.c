// Implementation of Stack using LinkedList ------------------------------------------------->
/* We have to perform various stack opertaion in constant time so we have to insert and delete 
   the element into the stack in benginning of the linked list --> */

# include<stdio.h>
# include<malloc.h>  
struct node {
    int data;
    struct node *next;
};
struct node *top;
// Insert the data into the Stack using Linked list -------------------------------------------> <**** PUSH *****>
void InsertDataInStack(int key){
    struct node *ptr = top;
    struct node *temp;
     temp = (struct node *)malloc(sizeof(struct node));
    temp->data = key;
    temp->next = NULL;
    if(top == NULL){
      top = temp;
    }
    else{
        temp->next = top;
        top = temp;  
    }
   
}
// Delete the element in the Stack using linkedlist -----------------------------------> <****** POP *******>
void popByLinkedlist(){
    struct node *ptr = top;
    if(top == NULL){
        printf("stack is empty");
        return;
    }
    else{
    top = ptr->next;
    ptr->next = NULL;
    free(ptr);
    }
} 
// display the top of the element ----------------------------------------------------> <****** peek ******>
void peekbyLinkedList(){
    printf("\n Top element is --> %d",top->data);
}
// Display the Stack using Linked List -------------------------------------------------------->
void DisplayStackByLinkedList(){
    struct node *ptr = top;
    while(ptr!=NULL)
    {
        printf("%d\t",ptr->data);
        ptr = ptr->next;
    }
}
// -------------------------------------------------------------------------------------------->
void main(){
  InsertDataInStack(10);
  InsertDataInStack(20);
  InsertDataInStack(30);
  InsertDataInStack(40);
  InsertDataInStack(50);
  DisplayStackByLinkedList();
  popByLinkedlist();
  printf("\n pop the element  ---> ");
  DisplayStackByLinkedList();
  peekbyLinkedList();
  popByLinkedlist();
  peekbyLinkedList();
  printf("\n");
  DisplayStackByLinkedList();
}