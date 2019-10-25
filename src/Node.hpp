#ifndef __NODE__
#define __NODE__

template <class UserDefine>
/* Tree node class*/
class Node {
public:
    // Set the children links.
    void linkChildren(Node<UserDefine> *left, Node<UserDefine> *right);

    friend class BinaryTree;
private:

    UserDefine data;
    Node<UserDefine> *leftchild;
    Node<UserDefine> *rightchild;


};

#endif  // __NODE__
