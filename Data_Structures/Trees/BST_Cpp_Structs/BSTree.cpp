#include "BSTree.h"

BSTree::BSTree(int key)
{
  this->root = std::make_shared<Node>();
  this->root->key = key;
}

void BSTree::insertKey(int key)
{
  this->insertKey(this->root, key);
}

void BSTree::deleteKey(int key)
{
  this->deleteKey(this->root, key);
}

void BSTree::searchKey(int key)
{
  this->searchKey(this->root, key);
}

void BSTree::insertKey(std::shared_ptr<Node>& node, int key)
{
  if(node != nullptr)
  {
    if(key < node->key)
    {
      this->insertKey(node->left, key);
    }
    else
    {
      this->insertKey(node->right, key);
    }
  }
  else
  {
    node = std::make_shared<Node>();
    node->key = key;
  }
}

void BSTree::deleteKey(std::shared_ptr<Node> node, int key)
{

}

void BSTree::searchKey(std::shared_ptr<Node> node, int key)
{

}

void BSTree::printTree()
{
  this->printTree(this->root);
}

void BSTree::printTree(std::shared_ptr<Node> node)
{
  if(node != nullptr)
  {
    std::cout << node->key << "\n";
    printTree(node->left);
    printTree(node->right);
  }
}
int main()
{
  BSTree tree(5);
  tree.insertKey(7);
  tree.printTree();
  return 0;
}
