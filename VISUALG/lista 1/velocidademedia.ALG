Algoritmo "velocidade média"

Var
   nome: caractere
   dist, temp, velocidade: real



Inicio
      escreva("Digite o nome do piloto: ")
      leia(nome)
      escreva("Qual a distância percorrida(em km)?")
      leia(dist)
      escreva("Em quanto tempo(em horas)?")
      leia(temp)
      velocidade <- dist / temp
      escreva("A velocidade média do ", nome, " foi", velocidade, "km/h")

Fimalgoritmo