#ifndef BINARYTREE_
#define BINARYTREE_
#include "Node.h"

template <typename ItemType>
class BinaryTree{

    private:
    using nodePtr = Node<ItemType>*;
    nodePtr rootPtr;
    int itemCount = 0;

    public:
    void insertNode(ItemType& input);

};

#include "BinaryTree.cpp"
#endif