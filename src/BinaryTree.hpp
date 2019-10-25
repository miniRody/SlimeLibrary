#ifndef __BINARY_TREE__
#define __BINARY_TREE__

#include<vector>
#include<iostream>
#include "Node.hpp"


using namespace std;

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
