algoritmo "plano cartesiano"
var
   x, y: real
inicio
      escreval("Informe o valor de x: ")
      leia(x)
      escreva("Informe o valor de y: ")
      leia(y)
      se (x = 0) e (y = 0) entao
         escreva("Origem")
      senao
         se (x > 0) e (y > 0) entao
            escreva("Q1")
         senao
            se (x < 0) e (y > 0) entao
               escreva("Q2")
            senao
               se (x < 0) e (y < 0) entao
                  escreva("Q3")
               senao
                  se (x > 0) e (y < 0) entao
                     escreva("Q4")
                  senao
                     se x = 0 entao
                        escreva("eixo y")
                     senao
                        escreva("eixo x")
                     fimse
                  fimse
               fimse
            fimse
         fimse
      fimse
fimalgoritmo