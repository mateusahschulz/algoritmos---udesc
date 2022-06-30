algoritmo "notas"

var
   dinheiro, nota50, nota20, nota10, nota5, nota2, moeda, resto: inteiro
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
      nota2 <- resto div 2
      resto <- resto mod 2
      moeda <- resto div 1
      se nota50 <> 0 entao
         escreval("Quantidade de notas de 50:", nota50)
      fimse
      se nota20 <> 0 entao
         escreval("Quantidade de notas de 20:", nota20)
      fimse
      se nota10 <> 0 entao
         escreval("Quantidade de notas de 10:", nota10)
      fimse
      se nota5 <> 0 entao
         escreval("Quantidade de notas de 5:", nota5)
      fimse
      se nota2 <> 0 entao
         escreval("Quantidade de notas de 2:", nota2)
      fimse
      se moeda <> 0 entao
         escreva("Quantidade de moedas de 1 real:", moeda)
      fimse
fimalgoritmo