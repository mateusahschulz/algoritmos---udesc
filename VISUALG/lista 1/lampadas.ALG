Algoritmo "lampadas"

Var
   potencia, largura, comprimento, area, potnec, lampadas: real

Inicio
      escreva("Informe a potência da lâmpada em watts: ")
      leia(potencia)
      escreva("Informe a largura do quarto: ")
      leia(largura)
      escreva("Informe o comprimento do quarto: ")
      leia(comprimento)
      area <- largura * comprimento
      escreval("A área é de", area, "m²")
      potnec <- area * 18
      lampadas <- potnec / potencia
      escreva("O número de lâmpadas necessárias é de: ", lampadas)


Fimalgoritmo