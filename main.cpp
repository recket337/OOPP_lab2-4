#include <iostream>
#include "Node.h"

using namespace std;

int main()
{
    Node *node = new Node("sdxcvghkg");
    Node a = Node();
    node->addNode();
    node->addNode();
    node->addNode();
    node->addNode();
    node->addNode();

    node->printTree(0);

    return 0;
}
