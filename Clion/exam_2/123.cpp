#include <stdio.h>
#include <stdlib.h>



struct Node *getNextRight(struct Node *p)
{
    struct Node *temp = p->right_sibling;

    while (temp != NULL)
    {
        if (temp->left != NULL)
            return temp->left;
        if (temp->right != NULL)
            return temp->right;
        temp = temp->right_sibling;
    }

    return NULL;
}


void build_siblings(struct Node* p)
{
    struct Node *temp;

    if (!p)
        return;


    p->right_sibling = NULL;


    while (p != NULL)
    {
        struct Node *q = p;


        while (q != NULL)
        {
            if (q->left)
            {
                if (q->right)
                    q->left->right_sibling = q->right;
                else
                    q->left->right_sibling = getNextRight(q);
            }

            if (q->right)
                q->right->right_sibling = getNextRight(q);

            q = q->right_sibling;
        }

        if (p->left)
            p = p->left;
        else if (p->right)
            p = p->right;
        else
            p = getNextRight(p);
    }
}