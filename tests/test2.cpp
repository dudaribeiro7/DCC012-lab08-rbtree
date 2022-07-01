#include <iostream>

#include "redblack.h"

/*
 *     Testa a criação de uma árvore RB e a inserção de valores
 */
int main(int argc, char* argv[]) {
    // Cria uma arvore RB
    RBTree tree;
    // Insere valores na arvore
    tree.insert(10);
    tree.insert(5);
    tree.insert(15);
    tree.insert(3);
    tree.insert(7);
    tree.insert(13);
    tree.insert(8);
    tree.remove(10);
    tree.print();
    if(argc == 1)
      tree.print();
    else
      tree.print(argv[1]);
    return 0;
}
