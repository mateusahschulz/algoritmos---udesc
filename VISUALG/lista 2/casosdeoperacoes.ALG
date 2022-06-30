algoritmo "casos de operações"
var
   x, y, resultado: real
   case: inteiro
inicio
      escreva("Informe o valor de x: ")
      leia(x)
      escreva("Informe o valor de y: ")
      leia(y)
      escreva("Informe o caso solicitado(1- adição/2- subtração/3- multiplicação/4- divisão): ")
      leia(case)
      escolha case
         caso 1
            resultado <- x + y
            escreva("O resultado é de ", resultado)
         caso 2
            resultado <- x - y
            escreva("O resultado é de ", resultado)
         caso 3
            resultado <- x * y
            escreva("O resultado é de ", resultado)
         caso 4
            resultado <- x / y  // ao dividir por 0, da problema, um: é impossível e dois: buga tudo a plataforma ´
            escreva("O resultado é de ", resultado)
         outrocaso
            escreva("Entrada inválida")
      fimescolha
fimalgoritmo