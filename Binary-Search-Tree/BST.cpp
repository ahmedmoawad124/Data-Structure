#include<iostream>

using namespace std;

template<class T>
class BST
{
private:
    struct Node
    {
        T data;
        Node* left;
        Node* right;

        explicit Node(T value){
            data = value;
            left = NULL;
            right = NULL;
        }
    };

    Node* root;

    Node* MinValueNode(Node* current_root)
    {
        Node* temp = current_root;
        while(temp->left != NULL)
        {
            temp = temp->left;
        }

        return temp;
    }

    void insertHelper(Node* current_node, T value)
    {
        if(value <= current_node->data)
        {
            if(current_node->left == NULL)
            {
                // Create new node
                Node* new_node = new Node(value);
                //=========================
                current_node->left = new_node;
            }
            else
            {
                insertHelper(current_node->left, value);  
            }
        }
        else
        {
            if(current_node->right == NULL)
            {
                // Create new node
                Node* new_node = new Node(value);
                //=========================
                current_node->right = new_node;
            }
            else
            {
                insertHelper(current_node->right, value);  
            } 
        }
    }

    Node* removeHelper(Node* current_node, T value)
    {
        // If the value to be deleted is smaller than the current_node's data, 
        // then it lies in left subtree 
        if (value < current_node->data) 
            current_node->left = removeHelper(current_node->left, value);

        // If the vlaue to be deleted is greater than the current_node's key, 
        // then it lies in right subtree 
        else if (value > current_node->data) 
            current_node->right = removeHelper(current_node->right, value);

        // if value is same as current_node's key, then This is the node 
        // to be deleted 
        else
        { 
            // node with only one child or no child 
            if (current_node->left == NULL) 
            { 
                Node* temp = current_node->right; 
                delete current_node; 
                return temp;
            } 
            else if (current_node->right == NULL) 
            { 
                Node *temp = current_node->left; 
                delete current_node;
                return temp; 
            } 
    
            // node with two children: Get the smallest node
            // in the right subtree
            Node* temp = MinValueNode(root->right); 
    
            // Copy the smallest node's content to this node 
            current_node->data = temp->data; 
    
            // Delete the smallest node
            current_node->right = removeHelper(current_node->right, temp->data); 
        }
        return current_node; 
    }

    
public:
    BST();
    ~BST();
    void insert(T value);
    T getMax();
    T getMin();
    void remove(T value);
};

template<class T>
BST<T>::BST():root(NULL){}

template<class T>
BST<T>::~BST(){}

template<class T>
void BST<T>::insert(T value)
{
    if(root == NULL)
    {
        // Create new node
        Node* new_node = new Node(value);
        //=========================
        root = new_node;
    }
    else
    {
        insertHelper(root, value);
    }   
}

template<class T>
T BST<T>::getMax()
{
    Node* temp = root;
    while(temp->right != NULL)
    {
        temp = temp->right;
    }

    return temp->data;
}

template<class T>
T BST<T>::getMin()
{
    Node* temp = root;
    while(temp->left != NULL)
    {
        temp = temp->left;
    }

    return temp->data;
}

template<class T>
void BST<T>::remove(T value)
{
    // base case 
    if (root == NULL) return;

    else
    {
        removeHelper(root, value);
    }
}

int main(void)
{
    BST<int> b;
    b.insert(8);
    b.insert(5);
    b.insert(13);
    b.insert(3);
    b.insert(7);
    b.insert(10);
    b.insert(15);

    b.remove(3);

    cout<<"Max value in our BST = "<<b.getMax()<<endl;
    cout<<"Min value in our BST = "<<b.getMin()<<endl;


    return 0;
}
