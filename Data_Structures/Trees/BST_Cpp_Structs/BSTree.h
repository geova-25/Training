#include "Tree.h"
#include <iostream>

class BSTree :public Tree
{
public:
  BSTree(int key);
  void insertKey(int key);
  void deleteKey(int key);
  void searchKey(int key);
  void printTree();
private:
  std::shared_ptr<Node> root = nullptr;
  void insertKey(std::shared_ptr<Node>& node, int key);
  void deleteKey(std::shared_ptr<Node> node, int key);
  void searchKey(std::shared_ptr<Node> node, int key);
  void printTree(std::shared_ptr<Node>);
};
