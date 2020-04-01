#include<stdio.h>
#include<stdlib.h>

struct tree
{
    int data;
    struct tree * left;
    struct tree * right;
};
typedef struct tree TREE;

TREE * insert(TREE * root)
{
TREE * newnode;
newnode = (TREE*)malloc(sizeof(TREE));
if(newnode==NULL)
{
    printf("memory allocation failed\n");
    return root;
}
printf("enter the data\n");
scanf("%d",&newnode->data);
newnode->left=NULL;
newnode->right=NULL;
if(root==NULL)
{
root=newnode;
printf("node added successfully\n");
return root;
}
TREE * temp;
TREE * prev;
prev=NULL;
temp=root;
while(temp!=NULL)
{
    prev=temp;
    if(temp->data>newnode->data)
    {
        temp=temp->left;
    }
    else
    {
        temp=temp->right;
    }
}
    if(prev->data<newnode->data)
{
    prev->right=newnode;
    printf("node added successfully\n");

}
else{
    prev->left=newnode;
printf("node added successfully\n");
}
return root;
}

TREE * delete_node(TREE * root)
{
    if(root==NULL)
    {
        printf("the tree is empty\n");
        return root;
    }
    printf("enter the data of the node to be deleted \n");
    int item;
    scanf("%d",&item);
    TREE * temp=root;
    TREE * prev=NULL;
    while(temp!=NULL&&temp->data!=item)
    {
        prev=temp;
        if(temp->data>item)
        {
            temp=temp->left;
        }
        else{
            temp=temp->left;
        }

    }
    if(temp==NULL)
    {
        printf("the node not found \n");
        return root;
    }
    TREE * p=NULL;
    TREE * s=NULL;
    if(temp->left==NULL)
    {
        p=temp->right;
    }
    else if(temp->right==NULL)
    {
        p=temp->left;
    }
    else{
        s=temp->right;
        while(s->left!=NULL)
        {
            s=s->left;
        }
        s->left=temp->left;
        p=temp->right;
    }
    if(prev==NULL)
    {
        free(temp);
        root=p;
        return root;
    }
    if(temp==prev->left)
    {
        prev->left=p;
    }
    else{
        prev->right=p;
    }
    free(temp);
return root;
}

void inorder(TREE * root)
{
    if(root!=NULL)
    {
   inorder(root->left);
    printf("%d\n",root->data);
    inorder(root->right);
    }

}

void preorder(TREE * root)
{
    if(root!=NULL)
    {
    printf("%d\n",root->data);
    preorder(root->left);
    preorder(root->right);
    }

}

void postorder(TREE * root)
{
    if(root!=NULL)
    {
   postorder(root->left);
    postorder(root->right);
    printf("%d\n",root->data);
    }

}

int main()
{
TREE * root=NULL;
int choice;
while(1)
{
    printf("1-insert a node\n2-delete a node from the tree\n3-inorder\n4-preorder\n5-postorder\nenter your choice\n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:root=insert(root);
            break;
    case 2:root=delete_node(root);
            break;
    case 3:inorder(root);
            break;
    case 4:preorder(root);
            break;
    case 5:postorder(root);
            break;
    case 6:exit(0);
            break;
    default: printf("enter valid datan\n");
            break;
    }
}
}
