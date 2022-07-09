#ifndef NODE_
#define NODE_

template <typename ItemType>
class Node
{
private:
    ItemType data;
    using nodePtr = Node<ItemType>*;
    nodePtr leftSidePtr;
    nodePtr rightSidePtr; 

public:
    Node() = default;
    Node(ItemType& input, nodePtr lsp, nodePtr rsp);
    void setData(ItemType& input);
    ItemType getData();
    void setLeft(nodePtr lsp);
    void setRight(nodePtr rsp);
    ItemType getRight();
    ItemType getLeft();
    ~Node();
};

#include "Node.cpp"
#endif