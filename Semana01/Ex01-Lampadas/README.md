# 💡 Lâmpadas

**Fonte: [Neps Academy](https://neps.academy/br/exercise/52)**

Você está de volta em seu hotel na Tailândia depois de um dia de mergulhos. O seu quarto tem duas lâmpadas. Vamos chamá-las de *`A`* e *`B`*. No hotel há dois interruptores, que chamaremos de *`I1`* e *`I2`*. Ao apertar *`I1`*, a lâmpada *`A`* acende se estiver apagada, e apaga se estiver acesa. Se apertar *`I2`*, cada uma das lâmpadas *`A`* e *`B`* troca de estado: se estiver apagada, fica acesa e se estiver acesa apaga.

As lâmpadas inicialmente estão ambas apagadas. Seu amigo resolveu bolar um desafio para você. Ele irá apertar os interruptores em uma certa sequência, e gostaria que você respondesse o estado final das lâmpadas 
*`A`* e *`B`*.

### Entrada
A primeira linha contém um número *`N`* que representa quantas vezes seu amigo irá apertar algum interruptor. Na linha seguinte seguirão N números, que pode ser 1, se o interruptor *`I1`* foi apertado, ou 2, se o interruptor *`I2`* foi apertado.

### Saída
Seu programa deve imprimir dois valores, em linhas separadas. Na primeira linha, imprima 1 se a lâmpada *`A`* estiver acesa no final das operações e 0 caso contrário. Na segunda linha, imprima 1 se a lâmpada *`B`* estiver acesa no final das operações e 0 caso contrário.

### Restrições
2 ≤ 𝑁 ≤ 10^5


## 🧩 Processo de Resolução
Para resolução do problema, como primeira ideia podemos pensar em iniciar duas variáveis representando as lâmpadas e ir atualizando elas conforme as regras de entrada. Um ponto interessante de se notar é que as lâmpadas alternam entre apenas dois estados, e essa alternância é feita de maneira circular. Usando essa informação, não precisamos mais atualizar o estado da lâmpada a cada novo comando, apenas mantemos um contador de quantas vezes cada lâmpada trocou de estado. Assim, para sabermos o estado que a lâmpada parou no final da execução, podemos realizar uma divisão modular sobre a quantidade de vezes que a lâmpada trocou de estado.


## 📝 Corretude da Solução
A solução desenvolvida passou em todos os casos de testes.

![Accepted](img/accepted.png)