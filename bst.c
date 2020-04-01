#include<stdio.h>
#include<stdlib.h>
struct tree
{
    int data;
    struct tree *left;
    struct tree *right;
};
typedef struct tree TREE;
int count;
int k;
TREE * chk;
TREE * root1;
TREE * insert_into_bst(TREE * root)
{
    TREE *newnode;
    newnode=(TREE*)malloc(sizeof(TREE));
    if(newnode==NULL)
    {
        printf("memory allocation failed\n");
        return root;
    }
    printf("enter the tree data\n");
    scanf("%d",&newnode->data);
    newnode->left=NULL;
    newnode->right=NULL;
    if(root==NULL)
    {
        root=newnode;
        printf("root created\n");
        return root;
    }
    TREE *prev,*curr;
    curr=root;
    prev=NULL;
    while(curr!=NULL)
    {
        prev=curr;
        if(newnode->data<curr->data)
        {
            curr=curr->left;
        }
        else
        {
            curr = curr->right;
        }
    }
    if(newnode->data<prev->data)
    {
        prev->left=newnode;
    }
    else
    {
        prev->right=newnode;
    }
    return root;
}
TREE * delete_from_bst (TREE * root)
{
    int item;
    printf("enter the item to be deleted\n");
    scanf("%d",&item);
    TREE * currnode, *parent, *successor, *p;

    if(root == NULL)
    {
        printf("Tree is empty\n");
        return root;
    }

    parent = NULL;
    currnode = root;
    while (currnode != NULL && item != currnode->data)
    {
        parent = currnode;
        if(item < currnode->data)
            currnode  = currnode->left;
        else
            currnode = currnode->right;
    }

    if(currnode == NULL)  {
        printf("Item not found\n");
        return root;
    }

    if(currnode->left == NULL)
        p = currnode->right;
    else if (currnode->right == NULL)
        p = currnode->left;
    else
    {
        successor = currnode->right;
        while(successor->left != NULL)
            successor = successor->left;

        successor->left = currnode->left;
        p = currnode->right;
    }

    if (parent == NULL) {
        free(currnode);
        return p;
    }

    if(currnode == parent ->left)
        parent->left = p;
    else
        parent->right = p;

    free(currnode);
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
void print_address(TREE * root)
{
    printf("THE ROOT IS AT %p\n",root);
}
void number_of_nodes(TREE * root)
{
if(root!=NULL)
    {
        number_of_nodes(root->left);
        count++;
        number_of_nodes(root->right);
    }
}
void number_of_leafs(TREE * root)
{
if(root!=NULL)
    {
        number_of_leafs(root->left);
        if(root->left==NULL&&root->right==NULL)
        {
        count++;
        }
        number_of_leafs(root->right);
    }
}
void number_of_edges(TREE * root)
{
if(root!=NULL)
    {
        number_of_edges(root->left);
        if(root->left==NULL&&root->right==NULL)
        {
        count++;
        }
        number_of_edges(root->right);
    }
}
void number_of_nodesgk(TREE * root)
{
if(root!=NULL)
    {
        number_of_nodesgk(root->left);
        if(root->data>k)
        {
        count++;
        }
        number_of_nodesgk(root->right);
    }
}
/**void iopredecessor(TREE * root)
{
    TREE * currnode, *parent, *successor, *p;

    if(root == NULL)
    {
        printf("Tree is empty\n");
        return;
    }

    parent = NULL;
    currnode = root;
    while (currnode != NULL && item != currnode->data)
    {
        parent = currnode;
        if(item < currnode->data)
            currnode  = currnode->left;
        else
            currnode = currnode->right;
    }

    if(currnode == NULL)  {
        printf("Item not found\n");
        return;
    }

    if(currnode->left == NULL)
    {
        if(currnode->data>parent->data)
        {
            printf("the predecessor is %d\n",prev->data);
            return;
        }
        else
        {
            printf("predecessor does not exist\n");
            return;
        }
    }
    else
    {
        successor = currnode->left;
        while(successor->left != NULL)
            successor = successor->right;

        successor->left = currnode->right;
        printf("the predecessor is %d\n",successor->data);
    }
}**/


int main()
{
    TREE *root=NULL;
    int choice;
    while(1)
    {
        printf("hey ya peeooplle\n");
        printf("0-Exit\n1-Insert\n2-Inorder\n3-Postorder\n4-Inorder\n5-delete\n6-address of the root node\n7-the total number of nodes in the tree\n");
        printf("8-the number of leaf nodes in the tree\n9-number of edges in the tree\n10- number nodes greater than k\n11-in order predecessor\n");
        printf("12-in order successor\n");
        printf("enter your choice\n");
        scanf("%d",&choice);
        if(choice!=0)
        {switch(choice)
        {
            case 1: root = insert_into_bst(root);
                    break;
            case 2: inorder(root);
                    break;
            case 3: postorder(root);
                    break;
            case 4: preorder(root);
                    break;
            case 5: root = delete_from_bst(root);
                    break;
            case 6: count=0;
                    print_address(root);
                    break;
            case 7: count=0;
                    number_of_nodes(root);
                    printf("the count is %d\n",count);
                    break;
            case 8: count=0;
                    number_of_leafs(root);
                    printf("the count is %d\n",count);
                    break;
            case 9: count=0;
                    number_of_edges(root);
                    printf("the count is %d\n",count--);
                    break;
            case 10: count=0;
                    printf("enter the value of k\n");
                    scanf("%d",&k);
                    number_of_nodesgk(root);
                    printf("the count is %d\n",count);
                    break;
            /**case 11: count=0;
                    root1=root;
                    printf("enter the key\n");
                    scanf("%d",&k);
                     iopredecessor(root);
                     break;
            case 12: count=0;
                    root1=root;
                     printf("enter the key\n");
                    scanf("%d",&k);
                     iosuccessor(root);
                     break;**/

            default: printf("invalid input\n");
                        break;
        }
        }
        else {exit(0);}
    }
}
