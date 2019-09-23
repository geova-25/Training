#include "Tree.h"

Tree::Tree(int iRootValue)
{
  this->root = std::make_unique<Node>();
  this->root->setKeyValue(iRootValue);
}

void Tree::insertKey(int newKey)
{
  this->insertKeyInternal(this->root,newKey);
}

void Tree::insertKeyInternal(std::shared_ptr<Node> baseNode,int newKey)
{

  if(newKey <= baseNode->getKeyValue())
  {
    if(baseNode->getLeftNode() == nullptr)
    {
      baseNode->setLeftNode(std::make_shared<Node>(newKey));
    }
    else
    {
      this->insertKeyInternal(baseNode->getLeftNode(),newKey);
    }
  }
  else
  {
    if(baseNode->getRigthNode() == nullptr)
    {
      baseNode->setRigthNode(std::make_shared<Node>(newKey));
    }
    else
    {
      this->insertKeyInternal(baseNode->getRigthNode(),newKey);
    }
  }
}

void Tree::printTree()
{
  this->printTreeInternal(this->root);
}

void Tree::printTreeInternal(std::shared_ptr<Node> node)
{
  if(node != nullptr)
  {
      printf("%d\n", node->getKeyValue());
      this->printTreeInternal(node->getLeftNode());
      this->printTreeInternal(node->getRigthNode());
  }
}

int main()
{
  Tree tree(5);
  tree.insertKey(54);
  tree.insertKey(1);
  tree.insertKey(0);
  tree.insertKey(100);
  tree.insertKey(65);
  tree.insertKey(33);
  tree.insertKey(3);
  tree.printTree();
  return 0;
}
