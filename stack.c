struct node{
    int data;

    struct node *next;
};

struct node *top = NULL;
int addnode(int data){
    struct node *New = (struct node *)malloc(sizeof(struct node));
    New->data = data;
    New->next = NULL;
    if (top == NULL){
        top = New;
        return 1;
    }
    else{
        New->next = top;
        top = New;
        return 1;
    }
    return 1;
}
int display(){
    struct node *index = top;
    if (top == NULL){
        printf("liste bos ! \n");
        return 1;
    }
    while (index != NULL){
        printf("%d,",index->data);
        index = index->next;
    }
    return 1;
}
int pop(){
    struct node *temp = top;
    if (top == NULL){
        printf("liste bos !!\n");
        return 1;
    }
    top = top->next;
    free(temp);
    return 1;
}
int main(){
    addnode(2);
    addnode(3);
    addnode(4);
    pop();
    pop();
    display();

    getchar();
}
