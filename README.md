# LISTA 2 – Árvores 
## Prof. Igor Machado Coelho 

1. Considere uma árvore binária completa composta pelos seguintes elementos 
(representação sequencial): 10,20,15,12,8,5,7, 1 e 2. (a) Apresente o percurso de pré-ordem na árvore (b) Apresente o percurso em-ordem na árvore (a) Apresente o percurso de pós-ordem na árvore 

``` graphviz
digraph inverteP1P {
    rankdir = LR;
    center=true;
    node [shape=record];
    p00 [label="<f0>p|<f1>E|<f2>D|<f3>C|<f4>B|<f5>A"];
    p10 [label="<f0>p|<f1>D|<f2>C|<f3>B|<f4>A|<f5>E"];
    p20 [label="<f0>p|<f1>C|<f2>B|<f3>A|<f4>D|<f5>E"];
    p30 [label="<f0>p|<f1>B|<f2>A|<f3>C|<f4>D|<f5>E"];
    p40 [label="<f0>p|<f1>A|<f2>B|<f3>C|<f4>D|<f5>E"];
    eA0 [label="<f0>aux|<f1>E"];
    eA1 [label="<f0>aux|<f1>D"];
    eA2 [label="<f0>aux|<f1>C"];
    eA3 [label="<f0>aux|<f1>B"];
    p01 [label="<f0>p1|<f1>A|<f2>B|<f3>C|<f4>D", rotate=180];
    p11 [label="<f0>p1|<f1>A|<f2>B|<f3>C"];
    p21 [label="<f0>p1|<f1>A|<f2>B"];
    p31 [label="<f0>p1|<f1>A"];
    p00:f1 -> eA0:f1 -> p10:f5 [color=darkslategray];
    p00:f2 -> p01:f4 -> p10:f1 -> eA1:f1 -> p20:f4 [color=tomato];
    p00:f3 -> p01:f3 -> p10:f2 -> p11:f3 -> p20:f1 -> eA2:f1 -> p30:f3 [color=darkgreen];
    p00:f4 -> p01:f2 -> p10:f3 -> p11:f2 -> p20:f2 -> p21:f2 -> p30:f1 -> eA3:f1 -> p40:f2 [color=darkslateblue];
    p00:f5 -> p01:f1 -> p10:f4 -> p11:f1 -> p20:f3 -> p21:f1 -> p30:f2 -> p31:f1 -> p40:f1 [color=darkorange];
}
`````` graphviz
digraph inverteP1P {
    rankdir = LR;
    center=true;
    node [shape=record];
    p00 [label="<f0>p|<f1>E|<f2>D|<f3>C|<f4>B|<f5>A"];
    p10 [label="<f0>p|<f1>D|<f2>C|<f3>B|<f4>A|<f5>E"];
    p20 [label="<f0>p|<f1>C|<f2>B|<f3>A|<f4>D|<f5>E"];
    p30 [label="<f0>p|<f1>B|<f2>A|<f3>C|<f4>D|<f5>E"];
    p40 [label="<f0>p|<f1>A|<f2>B|<f3>C|<f4>D|<f5>E"];
    eA0 [label="<f0>aux|<f1>E"];
    eA1 [label="<f0>aux|<f1>D"];
    eA2 [label="<f0>aux|<f1>C"];
    eA3 [label="<f0>aux|<f1>B"];
    p01 [label="<f0>p1|<f1>A|<f2>B|<f3>C|<f4>D", rotate=180];
    p11 [label="<f0>p1|<f1>A|<f2>B|<f3>C"];
    p21 [label="<f0>p1|<f1>A|<f2>B"];
    p31 [label="<f0>p1|<f1>A"];
    p00:f1 -> eA0:f1 -> p10:f5 [color=darkslategray];
    p00:f2 -> p01:f4 -> p10:f1 -> eA1:f1 -> p20:f4 [color=tomato];
    p00:f3 -> p01:f3 -> p10:f2 -> p11:f3 -> p20:f1 -> eA2:f1 -> p30:f3 [color=darkgreen];
    p00:f4 -> p01:f2 -> p10:f3 -> p11:f2 -> p20:f2 -> p21:f2 -> p30:f1 -> eA3:f1 -> p40:f2 [color=darkslateblue];
    p00:f5 -> p01:f1 -> p10:f4 -> p11:f1 -> p20:f3 -> p21:f1 -> p30:f2 -> p31:f1 -> p40:f1 [color=darkorange];
}
```

2. Considere uma estrutura MAX-heap representada pelo seguinte vetor de níveis: 20, 10, 15, 4, 7, 8, 3, 1, 2 

    a. efetue a remoção do elemento de maior prioridade: desenhe a árvore e vetor passo-a-passo 

    b. efetue a inserção do elemento 16 (sem considerar a remoção anterior): desenhe a árvore e vetor passo-a-passo 

3. Considere a seguinte estrutura para uma árvore binária: 

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

    a. Escreva um algoritmo para computar a soma das folhas 

    b. Escreva um algoritmo para efetuar um percurso de pós-ordem

    c. Escreva um algoritmo para efetuar um percurso de em-ordem

    d. Escreva um algoritmo para efetuar um percurso de pré-ordem

    e. Escreva um algoritmo para computar a altura de um dado nó 

    f. Escreva um algoritmo para computar o fator de balanceamento de umdado nó 

    g. Escreva um algoritmo para percorrer a árvore em níveis (h) Escreva um algoritmo para computar o produto dos nós
