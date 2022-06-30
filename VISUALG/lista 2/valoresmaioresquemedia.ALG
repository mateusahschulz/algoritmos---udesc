algoritmo "valores maiores que a média"
var
   v1, v2, v3, v4, v5, media: inteiro
inicio
      escreva("Informe o valor 1: ")
      leia(v1)
      escreva("Informe o valor 2: ")
      leia(v2)
      escreva("Informe o valor 3: ")
      leia(v3)
      escreva("Informe o valor 4: ")
      leia(v4)
      escreva("Informe o valor 5: ")
      leia(v5)
      media <- (v1 + v2 + v3 + v4 + v5) div 5
      escreval("A média é de ", media)
      se v1 > media entao
         escreva(v1, ",")
      fimse
      se v2 > media entao
         escreva(v2, ",")
      fimse
      se v3 > media entao
         escreva(v3, ",")
      fimse
      se v4 > media entao
         escreva(v4, ",")
      fimse
      se v5 > media entao
         escreva(v5)
      fimse
fimalgoritmo