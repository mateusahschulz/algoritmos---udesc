Algoritmo "semnome"
Var
   n1, n2, n3, n4, media, exame, novamedia: real
Inicio
   escreva("Informe a 1° nota: ")
   leia(n1)
   escreva("Informe a 2° nota: ")
   leia(n2)
   escreva("Informe a 3° nota: ")
   leia(n3)
   escreva("Informe a 4° nota: ")
   leia(n4)
   media <- (n1 + n2 + n3 + n4) / 4
   se media >= 7 entao
      escreva("Aluno aprovado com média", media, "!")
   senao
      escreva("Informe a nota do exame: ")
      leia(exame)
      novamedia <- (media + exame) / 2
      se novamedia >= 5 entao
         escreva("Aluno aprovado em exame com média", novamedia, "!")
      senao
         escreva("Aluno reprovado com média", novamedia, ".")
      fimse
   fimse
Fimalgoritmo