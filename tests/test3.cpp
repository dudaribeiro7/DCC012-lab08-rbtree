#include <iostream>

#include "redblack.h"


int main(int argc, char* argv[]) 
{
    // se argc == 2, a saida será direcionada para o arquivo 
    // indicado em argv[1];
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
    tree.insert(16);
    tree.insert(-1);
    tree.insert(40);
    if(argc == 1)
      tree.print();
    else
      tree.print(argv[1]);
    return 0;
}