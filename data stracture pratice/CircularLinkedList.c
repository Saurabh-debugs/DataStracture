# include<stdio.h>
# include<malloc.h>
struct node{
    int data;
    struct node *next;
}
struct node *START;
void InsertData(int key){
    struct node *ptr;
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = key;
    temp->next = NULL;
    if(START == NULL){
       START = temp;
       temp->next = START;
    }
    else{
        while(ptr!=NULL){
            ptr = ptr->next;
        }
        ptr->next = temp;
        temp->next = START;
    }
    
}
int main(){

}