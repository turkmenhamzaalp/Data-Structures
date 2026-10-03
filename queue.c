#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;

    struct node *sonraki;
};

struct node *front = NULL;
struct node *rear = NULL;

int addnode(int data){
    struct node *New = (struct node*)malloc(sizeof(struct node));
    New->data = data;
    New->sonraki = NULL;
    if (front == NULL){
        front = rear = New;
        return 1;
    }
    else{
        rear->sonraki = New;
        rear = New;
        return 1;
    }
    return 1;
}
int dequeue(){
    struct node *index = front;
    struct node *temp = front;
    if (front == NULL){
        printf("listen bos ! \n");
        return 1;
    }
    
    front = front->sonraki;
    free(temp);
    return 1;
}
int print(){
    struct node *index = front;
    if (front == NULL){
        printf("liste bos ! \n");
        return 1;
    }
    while (index != NULL){
        printf("- %d -" ,index->data);
        index = index->sonraki;
    }
    
    return 1;
}
int main(){
    addnode(32);
    addnode(44);
    addnode(55);
    dequeue();
    print();
}
