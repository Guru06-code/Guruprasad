#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    struct node *lp;
    int x;
    struct node *rp;
}node;
struct node *getnode()
{
    return(node*)malloc(sizeof(node));
}
node *insert(node *root)
{
    node *curr=getnode();
    curr->lp=NULL;
    curr->rp=NULL;
    int ch;
    printf("Press -1 to create left child\n");
    scanf("%d",&ch);
    if(ch==-1)
    {
        printf("Enter the value\n");
        scanf("%d",&curr->x);
        root->lp=curr;
        insert(curr);
    }
    printf("Press -1 to create right child\n");
    scanf("%d",&ch);
    if(ch==-1)
    {
        printf("Enter the value\n");
        scanf("%d",&curr->x);
        root->rp=curr;
        insert(curr);
    }
    return root;
}
void inorder(node *root)
{
    if(root!=NULL)
    {
        inorder(root->lp);
        printf("%d\t",root->x);
        inorder(root->rp);
    }
}
int main()
{
    node *root=getnode();
    printf("Enter the value to insert in root node\n");
    scanf("%d",&root->x);
    root=insert(root);
    printf("Inorder\n");
    inorder(root);
    return 0;
}
