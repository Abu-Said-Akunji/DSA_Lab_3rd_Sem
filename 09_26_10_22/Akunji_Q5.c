/*Q5. WAP to create a binary search tree and find the total number of nodes.*/

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *tree;
void create_tree(struct node *);
struct node *insertElement(struct node *, int);
void inorderTraversal(struct node *);
int totalNodes(struct node *);
int main()
{
    int option, val;
    struct node *ptr;
    create_tree(tree);
    // clrscr();
    do
    {
        printf("\n ***MAIN MENU** \n");
        printf("\n 1. Insert Element");
        printf("\n 2. Display Inorder Traversal");
        printf("\n 3. Count the total number of nodes");
        printf("\n 4. Exit Program");
        printf("\n\n Enter your option : ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            printf("\n Enter the value of the new node : ");
            scanf("%d", &val);
            tree = insertElement(tree, val);
            break;
        case 2:
            printf("\n The elements of the tree are : \n");
            inorderTraversal(tree);
            break;
        case 3:
            printf("\n Total no. of nodes = %d", totalNodes(tree));
            break;
        }
    } while (option != 4);
    getch();
    return 0;
}
void create_tree(struct node *tree)
{
    tree = NULL;
}
struct node *insertElement(struct node *tree, int val)
{
    struct node *ptr, *nodeptr, *parentptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = val;
    ptr->left = NULL;
    ptr->right = NULL;
    if (tree == NULL)
    {
        tree = ptr;
        tree->left = NULL;
        tree->right = NULL;
    }
    else
    {
        parentptr = NULL;
        nodeptr = tree;
        while (nodeptr != NULL)
        {
            parentptr = nodeptr;
            if (val < nodeptr->data)
                nodeptr = nodeptr->left;
            else
                nodeptr = nodeptr->right;
        }
        if (val < parentptr->data)
            parentptr->left = ptr;
        else
            parentptr->right = ptr;
    }
    return tree;
}

void inorderTraversal(struct node *tree)
{
    if (tree != NULL)
    {
        inorderTraversal(tree->left);
        printf("%d\t", tree->data);
        inorderTraversal(tree->right);
    }
}
int totalNodes(struct node *tree)
{
    if (tree == NULL)
        return 0;
    else
        return (totalNodes(tree->left) + totalNodes(tree->right) + 1);
}