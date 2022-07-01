#ifndef REDBLACK_H
#define REDBLACK_H

class RBTree;

#define RED 1
#define BLACK 0

// Implementa um nó de uma arvore vermelho e preta
class RBNode
{
    friend class RBTree;
    public:
        RBNode(int key);
        RBNode(int key, RBNode* parent, RBNode* left, RBNode* right, bool color);
        RBNode(const RBNode& other);
        ~RBNode();
        int     getKey();
        RBNode* getParent();
        RBNode* getLeft();
        RBNode* getRight();
    private:
        int key;
        RBNode *left;
        RBNode *right;
        RBNode *parent;
        bool color;  // 1=Red, 0=Black
};

// Implementa uma arvore vermelho e preta
class RBTree
{
    public:
        RBTree();
        ~RBTree();
        void insert(int key);
        void remove(int key);
        RBNode* search(int key);
        RBNode* minimum();
        RBNode* maximum();
        RBNode* successor(RBNode* node);
        void print();
        void print(const char* filename);
    private:
        RBNode *root;
        RBNode *nil;
        RBNode* minimum(RBNode* node);
        RBNode* maximum(RBNode* node);
        void rotateLeft(RBNode *node);
        void rotateRight(RBNode *node);
        void insertFixUp(RBNode *node);
        void deleteFixUp(RBNode *node);
        void transplant(RBNode *u, RBNode *v);
        void print_tree(RBNode* node, const std::string& prefix, bool isLeft, std::ostream& out);
        void print_transversal(RBNode* node, std::ostream& out);
        void deallocate(RBNode* node);
};

#endif /* REDBLACK_H */
