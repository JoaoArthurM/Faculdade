#include <stdio.h>
#include <math.h>

int main()
{
  //VARIAVEIS

  int nota1, nota2 , nota3 , presenca , maior_nota = 0, menor_nota , qtd_de_alunos_reprovados_por_nota = 0, nota_minima = 6.0, matricula = 0;
  float media = 0 , soma_das_notas = 0 , media_geral , qtd_de_alunos_reprovados_por_faltas = 0, percentual_d_alunos_reprovados_por_falta = 0;

  //REPETIÇÃO & ENTRADA

    for(matricula; matricula <= 100; matricula ++){

    printf("Insira seu numero da matricula: ");
    scanf("%i", &matricula);

    printf("Insira a sua frequencia: ");
    scanf("%i", &presenca);

    printf("Insira a PRIMEIRA nota: ");
    scanf("%f", &nota1);

    printf("Insira a SEGUNDA nota: ");
    scanf("%f", &nota2);

    printf("Insira a TERCEIRA nota: ");
    scanf("%f", &nota3);

  //CALCULANDO 

   media= (nota1 + nota2 + nota3) / 3;
   soma_das_notas = media + soma_das_notas;
   media_geral = soma_das_notas / 100;

    printf("Sua media e: %2.f",media);

  //CALCULANDO MAIOR E MENOR MEDIA

   if(media > maior_nota){
       maior_nota = media;
   }

   if(media < menor_nota){
      menor_nota = media;
   }

  //CALCULANDO OS REPROVADOS E APROVADOS

   if(media > nota_minima ){
      qtd_de_alunos_reprovados_por_nota ++;
   }

   if(presenca >= 40 && media > nota_minima){
      printf("Aprovado");
   }
   else{
      qtd_de_alunos_reprovados_por_faltas ++;
      printf("Reprovado");
   }

  }

  //CALCULANDO PERCENTUAL DE REPROVADOS

  percentual_d_alunos_reprovados_por_falta = (qtd_de_alunos_reprovados_por_faltas * 100) / 100;


 //SAIDAS

  printf("A media geral da sala e : %.2f\n", media_geral);
  printf("Maior nota da sala e de %d\n", maior_nota);
  printf("Menor nota da sala e de %d\n", menor_nota);
  printf("A quantidade de alunos reprovados por nota e de %d\n:",qtd_de_alunos_reprovados_por_nota);
  printf("Percentual de alunos reprovados por infrequencia %.2f%%:" , percentual_d_alunos_reprovados_por_falta);

  return 0;
}