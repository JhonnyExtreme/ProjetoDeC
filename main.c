#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void registro(){
  double valor;
  int dia,mes,ano,categoria;
  char descricao[25];
  char c1[]={"Moradia"};
  char c2[]={"Estudos"};
  char c3[]={"Transporte"};
  char c4[]={"Alimentação"};
  char c5[]={"Trabalho"};
  
  FILE* f = fopen ("Registros.txt", "a+");
  printf("Digite o valor da receita ou do gasto:\n");
  scanf("%lf", &valor);
  //colocar condição para não ter espaço 
  printf("Descricao:\n");
  scanf("%s",descricao);
  //colocar condição para dia/mes/existente
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
  puts("As categorias existentes são: 1-Moradia, 2-Estudos, 3-Transporte, 4-Alimentacão, 5-Trabalho");
  printf("Digite um Número Correspondente a Categoria:\n");
  scanf("%d", &categoria);
  if(categoria>5 || categoria<0){
    printf("Digite uma Número válido.\n");
    scanf("%d", &categoria);
  }
  if(categoria==1){
    fprintf(f,"%.2lf %d %d %d %s %s\n",valor,dia,mes,ano,descricao,c1);
  }
  if(categoria==2){
    fprintf(f,"%.2lf %d %d %d %s %s\n",valor,dia,mes,ano,descricao,c2);
  }
  if(categoria==3){
    fprintf(f,"%.2lf %d %d %d %s %s\n",valor,dia,mes,ano,descricao,c3);
  }
  if(categoria==4){
    fprintf(f,"%.2lf %d %d %d %s %s\n",valor,dia,mes,ano,descricao,c4);
  }
  if(categoria==5){
    fprintf(f,"%.2lf %d %d %d %s %s\n",valor,dia,mes,ano,descricao,c5);
  }
  fclose(f);
  puts("");
  puts("Registrado Com Sucesso!!");
  puts("");
}

int boubble(char* a, int number){
    int i, j, temp;

    for(i = 0; i < number - 1; i++)
    {
        for(j = 0; j < number - i - 1; j++)
        {
            if(a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    return 0;
}

void arrumaarq(){
  int dia=0,ano=0,mes=0;
  double Gasto=0;
  char descricao[300];
  char categoria[300];
  int mesvet[100];
  int anovet[100];
  /*
  
  linhasvet = [1,14,2,12,3,11,4,13,5,10]

  diavet = [14,12,11,13,10]
  
  //depois do booble 
  
  "boubble(vetor, TAMANHo);"
  
  novodiavet = [10,11,12,13,14]

  novodiavet[i]==linhasvet[j](5,10)
  -acessa o arquivo-
  -vai na linha q ele tava-
  -scanf de tudo na linha-
  -salva na nova linha do novo arquivo-

  linhasvet = [1,14,2,12,3,11,4,13,5,10]

  */
 int i=0,j=1,k=0,n=0,m=0;
  FILE* fp = fopen ("Registros.txt", "r");
  int z = fscanf(fp, "%lf" "%d" "%d" "%d" "%s" "%s", &Gasto,&dia,&mes,&ano,descricao,categoria);  
 /*Contando o Numero de linhas do Arquivo para dar um tamanho pros vetores*/
  for(n=0;z != EOF;n++){
    z = fscanf(fp, "%lf" "%d" "%d" "%d" "%s" "%s", &Gasto,&dia,&mes,&ano,descricao,categoria);
  }
  
  fclose(fp);
//Limpando os Vetores
  char diavet[n];
  for(i=0;i<n;i++){
    diavet[i]=0;
  }
  m=n*2;
  printf("N=%d M=%d\n",n,m);
  char linhasvet[m];

  for(i=0;i<m;i++){
    linhasvet[i]=0;
  }

  FILE* arq = fopen ("Registros.txt", "r");

  int y = fscanf(arq, "%lf" "%d" "%d" "%d" "%s" "%s", &Gasto,&dia,&mes,&ano,descricao,categoria);

  for(i=0;y != EOF;i++){
    linhasvet[i] = j;
    linhasvet[i+1] = dia;
    diavet[k] = dia;
    y = fscanf (arq, "%lf" "%d" "%d" "%d" "%s" "%s", &Gasto,&dia,&mes,&ano,descricao,categoria);
    i++;
    j++;
    k++;
  }
  boubble(diavet,n);
  

  fclose(arq);

}

void mensal(){
//Qual Mes foi pedido !
  int mespedido = 0,anopedido=0;
  int dia=0,ano=0,mes=0;
  double Gasto=0;
  char descricao[300];
  char categoria[300];
  printf("Digite o Ano\n");
  scanf("%d",&anopedido);
  printf("Digite o Mês do qual você queira ver os Gastos/Receitas\n");
  scanf("%d",&mespedido);
  FILE* fp = fopen ("Registros.txt", "r");
  FILE* f = fopen ("RelatórioMensal.html", "w");
  fprintf(f,"<!DOCTYPE html>\n<html lang='en'>\n<head>\n<meta charset='UTF-8'>\n<title>Relátório Mensal</title>\n<style>table, th, td {\n border: 1px solid black;\nborder-collapse: collapse;\nborder-radius: 5px;\nfont-family: 'Arial Rounded MT Bold';}\ntd{ color: gray;}\n</style>\n</head>\n");
  fprintf(f,"<body>\n");
  fprintf(f,"<center><h1>Relátório Mensal</h1></center>\n");
  fprintf(f,"<center><h3>Gastos Provenientes ao mês %d do Ano %d</h3></center>\n",mespedido,anopedido);
  fprintf(f,"<center>");
  fprintf(f,"<table>\n");
  
  int z = fscanf (fp, "%lf" "%d" "%d" "%d" "%s" "%s", &Gasto,&dia,&mes,&ano,descricao,categoria);
  fprintf(f,"<tr><th>Valor</th><th>Descricao</th><th>Categoria</th><th>Data</th></tr>\n");
  
  while (z != EOF) {
    if(mespedido == mes && anopedido == ano){
      if(Gasto<0){
        fprintf(f,"<tr><td style='color:   red'>%2.lf</td><td>%s</td><td>%s</td><td>%d/%d/%d</td></tr>\n",Gasto,descricao,categoria,dia,mes,ano);
      }
      else{
        fprintf(f,"<tr><td style='color:  green'>%2.lf</td><td>%s</td><td>%s</td><td>%d/%d/%d</td></tr>\n",Gasto,descricao,categoria,dia,mes,ano);
      }
    }
      
    z = fscanf (fp, "%lf" "%d" "%d" "%d" "%s" "%s", &Gasto,&  dia,&mes,&ano,descricao,categoria);  
  }
  

  fprintf(f,"</table>\n");
  fprintf(f,"</center>");
  fprintf(f,"</body>\n</html>");
  fclose(f);
}
void anual(){
//Qual Ano foi pedido 
  int anopedido=0;
  int dia=0,ano=0,mes=0;
  double Gasto=0;
  char descricao[300];
  char categoria[300];
  printf("Digite o Ano do qual você queira ver os Gastos/Receitas\n");
  scanf("%d",&anopedido);
  
  FILE* fp = fopen ("RegistroNovo.txt", "r");
  FILE* f = fopen ("RelatórioAnual.html", "w");
  
  fprintf(f,"<!DOCTYPE html>\n<html lang='en'>\n<head>\n<meta charset='UTF-8'>\n<title>Relátório Anual</title>\n<style>table, th, td {\n border: 1px solid black;\nborder-collapse: collapse;\nborder-radius: 5px;\nfont-family: 'Arial Rounded MT Bold';}\ntd{ color: gray;}\n</style>\n</head>\n");
  fprintf(f,"<body>\n");
  fprintf(f,"<center><h1>Relátório Anual</h1></center>\n");
  fprintf(f,"<center><h3>Gastos Provenientes do Ano %d</h3></center>\n",anopedido);
  fprintf(f,"<center>");
  fprintf(f,"<table>\n");

  int z = fscanf (fp, "%lf" "%d" "%d" "%d" "%s" "%s", &Gasto,&dia,&mes,&ano,descricao,categoria);
  fprintf(f,"<tr><th>Valor</th><th>Descricao</th><th>Categoria</th><th>Data</th></tr>\n");
  while ( z != EOF) {
    if(anopedido == ano){
      if(Gasto<0){
       fprintf(f,"<tr><td style='color: red'>%2.lf</td><td>%s</td><td>%s</td><td>%d/%d/%d</td></tr>\n",Gasto,descricao,categoria,dia,mes,ano);
      }
      else{
        fprintf(f,"<tr><td style='color: green'>%2.lf</td><td>%s</td><td>%s</td><td>%d/%d/%d</td></tr>\n",Gasto,descricao,categoria,dia,mes,ano);
      }
    }
    
    z = fscanf (fp, "%lf" "%d" "%d" "%d" "%s" "%s", &Gasto,&dia,&mes,&ano,descricao,categoria);  
  }

  fprintf(f,"</table>\n");
  fprintf(f,"</center>");
  fprintf(f, "</body>\n</html>");
  fclose(f);
}
void saldo(){
  int dia=0,ano=0,mes=0;
  double Gasto=0,saldo=0;
  char descricao[300];
  char categoria[300];

  FILE* fp = fopen ("Registros.txt", "r");
  FILE* f = fopen ("saldo.txt", "w");
  int z = fscanf(fp, "%lf" "%d" "%d" "%d" "%s" "%s", &Gasto,&dia,&mes,&ano,descricao,categoria);

  while(z != EOF){
    saldo = saldo + Gasto;
    z = fscanf(fp, "%lf" "%d" "%d" "%d" "%s" "%s", &Gasto,&dia,&mes,&ano,descricao,categoria); 
  }
  fprintf(f,"Saldo: %.2lf reais.\n",saldo);
  puts(" ");
  printf("Saldo: %.2lf reais.\n",saldo);
  fclose(fp);
  fclose(f);
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
        saldo();
        break;
      case 3:
        mensal();
        break;
      case 4:
        anual();
        break;
      case 5:
        arrumaarq();
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