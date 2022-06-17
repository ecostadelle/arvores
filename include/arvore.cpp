#include <iostream>
#include "arvore.hpp"

No::No(int v)
{
    this->valor = v;
    this->esq = NULL;
    this->dir = NULL;
}

No::~No()
{
    this->valor = 0;
    this->esq = NULL;
    this->dir = NULL;
}

Arvore::Arvore()
{
    this->raiz = NULL;
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

// algoritmo para computar a soma das folhas
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

// algoritmo para efetuar um percurso de pós-ordem
void posOrdem(No *no)
{
    // caso o nó atual não seja nulo, isto é útil porque nós folhas armazenam 
    // nullptr no lugar de filhos
    if (no != NULL)
    {
        // chamada recursiva para acessar os nós filhos localizados à esquerda
        posOrdem(no->esq);
        // chamada recursiva para acessar os nós filhos localizados à direita
        posOrdem(no->dir);
        // imprime o valor do nó atual
        std::cout << no->valor << " ";
    }
}

// algoritmo para efetuar um percurso de em-ordem
void emOrdem(No *no)
{
    // caso o nó atual não seja nulo, isto é útil porque nós folhas armazenam 
    // nullptr no lugar de filhos
    if (no != NULL)
    {
        // chamada recursiva para acessar os nós filhos localizados à esquerda
        emOrdem(no->esq);
        // imprime o valor do nó atual
        std::cout << no->valor << " ";
        // chamada recursiva para acessar os nós filhos localizados à direita
        emOrdem(no->dir);
    }
}

// algoritmo para efetuar um percurso de pré-ordem
void preOrdem(No *no)
{
    // caso o nó atual não seja nulo, isto é útil porque nós folhas armazenam 
    // nullptr no lugar de filhos
    if (no != NULL)
    {
        // imprime o valor do nó atual
        std::cout << no->valor << " ";
        // chamada recursiva para acessar os nós filhos localizados à esquerda
        preOrdem(no->esq);
        // chamada recursiva para acessar os nós filhos localizados à direita
        preOrdem(no->dir);
    }
}

// algoritmo para computar a altura de um dado nó
int computaAltura(No *no)
{
    // variável para armazenar a altura no escopo
    int altura = 0;

    // caso o nó atual não seja nulo, isto é útil porque nós folhas armazenam 
    // nullptr no lugar de filhos
    if (no)
    {
        // chamada recursiva para acessar os nós filhos localizados à esquerda
        int esq = computaAltura(no->esq);
        // chamada recursiva para acessar os nós filhos localizados à direita
        int dir = computaAltura(no->dir);
        // se a altura da subárvore à esquerda for maior que à direita, 
        // a altura da subárvore atual é a altura à esquerda + 1
        if (esq > dir) altura = esq + 1;
        // se a altura da subárvore à direita for maior que à esquerda, 
        // a altura da subárvore atual é a altura à direita + 1
        else if (dir > esq) altura = dir + 1;
        // se as alturas da subárvore forem iguais, a altura da subárvore 
        // atual é a altura de uma delas + 1
        else altura = esq + 1;
    }
    // retorna a altura
    return altura;
}