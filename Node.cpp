template <typename ItemType>
Node<ItemType>::Node(ItemType& input, nodePtr lsp, nodePtr rsp){
    data = input;
    rightSidePtr = rsp;
    leftSidePtr = lsp;
}

template <typename ItemType>
void Node<ItemType>::setData(ItemType& input){
    data = input;
}

template <typename ItemType>
ItemType Node<ItemType>::getData(){
    return data;
}

template <typename ItemType>
void Node<ItemType>::setLeft(nodePtr lsp){
    leftSidePtr = lsp;
}

template <typename ItemType>
void Node<ItemType>::setRight(nodePtr rsp){
    rightSidePtr = rsp;
}

template <typename ItemType>
ItemType Node<ItemType>::getRight(){
    return rightSidePtr;
}

template <typename ItemType>
ItemType Node<ItemType>::getLeft(){
    return leftSidePtr;
}