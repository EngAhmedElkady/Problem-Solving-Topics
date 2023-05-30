#include <iostream>
using namespace std;


class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data = data;
        this->left = this->right = NULL;
    }

    void insert(int data)
    {
        if (data < this->data)
        {
            if (this->left == NULL)
            {
                this->left = new Node(data);
            }
            else
            {
                this->left->insert(data);
            }
        }
        else
        {
            if (this->right == NULL)
            {
                this->right = new Node(data);
            }
            else
            {
                this->right->insert(data);
            }
        }
    }

    bool contains(int data)
    {
        if (data == this->data)
        {
            return true;
        }
        else if (data < this->data)
        {
            if (this->left == NULL)
            {
                return false;
            }
            else
            {
                return this->left->contains(data);
            }
        }
        else
        {
            if (this->right == NULL)
            {
                return false;
            }
            else
            {
                return this->right->contains(data);
            }
        }
    }

    void inOrder()
    {
        if (this->left != NULL)
        {
            this->left->inOrder();
        }
        cout << this->data << " ";
        if (this->right != NULL)
        {
            this->right->inOrder();
        }
    }

    void preOrder()
    {
        cout << this->data << " ";
        if (this->left != NULL)
        {
            this->left->preOrder();
        }
        if (this->right != NULL)
        {
            this->right->preOrder();
        }
    }


    void postOrder()
    {
        if (this->left != NULL)
        {
            this->left->postOrder();
        }
        if (this->right != NULL)
        {
            this->right->postOrder();
        }
        cout << this->data << " ";
    }
};