#include <stdio.h>
#include<stdlib.h>


struct tnode
{
int data;
struct tnode "right";
struct tnode "left";
};
void main()
{
    int ch;
    struct tnode *root=NULL;
    printf("enter 1: insert, 2:exit ,3:search"\n);
    scanf("%d",&ch);
    switch (ch)
    {
        case 1: insert(ch);
                break;
        case 2: exit(ch);
                break;
        case 3: search(ch);

    }
}
 struct tnode "createBST(struct tnode *root,int item)
 if (root == null)
 {
     root =(struct tnod*)malloc(sizeof(struct tnode));
     root ->left = root -> =NULL;
     root ->data=item;
     return root;

 }
 else
 {
     if(item<root->data)
        root->left = creatBST(root->left,item);
     if(item> root->data)
        root->right=creatBST(root->right,item);
  return(root);


 }
 void Inorder(struct tnode *root)
 if(root!=NULL)
 {
     Inorder(root->left);
     printf("%d",root->data);
     Iorder(root->right);

 }
 struct tnode *searchlist(struct tnode *root,int item)
 if (root == null)
 {
    printf("no nodes in tree\n");
     return root;

 }
 else
 {
     if(root->data==item)
        printf("key found");
     if(item>root->data)
        root->left = searchlist(root->left,item);
     if(item> root->data)
        root->right=searchlist(root->right,item);
  return(root);
 }
