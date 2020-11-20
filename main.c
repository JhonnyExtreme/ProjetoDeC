#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void registro(){
  double valor;
  int dia,mes,ano;
  char descricao[25];
  char categoria[25];
  
  FILE* f = fopen ("Registros.txt", "a+");
  printf("Digite o valor da receita ou do gasto:\n");
  scanf("%lf", &valor);
  //colocar condição para não ter espaço 
  printf("Descricao:\n");
  scanf("%s",descricao);
  printf("Ano:\n");
  scanf("%d", &ano);
  printf("Mês:\n");
  scanf("%d", &mes);
  if(mes>12 || mes<=0){
    printf("Digite um mês válido\n");
    scanf("%d",&mes);
  }
  printf("Dia:\n");
  scanf("%d", &dia);
  if(dia>= 32 || dia<=0){
    printf("Digite um Dia válido\n");
    scanf("%d", &dia);
  } 
  else if (mes == 1 && dia>31){
    printf("Digite um Dia válido para o mês de janeiro.\n");
    scanf("%d", &dia);
  }
  else if (mes == 2 && dia>28){
    printf("Digite um Dia válido para o mês de Fevereiro.\n");
    scanf("%d", &dia);
  }
  else if (mes == 3 && dia>31){
    printf("Digite um Dia válido para o mês de março.\n");
    scanf("%d", &dia);
  }
  else if (mes == 4 && dia>30){
    printf("Digite um Dia válido para o mês de abril.\n");
    scanf("%d", &dia);
  }
  else if (mes == 5 && dia>30){
    printf("Digite um Dia válido para o mês de maio.\n");
    scanf("%d", &dia);
  }
  else if (mes == 6 && dia>30){
    printf("Digite um Dia válido para o mês de junho.\n");
    scanf("%d", &dia);
  }
  else if (mes == 7 && dia>31){
    printf("Digite um Dia válido para o mês de julho.\n");
    scanf("%d", &dia);
  }
  else if (mes == 8 && dia>31){
    printf("Digite um Dia válido para o mês de Agosto.\n");
    scanf("%d", &dia);
  }
  else if (mes == 9 && dia>30){
    printf("Digite um Dia válido para o mês de setembro.\n");
    scanf("%d", &dia);
  }
  else if (mes == 10 && dia>31){
    printf("Digite um Dia válido para o mês de outubro.\n");
    scanf("%d", &dia);
  }
  else if (mes == 11 && dia>30){
    printf("Digite um Dia válido para o mês de novembro.\n");
    scanf("%d", &dia);
  }
  else if (mes == 12 && dia>31){
    printf("Digite um Dia válido para o mês de dezembro.\n");
    scanf("%d", &dia);
  }
  else if (mes == 1 && dia>31){
    printf("Digite um Dia válido para o mês de janeiro.\n");
    scanf("%d", &dia);
  }
  printf("Digite o valor da receita ou do gasto:\n");
  scanf("%s", categoria);
  fprintf(f,"%.2lf %d %d %d %s %s\n",valor,dia,mes,ano,descricao,categoria);
  fclose(f);
  puts("");
  puts("Registrado Com Sucesso!!");
  puts("");
}
int menu(){
  int opcao=-1;
  while("free"){
    puts("");
    puts("Opção 0 - Sair");
    puts("Opção 1 - Registros");
    puts("Opção 2 - Saldo");
    puts("Opção 3 - Relatórios Mensal");
    puts("Opção 4 - Relatórios Anual");
    puts("Opção 5 - Arrumar ARquivo");
    puts("Opção 6 (Plus)- Pensar");
    puts("Opção 7 (Plus) - Resetar Dados ");
    scanf("%d",&opcao);
    switch(opcao){
      case 1:
        registro();
        break;
      case 2:
        printf("cheogu na opção 2");
        break;
      case 3:
        printf("cheogu na opção 3");
        break;
      case 4:
        printf("cheogu na opção 4");
        break;
      case 5:
        printf("cheogu na opção 5");;
        break;
      case 0:
        exit(0);
        break;
      default:
        puts("Você digitpu um número invalido Digite novamente");
    }
  }
}

int main(void){
  menu();
  return 0;
 }



