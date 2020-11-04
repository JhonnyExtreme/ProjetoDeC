#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int menu(){
  int option = -42;
  while(option != 0){
    do{
      puts("Opção 0 - Sair");
      puts("Opção 1 - Registros");
      puts("Opção 2 - Categorizar");
      puts("Opção 3 - Relatórios Mensal");
      puts("Opção 4 - Relatórios Anual");
      puts("Opção 5 (Plus) - Pensar");
      puts("Opção 6 (Plus)- Pensar");
      puts("Opção 7 (Plus) - Pensar ");
      scanf("%d",&option);
    } while(option < 0 || option > 7);{
      if (option == 0){
         puts("Obrigado Por Utilizar o Gerenciador, Até Logo...");

      }
      if (option == 1){
        //chama primeira função
        puts("Chegou na ---------Opção 1");
      }
      else if(option == 2){
        //chama segunda função
        puts("Chegou na ---------Opção 2");
      }
      else if(option == 3){
        //chama terceira função
        puts("Chegou na ---------Opção 3");
      }
      else if(option == 4){
        //chama 4 função
        puts("Chegou na ---------Opção 4");
      }
      else if(option == 5){
        //chama 5 função
        puts("Chegou na ---------Opção 5");
      }
      else if(option == 6){
        //chama 6 função
        puts("Chegou na ---------Opção 6");
      }
      else if(option == 7){
        //chama 7 função
        puts("Chegou na ---------Opção 7");
      }
    }
  }
 return 0;
}





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

int main(void){
  menu();
  return 0;
 }



