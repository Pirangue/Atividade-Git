#ifndef ALV_H
#define ALV_H

typedef struct Node {
    int data;
    struct Node *left;
    struct Node *right;
    int height;
} Node;

/**
 * Função para achar o maior entre dois inteiros
 * @param a Primeiro inteiro
 * @param b Segundo inteiro
 * @return O maior entre os dois
 */
int max(int a, int b);

/**
 * Função para retornar a altura de um nó
 * @param node O nó
 * @return A altura do nó
 */
int height(Node *node);

/**
 * Função para criar um novo nó
 * @param data O valor do nó
 * @return O novo nó
 */
Node* newNode(int data);

/**
 * Função para realizar uma rotação à direita
 * @param y O nó a ser rotacionado
 * @return O novo nó raiz após a rotação
 */
Node* rightRotate(Node *y);

/**
 * Função para realizar uma rotação à esquerda
 * @param x O nó a ser rotacionado
 * @return O novo nó raiz após a rotação
 */
Node* leftRotate(Node *x);

/**
 * Função para obter o fator de balanceamento de um nó
 * @param node O nó
 * @return O fator de balanceamento
 */
int getBalance(Node *node);

/**
 * Função para inserir um valor em uma árvore AVL
 * @param node O nó raiz da árvore
 * @param data O valor a ser inserido
 * @return O novo nó raiz após a inserção
 */
Node* insertAVL(Node* node, int data);

/**
 * Função para construir uma árvore binária de busca balanceada a partir de um array ordenado
 * @param arr O array ordenado
 * @param start O índice inicial
 * @param end O índice final
 * @return A raiz da árvore binária de busca balanceada
 */
Node* buildMedianBST(int arr[], int start, int end);

/**
 * Função para igualizar duas árvores AVL
 * @param root1 A raiz da primeira árvore
 * @param root2 A raiz da segunda árvore
 * @return true se as árvores são iguais, false caso contrário
 */
int areTreesEqual(Node* root1, Node* root2);

/**
 * Função para comparar duas constantes
 * @param a A primeira constante
 * @param b A segunda constante
 * @return 1 se a > b, -1 se a < b, 0 se a == b
 */
int compare(const void *a, const void *b);

#endif