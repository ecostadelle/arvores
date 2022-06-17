# LISTA 2 – Árvores 
## Prof. Igor Machado Coelho 

Obs.: Os algoritmos de resposta desta lista encontram-se no repositório [GitHub](https://github.com/ecostadelle/arvores). A visualização das árvores, produzidas em [GraphViz](https://www.graphviz.org/), não são renderizadas pelo interpretador de MarkDown do GitHub. Por essa razão, esta lista será entregue em PDF.

---

### Exercício 1:

Considere uma árvore binária completa composta pelos seguintes elementos (representação sequencial): 10,20,15,12,8,5,7, 1 e 2. 

```graphviz
digraph arvore {
    node [shape=circle]
    10 -> {20,15} 
    20 -> {12,8}
    15 -> {5,7}
    12 -> {1,2}
}
```

a. Apresente o percurso de pré-ordem na árvore

> 10, 20, 12, 1, 2, 8, 15, 5, 7

b. Apresente o percurso em-ordem na árvore

> 1, 12, 2, 20, 8, 10, 5, 15, 7

c. Apresente o percurso de pós-ordem na árvore 
    
> 1, 2, 12, 8, 20, 5, 7, 15, 10

---

### Exercício 2:

Considere uma estrutura MAX-heap representada pelo seguinte vetor de níveis: 20, 10, 15, 4, 7, 8, 3, 1, 2 

a. efetue a remoção do elemento de maior prioridade: desenhe a árvore e vetor passo-a-passo 


```graphviz
digraph arvore {
    node [shape=circle]
    20 -> {10,15} 
    10 -> {4,7}
    15 -> {8,3}
    4 -> {1,2}
}
```

> Condição inicial: 20, 10, 15, 4, 7, 8, 3, 1, 2

```graphviz
digraph arvore {
    node [shape=circle]
    2 -> {10,15} 
    10 -> {4,7}
    15 -> {8,3}
    4 -> {1,20}
}
```

> Primeiro passo, comuta os valores do elemento de maior prioridade(20) com o último elemento do vetor(2): 2, 10, 15, 4, 7, 8, 3, 1, 20

```graphviz
digraph arvore {
    node [shape=circle]
    2 -> {10,15} 
    10 -> {4,7}
    15 -> {8,3}
    4 -> 1
}
```

> Segundo passo, remove o elemento de maior prioridade (20): 2, 10, 15, 4, 7, 8, 3, 1

```graphviz
digraph arvore {
    node [shape=circle]
    15 -> {10,2} 
    10 -> {4,7}
    2 -> {8,3}
    4 -> 1
}
```

> Terceiro passo, comuta o elemento que está fora de ordem (2) com o filho de maior prioridade (15): 15, 10, 2, 4, 7, 8, 3, 1

```graphviz
digraph arvore {
    node [shape=circle]
    15 -> {10,8} 
    10 -> {4,7}
    8 -> {2,3}
    4 -> 1
}
```

> Quarto passo, comuta novamente o elemento que está fora de ordem (2) com o filho de maior prioridade (8): 15, 10, 8, 4, 7, 2, 3, 1
---

   b. efetue a inserção do elemento 16 (sem considerar a remoção anterior): desenhe a árvore e vetor passo-a-passo 

```graphviz
digraph arvore {
    node [shape=circle]
    20 -> {10,15} 
    10 -> {4,7}
    15 -> {8,3}
    4 -> {1,2}
    7 -> 16
}
```

> 20, 10, 15, 4, 7, 8, 3, 1, 2, 16

```graphviz
digraph arvore {
    node [shape=circle]
    20 -> {10,15} 
    10 -> {4,16}
    15 -> {8,3}
    4 -> {1,2}
    16 -> 7
}
```

> 20, 10, 15, 4, 16, 8, 3, 1, 2, 7

```graphviz
digraph arvore {
    node [shape=circle]
    20 -> {16,15} 
    16 -> {4,10}
    15 -> {8,3}
    4 -> {1,2}
    10 -> 7
}
```

> 20, 16, 15, 4, 10, 8, 3, 1, 2, 7

---

### Exercício 3:

Considere a seguinte estrutura para uma árvore binária: 

    ```cpp
    class Arvore
    {
    public:
        No *raiz;
    };

    class No
    {
    public:
        No *esq;
        No *dir;
    };
    ```

---

Para resolver essa questão, acrescentei às classes ``No`` e ``Arvore`` métodos construtores e destrutores. Ainda na classe ``No`` acrescentei uma variável para armazenar um dado do tipo inteiro (``int valor``). De modo que as classe no arquivo de cabeçalho ``arvore.hpp`` ficaram como demonstrado no bloco de código  abaixo:

```cpp
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
```





Em seguida populei os dados com uma árvore de busca. Como as variáveis ``*esq`` e ``*dir`` estavam públicas, as operei diretamente. Os valores inseridos na árvore teste são os mostrados a seguir:


```graphviz
digraph arvore {
    node [shape=record];
    "N0" [label="<f0>|<f1>8|<f2>"];
    "N1E" [label="<f0>|<f1>3|<f2>"];
    "N1D" [label="<f0>|<f1>10|<f2>"];
    "N2EE" [label="<f0>|<f1>1|<f2>"];
    "N2ED" [label="<f0>|<f1>6|<f2>"];	
    "N2DE" [label="<f0>|<f1>|<f2>" style=invis];
    "N2DD" [label="<f0>|<f1>14|<f2>"];
    "N3EEE" [label="<f0>|<f1>|<f2>" style=invis];	
    "N3EED" [label="<f0>|<f1>|<f2>" style=invis];
    "N3EDE" [label="<f0>|<f1>4|<f2>"];
    "N3EDD" [label="<f0>|<f1>7|<f2>"];
    "N3DEE" [label="<f0>|<f1>|<f2>" style=invis];
    "N3DED" [label="<f0>|<f1>|<f2>" style=invis];
    "N3DDE" [label="<f0>|<f1>13|<f2>"];
    "N3DDD" [label="<f0>|<f1>|<f2>" style=invis];
    N0:f0 -> N1E:f1;
    N0:f2 -> N1D:f1;
    N1E:f0 -> N2EE:f1;
    N1E:f2 -> N2ED:f1;
    N1D:f0 -> N2DE:f1 [style=invis];
    N1D:f2 -> N2DD:f1;
    N2EE:f0 -> N3EEE:f1 [style=invis];
    N2EE:f2 -> N3EED:f1 [style=invis];
    N2ED:f0 -> N3EDE:f1;
    N2ED:f2 -> N3EDD:f1;
    N2DE:f0 -> N3DEE:f1 [style=invis];
    N2DE:f2 -> N3DED:f1 [style=invis];
    N2DD:f0 -> N3DDE:f1;
    N2DD:f2 -> N3DDD:f1 [style=invis];
}
```

A inserção foi feita como mostrado no bloco de código, abaixo:

```cpp
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
```

---

a. Escreva um algoritmo para computar a soma das folhas 

   O algoritmo percorre todos os nós da árvore em busca daqueles que não possuem filhos. Quando os encontra, retorna o seu valor (somado com $0$). As chamadas são recursivas e, como retorno, cada nó pai devolve a soma de seus filhos. Considerando que o algoritmo percorre toda a árvore, é possível concluir que depende diretamente do número de nós ($n$), nesse sentido o tempo de execução do algoritmo é $O(n)$.

```cpp
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
```

b. Escreva um algoritmo para efetuar um percurso de pós-ordem

c. Escreva um algoritmo para efetuar um percurso de em-ordem

d. Escreva um algoritmo para efetuar um percurso de pré-ordem

e. Escreva um algoritmo para computar a altura de um dado nó 

f. Escreva um algoritmo para computar o fator de balanceamento de um dado nó 

g. Escreva um algoritmo para percorrer a árvore em níveis

h. Escreva um algoritmo para computar o produto dos nós

