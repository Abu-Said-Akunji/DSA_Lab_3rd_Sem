/*Q3. WAP to create a binary search tree and find the smallest element.*/

#include <stdio.h>
#include <conio.h>
#include <malloc.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *tree;
void create_tree(struct node *);
struct node *insertElement(struct node *, int);
struct node *findSmallestElement(struct node *);
struct node *deleteTree(struct node *);
int main()
{
    int option, val;
    struct node *ptr;
    create_tree(tree);
    do
    {
        printf("\n ******MAIN MENU******* \n");
        printf("\n 1. Insert Element");
        printf("\n 2. Find the smallest element");
        printf("\n 3. Delete the tree");
        printf("\n 4. Exit");
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
            ptr = findSmallestElement(tree);
            printf("\n Smallest element is :%d", ptr->data);
            break;
        case 3:
            tree = deleteTree(tree);
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
struct node *findSmallestElement(struct node *tree)
{
    if ((tree == NULL) || (tree->left == NULL))
        return tree;
    else
        return findSmallestElement(tree->left);
}
struct node *deleteTree(struct node *tree)
{
    if (tree != NULL)
    {
        deleteTree(tree->left);
        deleteTree(tree->right);
        free(tree);
    }
}