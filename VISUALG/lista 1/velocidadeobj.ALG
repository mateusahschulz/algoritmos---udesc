Algoritmo "velocidade de um objeto"

Var
   vi, acel, temp, vf: real
   
Inicio
      escreva("Qual é a velocidade inicial desse objeto?")
      leia(vi)
      escreva("Qual a aceleração desse objeto(m/s²)?")
      leia(acel)
      escreva("Qual o tempo(segundos)?")
      leia(temp)
      vf <- vi + (acel * temp)
      escreva("A velocidade final do objeto é de: ", vf, "m/s")

Fimalgoritmo