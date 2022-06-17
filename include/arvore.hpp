#ifndef _ARVORE_HPP_
#define _ARVORE_HPP_

class No
{
public:
    No *esq;
    No *dir;
    int valor;
    No(int);
    ~No();
};

class Arvore
{
public:
    No *raiz;
    Arvore();
    ~Arvore();
};

void deletaArvore(No *no);
int somaFolhas(No *no);
void posOrdem(No *no);
void emOrdem(No *no);
void preOrdem(No *no);
int altura(No *no);
void percorreNiveis(No *no);
int computaProduto(No *no);

#include "arvore.cpp"

#endif