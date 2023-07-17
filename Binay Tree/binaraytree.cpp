#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node *builttree(node *root)
{
    cout << "Enter the data : " << endl;
    int data;
    cin >> data;
    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter data for left insert :" << endl;
    root->left = builttree(root->left);

    cout << "Enter data for right insert : " << endl;
    root->right = builttree(root->right);
    return root;
}

void levelordertraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();

        q.pop();
        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

void inoder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    inoder(root->left);
    cout << root->data << " ";
    inoder(root->right);
}

void postorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}
void preorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void buildFromLevelOrder(node *&root)
{
    queue<node *> q;

    cout << "Enter data for root" << endl;
    int data;
    cin >> data;
    root = new node(data);

    q.push(root);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        cout << "Enter left node for: " << temp->data << endl;
        int leftData;
        cin >> leftData;

        if (leftData != -1)
        {
            temp->left = new node(leftData);
            q.push(temp->left);
        }

        cout << "Enter right node for: " << temp->data << endl;
        int rightData;
        cin >> rightData;

        if (rightData != -1)
        {
            temp->right = new node(rightData);
            q.push(temp->right);
        }
    }
}
int main()
{
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    node *root = NULL;
    root = builttree(root);
    cout << "Level order  traversal : " << endl;
    levelordertraversal(root);

    cout << "Inorder traversal : " << endl;
    inoder(root);
    cout << endl;
    cout << "PostOrder Traversal : " << endl;
    postorder(root);
    cout << endl;
    cout << "Pre order Traversal : " << endl;
    preorder(root);
    return 0;
}