Algoritmo "Salário funcionário"

Var
   nome: caracter
   horastrab, valorphora, salario: real


Inicio
   escreva("Informe seu nome: ")
   leia(nome)
   escreva("Informe a quantidade de horas trabalhadas: ")
   leia(horastrab)
   escreva("Informe o valor ganho por hora trabalhada: ")
   leia(valorphora)
   salario <- horastrab * valorphora
   escreva("O salário de ", nome, " é de", salario, " reais")
   

Fimalgoritmo