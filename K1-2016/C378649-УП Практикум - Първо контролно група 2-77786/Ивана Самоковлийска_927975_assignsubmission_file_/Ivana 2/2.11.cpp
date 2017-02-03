#include <iostream>
#include <vector>
using namespace std;

// Binary Search Tree
template <typename T>
struct Node
{
    T data;
    Node<T>* left;
    Node<T>* right;
    Node(T data,Node<T>* left = nullptr, Node<T>* right = nullptr): data(data) {}
};

template <typename T>
class BSTree
{
public:
    BSTree();
    ~BSTree();
    BSTree(const BSTree&);
    BSTree<T>& operator= (const BSTree&);
    void add(const T&);
    void remove(const T&);
    bool contains(const T&) const;
    vector<T> inorderTraversal() const;

private:
    Node<T>* root;
    bool containsRec(const T&, Node<T>*) const;
    Node<T>*& find(const T& , Node<T>*& );
    void inorder(Node<T>*, vector<T>&);
};

template <typename T>
BSTree<T>::BSTree(): root(nullptr) {}

template <typename T>
bool BSTree<T>::contains(const T& el) const
{
    return containsRec(el,root);
}

template <typename T>
bool BSTree<T>::containsRec(const T& el, Node<T>* node) const
{
    if(node == nullptr)
    {
        return false;
    }
    if(node->data == el)
    {
        return true;
    }

    if(el < node->data)
    {
        return containsRec(el,root->left);
    }
    else return containsRec(el,root->right);

}

template <typename T>
Node<T>*& BSTree<T>::find(const T& el, Node<T>*& node)
{
     if(node == nullptr || node->data == el)
    {
        return node;
    }
    if(el < node-> data)
    {
        return find(el, node->left);
    }
    else return find(el,node->right);
}

template <typename T>
void BSTree<T>::add(const T& el)
{
    Node<T>& found =find(el,root);
    if(found == nullptr)
    {
        found = new Node<T>(el);
    }
}




template <typename T>
void BSTree<T>::remove(const T& el)
{
    Node<T>*& toRemove = find(el,root);
    if(toRemove == nullptr){return;}
    if(toRemove->left == nullptr)
    {
        Node<T>* temp = toRemove;
        toRemove = toRemove->right;
        delete temp;
    }
    else
    {
        Node<T>* rightmost = toRemove->left;
        while(rightmost->right != nullptr)
        {
            rightmost = rightmost->right;
        }
        rightmost->right = toRemove->right;

        Node<T>* temp = toRemove;
        toRemove = toRemove->left;
        delete temp;
    }
}

template <typename T>
vector<T> BSTree<T>::inorderTraversal() const
{
    vector<T> result;
    inorder(root,result);
    return result;
}

template <typename T>
void BSTree<T>::inorder(Node<T>* node, vector<T>& result)
{
    if(node == nullptr){return;}
    inorder(node->left,result);
    result.push_back(node->data);
    inorder(node->right,result);

    /*
    PREORDER: push_back -- > preorder (left), preorder (righ)
    POSTORDER: left-> right->push_back()
    */

}


int main()
{
    return 0;
}
