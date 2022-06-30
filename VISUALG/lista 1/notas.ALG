algoritmo "notas"

var
   dinheiro, nota50, nota20, nota10, nota5, moeda, resto: inteiro
inicio
      escreva("Dinheiro: ")
      leia(dinheiro)
      nota50 <- dinheiro div 50
      resto <- dinheiro mod 50
      nota20 <- resto div 20
      resto <- resto mod 20
      nota10 <- resto div 10
      resto <- resto mod 10
      nota5 <- resto div 5
      resto <- resto mod 5
      moeda <- resto div 1
      escreval("Quantidade de notas de 50:", nota50)
      escreval("Quantidade de notas de 20:", nota20)
      escreval("Quantidade de notas de 10:", nota10)
      escreval("Quantidade de notas de 5:", nota5)
      escreva("Quantidade de moedas de 1 real:", moeda)
fimalgoritmo