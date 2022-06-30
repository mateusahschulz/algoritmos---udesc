algoritmo "peso ideal"
var
   h: real
   sexo: caractere
inicio
      escreva("Digite a sua altura: ")
      leia(h)
      escreva("Digite seu sexo: ")
      leia(sexo)
      escolha sexo
         caso "m", "masc", "masculino"
            escreva("Seu peso ideal é de: ", ((72.2 * h)- 58))
         caso "f", "fem", "feminino"
            escreva("Seu peso ideal é de: ", ((62.1 * h)- 44.7))
         outrocaso
            escreva("Entrada inválida")
      fimescolha
fimalgoritmo