# dgpns.batalha.naval.c

Este projeto simula a criação de um tabuleiro 10x10 com dois navios posicionados, utilizando vetores e matrizes em linguagem C.

Conceitos Praticados
- Matrizes (`int tabuleiro[10][10]`)
- Vetores (`int navio1[3]`, `int navio2[3]`)
- Estruturas de repetição aninhadas
- Validação de limites de matriz e sobreposição

Regras do Jogo (simples)

- O tabuleiro é fixo: 10x10
- Cada navio ocupa 3 posições
- Um navio é posicionado horizontalmente, outro verticalmente
- A água é representada por `0`, os navios por `3`

Como Compilar e Executar

```bash
gcc batalha_naval.c -o batalha_naval
./batalha_naval
```

Exemplo de Saída

```
Tabuleiro:

0 0 0 0 0 0 0 0 0 0 
0 0 0 0 0 0 0 0 0 0 
0 0 0 0 3 3 3 0 0 0 
0 0 0 0 0 0 0 0 0 0 
0 0 0 0 0 0 0 0 0 0 
0 0 0 0 0 0 3 0 0 0 
0 0 0 0 0 0 3 0 0 0 
0 0 0 0 0 0 3 0 0 0 
0 0 0 0 0 0 0 0 0 0 
0 0 0 0 0 0 0 0 0 0 
```

 Requisitos Atendidos

- Tamanho fixo do tabuleiro e navios
- Validação de limites e sobreposição
- Código organizado, comentado e funcional
