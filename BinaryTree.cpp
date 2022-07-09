template <typename ItemType>
void BinaryTree<ItemType>::insertNode(ItemType& input){
    if (itemCount == 0)
    {
        rootPtr = new Node<ItemType>;
        rootPtr->setData(input);
        rootPtr->setLeft(nullptr);
        rootPtr->setRight(nullptr);
        ++itemCount;
    }
    else{
        nodePtr tempPtr = rootPtr;
        if (input < tempPtr->getData())
        {
            while (input < tempPtr->getLeft()->getData())
            {
                tempPtr = tempPtr->getLeft;
            }
            nodePtr currPtr = new Node<ItemType>;
            tempPtr->setLeft(currPtr);
            currPtr->setData(input);
            currPtr->setLeft(tempPtr->getLeft());
            currPtr->setRight(tempPtr->getRight());
        }
        else if (input > tempPtr->getData())
        {
            while (input > tempPtr->getRight()->getData())
            {
                tempPtr = tempPtr->getRight();
            }
            nodePtr currPtr = new Node<ItemType>;
            tempPtr->setRight(currPtr);
            currPtr->setData(input);
            currPtr->setLeft(tempPtr->getLeft());
            currPtr->setRight(tempPtr->getRight());
        }
        else{
            std::cout << "Value already exists!";
        }
    }
}