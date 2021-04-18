// implementing the STACK using Array ---------------------
# include<stdio.h>
# define size 10
int STACK[size];
int top = -1;
// insertion of the element --------------------------------->
void push(int data){
    if(top == size-1){
        printf("stack is full");
        return; }
        top++;
        STACK[top] = data;
    
}
// deletion of the element from the stack ------------------------------------>
void pop(){
    if(top == -1){
        printf("Stack is empty // underflow --->");
        return;
    }
    top--;
}
// display the top element in the stack ----------------------------------- >
int peek(){
    if(top == -1){
        printf("stack is empty");
        return 0;
    }
    return STACK[top];
}
// check the Stack is empty or not ------------------------------------>
void isEmpty(){
    if(top == -1){
        printf("\n Yes,Stack is empty");
    }else{
        printf("\n No, Stack is not empty");
    }
}
// check the Stack is full or not ------------------------------------>
void isFull(){
    if(top == size-1){
        printf("\n Yes,Stack is Full");
    }else{
        printf("\n No, Stack is not Full");
    }
}
// Display the  stack   ----------------------------------------------
void DisplayStack(){
   int i;
    for(i=0;i<size;i++){
        printf("%d\t",STACK[i]);
    }
}
// ------------------------------------------------------------------------
int main(){
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    DisplayStack();
    pop();
    printf("\n");
    DisplayStack();
    int peekElement = peek();
    printf("\n top element in the stack is --> %d", peekElement);
    isEmpty();
    isFull();
}