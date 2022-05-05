#include <stdio.h>

int main(){

    float salario;
    int filhos;
    float soma_total_salario = 0 , numero_de_pessoas = 0;
    float soma_total_filhos = 0;
    float maior_salario = 0;
    float pps = 0;

 while (salario >= 0){
    printf("Insira seu salario: ");
    scanf("%f", &salario);

    
        printf("Insira a quantidade de filhos: ");
        scanf("%d", &filhos);

        soma_total_salario = soma_total_salario + salario;
        numero_de_pessoas = numero_de_pessoas + 1;
        soma_total_filhos = soma_total_filhos + filhos;

        if(salario > maior_salario){
            maior_salario = salario;
        }

        if(salario <= 100){
            pps ++;
        }
        
        printf("Insira seu salario: ");
        scanf("%f", &salario);
 }

    printf("A media salarial e de R$ %.2f\n", soma_total_salario/numero_de_pessoas);
    printf("A media de filhos e de %.2f\n", soma_total_filhos/numero_de_pessoas);
    printf("o maior salario e de R$ %.2f\n", maior_salario);
    printf("percentual e de %.2f %\n", (pps/numero_de_pessoas)*100);
    return 0;
}
