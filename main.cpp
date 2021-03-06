#include <iostream>
#include "include/arvore.hpp"


int main(int argc, char *argv[])
{
    // cria a árvore
    Arvore arvore;

    // insere os nós na árvore
    arvore.raiz = new No(8);
    arvore.raiz->esq = new No(3);
    arvore.raiz->dir = new No(10);
    arvore.raiz->esq->esq = new No(1);
    arvore.raiz->esq->dir = new No(6);
    arvore.raiz->dir->dir = new No(14);
    arvore.raiz->esq->dir->esq = new No(4);
    arvore.raiz->esq->dir->dir = new No(7);
    arvore.raiz->dir->dir->esq = new No(13);

    // calcula a soma das folhas da árvore
    std::cout << "Soma dos nos folha: " << somaFolhas(arvore.raiz) << std::endl;

    // percorre a árvore pós-ordem, inciando da raiz e imprime os valores
    std::cout << "Percorrendo pos ordem: ";
    posOrdem(arvore.raiz);
    std::cout << std::endl;

    // percorre a árvore em ordem, inciando da raiz e imprime os valores
    std::cout << "Percorrendo em ordem: ";
    emOrdem(arvore.raiz);
    std::cout << std::endl;

    // percorre a árvore pré-ordem, inciando da raiz e imprime os valores
    std::cout << "Percorrendo pre ordem: ";
    preOrdem(arvore.raiz);
    std::cout << std::endl;

    // computa a altura da árvore
    std::cout << "Altura da arvore: " << computaAltura(arvore.raiz) << std::endl;

    // computa o fator de balanceamento da árvore
    std::cout << "Fator de balanceamento da arvore: " << computaFatorBalanceamento(arvore.raiz) << std::endl;

    // percorre a árvore por níveis, imprimindo os valores
    std::cout << "Percorrendo por niveis: ";
    percorreNiveis(arvore.raiz);
    std::cout << std::endl;

    // computa o produto dos nós da árvore
    std::cout << "Produto dos nos da arvore: " << computaProduto(arvore.raiz) << std::endl;

    return 0;
}