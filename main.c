#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int registro(){
  double valor;
  char descricao[150];
  char data[11];
  char categoria[20];
  //Recebe um valor 
  
  puts("----------------------------------------------");
  puts("Caso o Valor for Positivo Entra Como Receita");
  puts("----------------------------------------------");
  puts("Se o Valor for Negativo Entrara Como Gasto");
  puts("----------------------------------------------");
  scanf("%lf\n",&valor);
  puts("Descrição");
  puts("----------------------------------------------");
  scanf("%s\n", descricao);
  puts("Data(dd/mm/aaaa)");
  puts("----------------------------------------------");
  scanf("%s\n", data);
FILE* fp = fopen ("Registros.txt", "r");  

puts("----------------------------------------------");
puts("");
puts("");
puts("");

printf("As categorias EXISTENTES são:");

char cat[25];
char aux1[25];
char aux2[25];
char aux3[25];

int i;
int z = fscanf (fp, "%s %s %s %s", aux1,aux2,aux3,cat);
for (i=0; z != EOF;i++) {
    printf(" %s ",cat);
    z = fscanf (fp, "%s %s %s %s", aux1,aux2,aux3,cat);
}

fclose(fp);

FILE* f = fopen ("Registros.txt", "a+");
  puts("");
  puts("");
  puts("----------------------------------------------");
  puts("");
  puts("Categoria");
  puts("");
  puts("----------------------------------------------");
  scanf("%s", categoria);

  fprintf(f,"%.2lf %s %s %s\n",valor,data,categoria,descricao);

  fclose (f);
  // por uma descrição
  // por a data do registro
  // indicar qual categoria.
  // teste

  return 0.0;

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



