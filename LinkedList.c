struct node {
    int data;
    struct node *next;
};
struct node *head = NULL;
struct node *tail = NULL;
int Delete(int data){
    struct node *index = head;
    struct node *prev = (struct node *)malloc(sizeof(struct node));
    if (head == NULL){
        printf("liste bos !\n");
        return 1;
    }
    if (head->data == data){
        struct node *temp = head;
        head =head->next;
        free(temp);
        return 1;
    }
    while (index != NULL && index->data != data){
        prev = index;
        index = index->next;
    }
    if (index ==NULL)
    {
        printf("silenecek eleman bulunmadi\n");
        return 1;
    }
    
    prev->next = index->next;
    if (tail ->data == data){
        tail = prev;
    }
    free(index);
    return 1;
}
int display(){
    struct node *index = head;
    if (index == NULL){
        printf("liste bos\n");
        return 1;
    }
    while (index != NULL){
        printf("%d -",index->data);
        index = index->next;
    }
    return 1;
}
int addnode(int data){
    struct node *New = (struct node*)malloc(sizeof(struct node));
    New->data = data;
    New->next = NULL;
    if (head == NULL){
        head = tail = New;
        return 1;
    }
    else{
        tail->next = New;
        tail = New;
        return 1;
    }
    return 1;
}
int addnodetohead(int data){
    struct node *New = (struct node*)malloc(sizeof(struct node));
    New->data = data;
    New->next = NULL;
    if (head == NULL){
        head = tail = New;
        return 1;
    }
    else{
        New->next = head;
        head = New;
        return 1;
    }
}
int main(){
    addnode(4);
    addnode(5);
    addnode(31);
    addnodetohead(2);
    addnodetohead(1);
    Delete(31);
    display();
    getchar();
}
