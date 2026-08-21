# Lista de Exercícios: Fundamentos de Programação com Ponteiros

## Nível 1: Conceitos Básicos (Endereço, Referência e Desreferência)

1. **Declaração e impressão:** Declare uma variável `int x = 10` e um ponteiro `int *p`. Atribua `p = &x`. Imprima: o valor de `x`, o endereço de `x` (`&x`), o valor de `p`, e o valor apontado (`*p`). Explique o que cada saída significa.
2. **Modificação via ponteiro:** Usando o ponteiro do exercício 1, altere o valor de `x` para `25` usando apenas `*p = 25`. Imprima `x` depois e confirme que mudou.
3. **Múltiplos ponteiros:** Crie duas variáveis `int a = 3` e `int b = 7`. Crie dois ponteiros `pa` e `pb`. Faça `pa` apontar para `a` e `pb` para `b`. Troque os valores de `a` e `b` usando apenas os ponteiros (sem tocar diretamente em `a` e `b`). Imprima o resultado.
4. **Ponteiro para ponteiro:** Declare `int v = 5`, `int *p = &v` e `int **pp = &p`. Imprima `v`, `*p`, `**pp` e explique a relação entre eles. Altere `v` para `9` usando `pp`.
5. **Tamanho e endereços:** Crie um array `int arr[5]`. Imprima os endereços de `arr[0]`, `arr[1]`, `arr[2]` e o endereço base `arr`. Use `sizeof` para mostrar o tamanho de um `int` e confirme que os endereços diferem por esse valor.

---

## Nível 2: Ponteiros e Arrays

6. **Aritmética de ponteiros:** Dado `int arr[5] = {10, 20, 30, 40, 50}`, use um ponteiro `int *p = arr` para percorrer e imprimir todos os elementos usando `*(p + i)`. Depois, repita usando `p++` em um loop.
7. **Soma com ponteiros:** Escreva uma função `int soma(int *arr, int n)` que recebe um array e seu tamanho e retorna a soma de todos os elementos, percorrendo com aritmética de ponteiros.
8. **Maior elemento:** Escreva uma função que recebe um array e retorna o endereço (ponteiro) do maior elemento. No `main`, imprima tanto o valor quanto o endereço retornado.
9. **Inverter array:** Escreva uma função que inverte um array *in-place* usando dois ponteiros (um no início, um no fim) e trocando os valores até se encontrarem.
10. **Array de ponteiros:** Crie um array de 3 ponteiros para `int`, aponte cada um para uma variável diferente e imprima os valores através do array de ponteiros.