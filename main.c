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

  //Recebe um valor 
  puts("Caso o Valor for Positivo Entra Como Receita");
  puts("Se o Valor for Negativo Entrara Como Gasto");
  // por uma descrição
  // por a data do registro
  // indicar qual categoria.

}

int main(void){
  menu();
  return 0;
 }



