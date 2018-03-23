#include<stdio.h>
#include<stdlib.h>

struct node{
    int val;
    struct node* next;
};

struct node* getNewNode(int val){
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    ptr->val = val;
    ptr->next = NULL;
return ptr;
}

void insertNewNode(struct node* root, int val){
    struct node* ptr = root;
    while(ptr->next!=NULL){
        ptr = ptr->next;
    }
    ptr->next = getNewNode(val);
}

void deleteNode(struct node* root,int val){
    struct node* ptr = root;
    while(ptr->next->val != val && ptr != NULL){
        ptr = ptr->next;
    }
    if(ptr == NULL)printf("NO VAL FOUND\n");
    else{
        struct node* temp = ptr->next;
        ptr->next = temp->next;
        free(temp);
        printf("%d NODE IS DELETED\n",val);
    }
}

void displayList(struct node* root){
    int i = 1;
    while(root!=NULL){
        printf("%d\t",root->val);
        if(i%5 == 0)printf("\n");
        ++i;
        root = root->next;
    }
}

int main(){
    struct node* root = getNewNode(1);
    int i;
    for(i = 1; i < 50; ++i){
        insertNewNode(root,i+1);
    }
    deleteNode(root,15);
    deleteNode(root,25);
    deleteNode(root,35);
    displayList(root);
    return 0;
}