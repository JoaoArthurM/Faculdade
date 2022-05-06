#include <stdio.h>
#include <locale.h>

int main(){

  int escolha, codigo_de_usuario, cpf[100], idade_do_usuario[10], menu;
  int menu_de_alteracao;
  float salario[10];
  char sexo[10];

  for(int i = 0; i < 4; i++)
  {
  printf("==========================================\n");
  printf("          BEM VINDO AO CADASTRO           \n");
  printf("==========================================\n");
  printf("ESCOLHA UMA DAS OPCOES ABAIXO:\n");
  printf("1. CADASTRAR USUARIO\n");
  printf("2. EDITAR USUARIO\n");
  printf("3. DELETAR USUARIO\n");
  printf("4. EXIBIR USUARIO POR MEIO DE SEU CODIGO\n");
  printf("5. ENCERRAR O SISTEMA\n");
  printf("==========================================\n");
  scanf("%d", &menu);

  if(menu < 1 || menu > 5)
  {
      while(menu < 1 || menu > 5)
      {
          printf("Digite uma opcao correta: ");
          scanf("%d", &menu);
      }
  }

  switch (menu){

    case 1:
    printf("INSIRA SEU CODIGO DE USUARIO: ");
    scanf("%d", &escolha);

   if(escolha > 10){
           printf("digite um numero entra 1 e 10: ");
           scanf("%d", &escolha);
   }

    printf("INSIRA SEU CPF: ");
    scanf("%d", &cpf[escolha]);

    printf("INSIRA SEU SEXO m(para masculino) ou F(para feminino) : ");
    scanf("%s", &sexo[escolha]);

    printf("INSIRA SEU SALARIO: ");
    scanf("%f", &salario[escolha]);

    printf("INSIRA SUA IDADE: ");
    scanf("%d", &idade_do_usuario[escolha]);
    break;

    case 2:
    printf("insira o numero que corresponde ao que voce deseja alterar :\n ");
    printf("(1) - editar cpf \n (2) - editar seu sexo\n (3) - editar sua idade\n (4) - editar seu salario\n");
    scanf("%d", &menu_de_alteracao);
    printf("INSIRA O CODIGO DO USUARIO QUE DESEJA EDITAR:\n");
    scanf("%d", &codigo_de_usuario);
    switch(menu_de_alteracao)
    {
        case 1:
        printf("Digite o novo cpf: ");
        scanf("%d", &cpf[codigo_de_usuario]);
        break;
        case 2:
        printf("Digite o novo sexo: ");
        scanf("%s", &sexo[codigo_de_usuario]);
        break;
        case 3:
        printf("Digite o nova idade: ");
        scanf("%d", &idade_do_usuario[codigo_de_usuario]);
        break;
        case 4:
        printf("Digite o novo salario: ");
        scanf("%d", &salario[codigo_de_usuario]);
        break;
    }
    break;

    case 3:
    printf("INSIRA O CODIGO DO USUARIO QUE DESEJA DELETAR:\n");
    scanf("%d", &codigo_de_usuario);
    idade_do_usuario[codigo_de_usuario] = 0;
    cpf[codigo_de_usuario] = 0;
    salario[codigo_de_usuario] = 0;
    break;

    case 4:
    printf("INSIRA O CODIGO DO USUARIO QUE DESEJA MOSTRAR:\n");
    scanf("%d", &codigo_de_usuario);
    if(cpf[codigo_de_usuario] == 0)
    {
        printf("Usuario deletado, crie outro.\n");
        break;
    }
    printf("\nSeu cpf eh: %d", cpf[codigo_de_usuario]);
    printf("\nSua idade eh: %d", idade_do_usuario[codigo_de_usuario]);
    printf("\nSeu salario eh: %.2f", salario[codigo_de_usuario]);
    printf("\nSeu sexo eh: %c\n", sexo[escolha]);
    

    break;

    default:
    return 0;
    break;
  }
}
}