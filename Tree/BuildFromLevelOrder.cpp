#include <iostream>
#include <queue>

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
node *buildTrees(node *root)
{
    cout << "enter the data : " << endl;
    int data;
    cin >> data;
    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }
    cout << "enter the  data for inserting in the left of " << data << endl;
    root->left = buildTrees(root->left);

    cout << "enter the  data for inserting in the right of " << data << endl;
    root->right = buildTrees(root->right);
    return root;
}

void levelOrderTraversal(node *root)
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
void BuildFromLevelOrder(node *&root)
{
    queue<node *> q;
    cout << "enter the data for the root : ";
    int data;
    cin >> data;

    root = new node(data);
    q.push(root);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        cout << "enter the data for the left node : "<<temp->data<<endl;
        int leftdata;
        cin >> leftdata;

        if (leftdata != -1)
        {
            temp->left = new node(leftdata);
            q.push(temp->left);
        }
        cout << "enter the data for the right node :  "<<temp->data<<endl;
        int rightdata;
        cin >> rightdata;

        if (rightdata != -1)
        {
            temp->right = new node(rightdata);
            q.push(temp->right);
        }
    }
}
// 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
int main()
{

    node *root = NULL;
    // root = buildTrees(root);
    BuildFromLevelOrder(root);
// 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1 
    // cout<<"printing the level order traversal output : "<<endl;
    levelOrderTraversal(root);
}
