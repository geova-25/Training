#include<memory>

struct Node
{
  int key = 0;
  std::shared_ptr<Node> left = nullptr;
  std::shared_ptr<Node> right = nullptr;
};

class Tree
{
public:
  virtual void insertKey(int key) = 0;
  virtual void deleteKey(int key) = 0;
  virtual void searchKey(int key) = 0;
protected:
  std::shared_ptr<Node> root = nullptr;
};
