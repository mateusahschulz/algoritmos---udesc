algoritmo "salarios"
var
   nome: caractere
   salario, novosalario: real
inicio
      escreva("Informe seu nome: ")
      leia(nome)
      escreva("Informe seu salário: ")
      leia(salario)
      se salario <= 400 entao
         novosalario <- salario + (salario * 15/100)
         escreval("Nome: ", nome)
         escreval("Porcentagem de aumento: 15%")
         escreval("Salário atual: ", salario)
         escreval("Novo salário: ", novosalario)
      senao
         se salario <= 700 entao
            novosalario <- salario + (salario * 12/100)
            escreval("Nome: ", nome)
            escreval("Porcentagem de aumento: 12%")
            escreval("Salário atual: ", salario)
            escreval("Novo salário: ", novosalario)
         senao
            se salario <= 1000 entao
               novosalario <- salario + (salario * 10/100)
               escreval("Nome: ", nome)
               escreval("Porcentagem de aumento: 10%")
               escreval("Salário atual: ", salario)
               escreval("Novo salário: ", novosalario)
            senao
               se salario <= 1800 entao
                  novosalario <- salario + (salario * 7/100)
                  escreval("Nome: ", nome)
                  escreval("Porcentagem de aumento: 7%")
                  escreval("Salário atual: ", salario)
                  escreval("Novo salário: ", novosalario)
               senao
                  se salario <= 2500 entao
                     novosalario <- salario + (salario * 4/100)
                     escreval("Nome: ", nome)
                     escreval("Porcentagem de aumento: 4%")
                     escreval("Salário atual: ", salario)
                     escreval("Novo salário: ", novosalario)
                  senao
                     escreval("Nome: ", nome)
                     escreval("Porcentagem de aumento: SEM AUMENTO")
                     escreval("Salário atual: ", salario)
                     escreval("Novo salário: ", salario)
                  fimse
               fimse
            fimse
         fimse
      fimse
fimalgoritmo