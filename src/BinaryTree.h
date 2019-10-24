#ifndef __BINARY_TREE__
#define __BINARY_TREE__

#include<vector>


using namespace std;

template <class UserDefine>
/* Tree node class*/
class Node {
public:
    // Set the children links.
    void linkChildren(Node *left, Node *right);

    friend class BinaryTree;
private:

    UserDefine data;
    Node<UserDefine> *leftchild;
    Node<UserDefine> *rightchild;


};

template <class UserDefine>
class BinaryTree{

public:
    void add(UserDefine data, int pos);
    void del(UserDefine data);
    void rotate(bool direction);
    vector<UserDefine> inorderTraversal();
    vector<UserDefine> preorderTraversal();
    vector<UserDefine> postorderTraversal();

private: 
    Node<UserDefine> *root;
};



#endif  // __BINARY_TREE__