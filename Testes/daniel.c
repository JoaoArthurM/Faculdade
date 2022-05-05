#include <stdio.h>
#include <math.h>

int main ()
{
  int nota1, nota2 , nota3 , presenca , maior_nota=0, menor_nota , qtd_de_alunos_reprovados_por_nota = 0;
  int nota_minima = 6.0;
  int matricula = 0;
  float media=0 , soma_das_notas=0 , media_geral , qtd_de_alunos_reprovados_por_faltas=0 , percentual_d_alunos_reprovados_por_falta=0;


  for(matricula; matricula<=100; matricula++)
  {
    printf("insira seu numero de matricula : ");
    scanf("%d" , &matricula);

    printf("quantas aulas você compareceu : ");
    scanf("%d", &presenca);

    printf("insira sua primeira nota : ");
    scanf("%d" , &nota1);

    printf("insira sua segunda nota : ");
    scanf("%d" , &nota2);

    printf("insira sua terceira nota : ");
    scanf("%d" , &nota3);


   media= (nota1 +nota2 + nota3) / 3;
   soma_das_notas= media + soma_das_notas;
   media_geral= soma_das_notas / 5;

   printf("sua media final e de %.2f\n" , media);


   if(media > maior_nota)
   {
       maior_nota = media;
   }

   if(media < menor_nota)
   {
      menor_nota = media;
   }

   if(media > nota_minima )
   {
      qtd_de_alunos_reprovados_por_nota +=1;
   }

   if(presenca >=40 && media > nota_minima)
   {
      printf("aprovado\n");
   }
   else
   {
      qtd_de_alunos_reprovados_por_faltas +=1;
      printf("reprovado\n");
   }

  }

  percentual_d_alunos_reprovados_por_falta= (qtd_de_alunos_reprovados_por_faltas *100) / 100;
 
  printf("A media geral da sala e : %.2f\n" , media_geral);
  printf("maior nota da sala e de %d\n" , maior_nota);
  printf("menor nota da sala e de %d\n" , menor_nota);
  printf("A quantidade de alunos reprovados por nota e de %d\n:" , qtd_de_alunos_reprovados_por_nota);
  printf("percentual de alunos reprovados por infrequencia %.2f%%:" , percentual_d_alunos_reprovados_por_falta);

return 0;
}