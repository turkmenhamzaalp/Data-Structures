#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node *NewNode(int data){
    struct node *New = (struct node *)malloc(sizeof(struct node));
    New->data = data;
    New->left = NULL;
    New->right = NULL;
    return New;
}

int main(){
    struct node *root = (struct node *)malloc(sizeof(struct node));
    root = NewNode(1);
    root->left = NewNode(2);
    root->right = NewNode(3);
    root->left->left = NewNode(4);
    printf("%d,%d,%d,%d",root->data,root->left->data,root->right->data,root->left->left->data);
}
