
#include <memory>

class Tree
{
public:
  void insertKey(int iKeyValue);
  void deleteKey(int iKeyValue);
  void printTree();
  Tree(int iRootValue);
  class Node
  {
  private:
    int iKeyValue;
    std::shared_ptr<Node> leftNode;
    std::shared_ptr<Node> rigthNode;
  public:
    Node()
    {
      this->iKeyValue = 0;
      std::shared_ptr<Node> leftNode = nullptr;
      std::shared_ptr<Node> rigthNode = nullptr;
    }
    Node(int key)
    {
      this->iKeyValue = key;
      std::shared_ptr<Node> leftNode = nullptr;
      std::shared_ptr<Node> rigthNode = nullptr;
    }
    int setKeyValue(int inewValue){this->iKeyValue = inewValue;}
    int getKeyValue(){return this->iKeyValue;}
    std::shared_ptr<Node> getLeftNode(){return this->leftNode;}
    std::shared_ptr<Node> getRigthNode(){return this->rigthNode;}
    void setLeftNode(std::shared_ptr<Node> newLeft){this->leftNode = newLeft;}
    void setRigthNode(std::shared_ptr<Node> newRight){this->rigthNode = newRight;}
  };

private:
  std::shared_ptr<Node> root = nullptr;
  void insertKeyInternal(std::shared_ptr<Node> baseNode,int iKeyValue);
  void printTreeInternal(std::shared_ptr<Node> node);
};
