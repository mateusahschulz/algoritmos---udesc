algoritmo "peso ideal com se"
var
   h, pesoi: real
   sexo: caractere
inicio
      escreva("Digite sua altura: ")
      leia(h)
      escreva("Digite seu sexo: ")
      leia(sexo)
      se (sexo = "m") ou (sexo = "masc") ou (sexo = "masculino") entao
         pesoi <- (72.7 * h) - 58
         escreva("O seu peso ideal é de ", pesoi)
      senao
           se (sexo = "f") ou (sexo = "fem") ou (sexo = "feminino") entao
              pesoi <- (62.1 * h) - 44.7
              escreva("O seu peso ideal é de ", pesoi)
           fimse
      fimse
fimalgoritmo