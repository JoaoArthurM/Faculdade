#include <stdio.h>

int main(void)
{   
    //Declaração de variáveis
    int idade, inscricao;
    char sexo, experiencia;
    int flag = 0;
    int qtd_masculino = 0, qtd_feminino = 0;
    float qtd_masc_exp = 0, soma_idade_masc_exp = 0;
    float media_masc_exp = 0, qtd_masc_45 = 0;

    //Estrutura de repetição que irá executar
    //enquanto a variável flag for igual a 0
    while(flag == 0)
    {
        printf("Insira sua idade:");
        scanf("\n%d", &idade);
        printf("Insira seu sexo:");
        scanf("\n%c", &sexo);
        printf("Insira sua experiência:");
        scanf("\n%c", &experiencia);
        printf("Insira o número de inscrição:");
        scanf("\n%d", &inscricao);

        //Validar se a inscrição é 0 para encerrar
        //o programa
        if(inscricao == 0)
        {
            flag = 1;
        }

        //Validar se a pessoa é do sexo masculino
        //ou feminino
        if(sexo == 'f')
        {
            qtd_feminino += 1;
        }
        else
        {
            qtd_masculino += 1;
            //Caso seja do sexo masculino, verificar
            //se possui experiência. Se sim, contar
            //a quantidade de homens com experiência
            //e o total da idade deles.
            if(experiencia == 's')
            {
                qtd_masc_exp += 1;
                soma_idade_masc_exp += idade;
            }

            //Validar se existem homens com idade
            //superior à 45 anos
            if(idade > 45)
            {
                qtd_masc_45 += 1;
            }
        }
    }

    media_masc_exp = soma_idade_masc_exp / qtd_masc_exp;

    printf("Total de pessoas do sexo feminino: %d\n", qtd_feminino);
    printf("Total de pessoas do sexo masculino: %d\n", qtd_masculino);
    printf("Média dos homens com experiência: %.2f\n", media_masc_exp);
    printf("Percentual de homens com mais de 45 anos %.2f%%\n", (qtd_masc_45 / qtd_masculino)*100);
}