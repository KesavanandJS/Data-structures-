#include<stdio.h>
#include<stdlib.h>
struct node
{
  struct node*left;
  int data;
  struct node*right;
};
struct node*create_tree()
{
    int x,n;
    printf("do you want to create a node:");
    scanf("%d",&x);
    if(x==0)
        return NULL;
    else
    {
        struct node*new_node=malloc(sizeof(struct node));
        printf("Enter data:");
        scanf("%d",&n);
        new_node->data=n;
        printf("do you want a node for left of %d:",n);
        new_node->left=create_tree();
        printf("do you want a node for right of %d:",n);
        new_node->right=create_tree();
        return new_node;
    }

}
int check_FBT(struct node* root)
{
    int left,right;
    if(root==NULL)
    {
        return 1;
    }
    else if(root->left==NULL && root->right==NULL)
    {
        return 1;
    }
    else if(root->left && root->right)
    {
        left=check_FBT(root->left);
        right=check_FBT(root->right);
        return(left&&right);
    }
    return 0;


}
int inorder(struct node*root)
{
    if(root==NULL){
        return;
    }
    inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);

}
int preorder(struct node*root)
{
    if(root==NULL)
        return;

    printf("%d ",root->data);
    preorder(root->left);
    preorder(root->right);
}
int postorder(struct node*root)
{
    if(root==NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    printf("%d ",root->data);
}
int main()
{
    struct node*root;
    root=create_tree();
    if(check_FBT(root))
    {
        printf("\nThe given tree is full binary tree\n");
    }
    else
    {
        printf("\nThe given tree is not a full binary tree");
    }
    printf("\nIn_order:");
    inorder(root);
    printf("\npre_order:");
    preorder(root);
    printf("\npost_order:");
    postorder(root);
    return 0;
}