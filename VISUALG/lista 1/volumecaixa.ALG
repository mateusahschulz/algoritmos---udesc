Algoritmo "volume de uma caixa dagua cilindrica"


Var
   altura, raio, volume: real
   
Inicio
      escreva("Digite a altura da caixa d'agua: ")
      leia(altura)
      escreva("Digite o raio da caixa: ")
      leia(raio)
      volume <- pi * quad(raio) * altura
      escreva("O volume da caixa d'água é de ", volume)

Fimalgoritmo