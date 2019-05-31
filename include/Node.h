#ifndef NODE_H
#define NODE_H
#include <iostream>
#include <conio.h>
#include <cstring>
#include <cstdlib>

class Node
{
public:
    Node();
    Node(const char name[10]);
    Node(const Node &node);

    void printTree(int index);
    void addNode();


    Node* getLeft();
    Node* getRight();


protected:

private:
    char name[10];
    Node *right;
    Node *left;
};

#endif // NODE_H

