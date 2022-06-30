Algoritmo "salario"

Var
   salariobruto, inss, ir, sindicato: real
   

Inicio
   escreva("Digite o seu salário bruto: ")
   leia(salariobruto)
   inss <- salariobruto * 15/100
   ir <- salariobruto * 11/100
   sindicato <- salariobruto * 3/100
   escreval("IR(15%): ", ir)
   escreval("INSS(11%): ", inss)
   escreval("Sindicato(3%): ", sindicato)
   escreva("Salário líquido: ", salariobruto - inss - ir - sindicato)
   


Fimalgoritmo