# 🕹️ Nene's Game

**Fonte: [Codeforces](https://codeforces.com/problemset/problem/1956/A)**

Nene invented a new game based on an increasing sequence of integers $a_1,a_2,…,a_k$.

In this game, initially n players are lined up in a row. In each of the rounds of this game, the following happens:

- Nene finds the $a_1-th, a_2-th, …, a_k-th$ players in a row. They are kicked out of the game simultaneously. If the i-th player in a row should be kicked out, but there are fewer than i players in a row, they are skipped.

Once no one is kicked out of the game in some round, all the players that are still in the game are declared as winners.

For example, consider the game with a=[3,5] and n=5 players. Let the players be named player A, player B, …, player E in the order they are lined up initially. Then,

- Before the first round, players are lined up as ABCDE. Nene finds the 3-rd and the 5-th players in a row. These are players C and E. They are kicked out in the first round.

- Now players are lined up as ABD. Nene finds the 3-rd and the 5-th players in a row. The 3-rd player is player D and there is no 5-th player in a row. Thus, only player D is kicked out in the second round.

- In the third round, no one is kicked out of the game, so the game ends after this round.

- Players A and B are declared as the winners.

Nene has not yet decided how many people would join the game initially. Nene gave you q integers $n_1,n_2,…,n_q$ and you should answer the following question for each $1≤i≤q$ independently:

- How many people would be declared as winners if there are $n_i$ players in the game initially?

### Entrada
Each test contains multiple test cases. The first line contains the number of test cases t ($1≤t≤250$). The description of test cases follows.

The first line case contains two integers k and q($1≤k,q≤100$) — the length of the sequence a and the number of values $n_i$ you should solve this problem for.

The second line contains k integers $a_1,a_2,…,a_k$ ($1≤a1<a2<…<a_k≤100$) — the sequence a.

The third line contains q
 integers n1,n2,…,nq
 (1≤ni≤100
).

### Saída
For each test case, output q integers: the $i$-th ($1≤i≤q$) of them should be the number of players declared as winners if initially $n_i$ players join the game.

## 🧩 Processo de Resolução

> Detalhamento do processo em progresso..

## 📝 Corretude da Solução
A solução desenvolvida passou em todos os casos de testes.

