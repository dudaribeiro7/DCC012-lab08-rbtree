![Open in Codespaces](https://classroom.github.com/assets/open-in-codespaces-abfff4d4e15f9e1bd8274d9a39a0befe03a0632bb0f153d0ec72ff541cedbe34.svg)
# Árvore Vermelho-Preto :evergreen_tree: :red_circle: :black_circle:

## Definição
Uma árvore vermelho-preto é uma árvore de busca binária com um bit extra de armazenamento por nó: sua cor
— ela pode ser VERMELHA ou PRETA. Restringindo as cores dos nós em qualquer caminho simples da raiz até uma folha, as
árvores vermelho-preto asseguram que o comprimento de nenhum desses caminhos seja maior que duas vezes o de
qualquer outro, de modo que a árvore é aproximadamente balanceada.
Cada nó da árvore contém agora os atributos *cor*, *chave*, *esquerda*, *direita* e *pai*. Se um filho ou o pai de um nó
não existir, o atributo do ponteiro correspondente do nó contém o valor NIL. Trataremos esses valores NIL como se
fossem ponteiros para folhas (nós externos) da árvore de busca binária e os nós normais que portam chaves como nós
internos da árvore.

Uma árvore vermelho-preto é uma árvore de busca binária que satisfaz as seguintes propriedades vermelho-preto:
1. Todo nó é vermelho ou preto.
2. A raiz é preta.
3. Toda folha (NIL) é preta.
4. Se um nó é vermelho, então os seus filhos são pretos.
5. Para cada nó, todos os caminhos simples do nó até folhas descendentes contêm o mesmo número de nós pretos.

# Atividade

## Objetivos

Compreender e praticar a implementação em C++ de árvores balanceadas e outras funções relacionadas e específicas das árvores vermelho-preto.

## :notebook: Código 

Um código base já é fornecido como ponto de partida. Ela tem a seguinte estrutura:
```
/
└── librc
    └── [redblack.h]
    └── [redblack.cpp]
    └── [CMakeLists.txt]
└── tests
     └── test1.cpp
     └── test2.cpp
     └── test3.cpp
     └── CMakeLists.txt
└── README.md
└── CMakeLists.txt
```

Nos arquivos [redblack.h](librc/redblacl.h) e [redblack.cpp](librc/redblack.h) estão presentes as implementações das principais rotinas relacionadas a árvores de pesquisa binária: inserção, remoção, maximo, mínimo e sucessor. Além disso, estão presentes rotinas auxiliares, como as rotações simples a esquerda e direita, entre outras. Na pasta tests, três programas simples testam a implementação desenvolvida.

O [capitulo 13 do livro Algoritmo: Teoria e Prática](docs/Cap13RB.pdf) descreve de forma detalhada a estrutura e as operações da árvore vermelho-preta. Usem como referência para a implementação nessa atividade.

##  O que deve ser feito :question:

Nesta atividade, deve-se implementar as rotinas que garantem as propriedades das árvores vermelho-preta. As rotinas são:
 - *insertFixUp*: chamada apos a insersão de uma nova chave
 - *deleteFixUp*: chamada durante a remoção de uma chave da arvore.

Veja os comentários TODO para ver onde deve ser implementado. 

## :computer: Compilação e Testes
```
cmake -B build
cd build
make
ctest
```
**Atenção**:
Para visualiza uma saída mais amigável da estrutura da árvore, dasabilite a flag ENABLE_CLASSROOM_TESTING no cmake. Neste caso, vc deve fazer:

```
cmake -B build -DENABLE_CLASSROOM_TESTING=OFF
cd build
make
```

Agora você poderá rodar os testes individualmente na pasta build/tests.

## :date: Data de Entrega: 07/07/2022



