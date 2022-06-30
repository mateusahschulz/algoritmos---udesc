algoritmo "tempo"
var
   horas, minutos, segundos, resto, quant: inteiro
   
inicio
      escreva("Quantidade de segundos: ")
      leia(quant)
      horas <- quant div 3600
      resto <- quant mod 3600
      minutos <- resto div 60
      resto <- resto mod 60
      segundos <- resto
      escreval("A quantidade de", quant, " segundos em horas, minutos e segundos é de:")
      escreval(horas, " horas")
      escreval(minutos, " minutos")
      escreval(segundos, " segundos")

fimalgoritmo