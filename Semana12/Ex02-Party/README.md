# 🎉 Party

**Fonte: [Codeforces](https://codeforces.com/problemset/problem/115/A)**

A company has $n$ employees numbered from $1$ to $n$. Each employee either has no immediate manager or exactly one immediate manager, who is another employee with a different number. An employee $A$ is said to be the superior of another employee $B$ if at least one of the following is true:

- Employee $A$ is the immediate manager of employee $B$
- Employee $B$ has an immediate manager employee $C$ such that employee $A$ is the superior of employee $C$. 

The company will not have a managerial cycle. That is, there will not exist an employee who is the superior of his/her own immediate manager.

Today the company is going to arrange a party. This involves dividing all $n$ employees into several groups: every employee must belong to exactly one group. Furthermore, within any single group, there must not be two employees $A$ and $B$ such that $A$ is the superior of $B$.

What is the minimum number of groups that must be formed?

### Entrada
The first line contains integer $n$ ($1 ≤ n ≤ 2000$) — the number of employees.

The next n lines contain the integers $p_i$ ($1 ≤ p_i ≤ n$ or $p_i = -1$). Every $p_i$ denotes the immediate manager for the $i$-th employee. If $p_i$ is $-1$, that means that the $i$-th employee does not have an immediate manager.

It is guaranteed, that no employee will be the immediate manager of him/herself ($p_i ≠ i$). Also, there will be no managerial cycles.

### Saída
Print a single integer denoting the minimum number of groups that will be formed in the party.

## 🧩 Processo de Resolução

> Detalhamento do processo em progresso..

## 📝 Corretude da Solução
A solução desenvolvida passou em todos os casos de testes.
