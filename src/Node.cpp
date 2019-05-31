#include "Node.h"
#include <cstring>

using namespace std;

Node::Node() //default
{
    strcpy(name, "noname");
    right = NULL;
    left = NULL;
}

Node::Node(const char name[10]) // with values
{
    for (int i = 0; i < 10; i++) {
        this->name[i] = name[i];
    }
    this->right = NULL;
    this->left = NULL;
}

Node::Node(const Node &node) //copier
{
    strcpy(this->name, node.name);
    this->right = node.right;
    this->left = node.left;
}

void Node::addNode() {
    int key;
    cout << "1 - left" << endl << "2 - right : ";
    cin >> key;
    switch (key) {
    case 1: {
        if (this->left == NULL)
        {
            char new_name[10];
            for (int i = 0; i < 10; i++) {
                new_name[i] = rand() % 25 + 97;
            }
            this->left = new Node(new_name);
        }
        else
            this->left->addNode();
        break;
    }
    case 2: {
        if  (this->right == NULL) {
            char new_name[10];
            for (int i = 0; i < 10; i++) {
                new_name[i] = rand() % 25 + 97;
            }
            this->right = new Node(new_name);
        }
        else
            this->right->addNode();
        break;
    }
    }
}

void Node::printTree(int index) {
    if (this->left != NULL) this->left->printTree(index+1);
    for (int i = 0; i < index; ++i) cout << "|";
    cout << this->name << endl;
    if (this->right != NULL) this->right->printTree(index+1);
}

Node* Node::getLeft() {
    return left;
}

Node* Node::getRight() {
    return right;
}
