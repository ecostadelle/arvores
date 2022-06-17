#include <iostream>
#include "arvore.hpp"

No::No(int valor)
{
    this->valor = valor;
    esq = NULL;
    dir = NULL;
}

No::~No()
{
    this->valor = 0;
    esq = NULL;
    dir = NULL;
}

Arvore::Arvore()
{
    raiz = NULL;
}

Arvore::~Arvore()
{
    deletaArvore(this->raiz);
}

void deletaArvore(No *no)
{
    if (no != NULL)
    {
        deletaArvore(no->esq);
        deletaArvore(no->dir);
        delete no;
    }
}

int somaFolhas(No *no)
{
    // variável para armazenar o valor da soma no escopo
    int soma = 0;
    // chamada recursiva para acessar os nós filhos localizados à esquerda
    if (no->esq) soma += somaFolhas(no->esq);
    // chamada recursiva para acessar os nós filhos localizados à direita
    if (no->dir) soma += somaFolhas(no->dir);
    // se o nó atual não possuir filhos, soma o valor do nó atual
    if (!no->esq and !no->dir) soma += no->valor;
    // retorna a soma
    return soma;
}

void posOrdem(No *no)
{
    if (no != NULL)
    {
        posOrdem(no->esq);
        posOrdem(no->dir);
        std::cout << no->valor << " ";
    }
}

void emOrdem(No *no)
{
    if (no != NULL)
    {
        emOrdem(no->esq);
        std::cout << no->valor << " ";
        emOrdem(no->dir);
    }
}

void preOrdem(No *no)
{
    if (no != NULL)
    {
        std::cout << no->valor << " ";
        preOrdem(no->esq);
        preOrdem(no->dir);
    }
}

