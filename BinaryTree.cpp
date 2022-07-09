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
            if (input < tempPtr->getData())
            {
                nodePtr currPtr = new Node<ItemType>;
                tempPtr->setLeft(currPtr);
                currPtr->setData(input);
                currPtr->setLeft(tempPtr->getLeft());
                currPtr->setRight(tempPtr->getRight());
                ++itemCount;
            }
            else
            {
                std::cout << "Value already exists!";
            }
        }
        else if (input > tempPtr->getData())
        {
            while (input > tempPtr->getRight()->getData())
            {
                tempPtr = tempPtr->getRight();
            }
            if (input > tempPtr->getData())
            {
                nodePtr currPtr = new Node<ItemType>;
                tempPtr->setRight(currPtr);
                currPtr->setData(input);
                currPtr->setLeft(tempPtr->getLeft());
                currPtr->setRight(tempPtr->getRight());
                ++itemCount;
            }
            else
            {
                std::cout << "Value already exists!";
            }
        }
        else{
            std::cout << "Value already exists!";
        }
    }
}