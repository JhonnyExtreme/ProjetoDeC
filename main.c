#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void registro(){
  double valor;
  int dia,mes,ano,categoria;
  char descricao[30];
  char c1[]={"Moradia"};
  char c2[]={"Estudos"};
  char c3[]={"Transporte"};
  char c4[]={"Alimentação"};
  char c5[]={"Trabalho"};
  
  FILE* f = fopen ("Registros.txt", "a+");
  
  printf("Digite o valor da receita ou do gasto:\n");
  scanf("%lf", &valor);
  printf("Descricao(Até 25 caracteres):\n");
  scanf("%*[^\n]"); scanf("%*c");
  scanf("%25[^\n]", descricao);

  int len = strlen(descricao); 
  for (int i = 0, posicao = 0; i < len; i++, posicao++) {
      if (descricao[posicao] == ' ') posicao++;
      descricao[i] = descricao[posicao];
  }
  printf("Ano:\n");
  scanf("%d", &ano);
  printf("Mês:\n");
  scanf("%d", &mes);
  while(mes>12 || mes<=0){
    printf("Digite um mês válido\n");
    scanf("%d",&mes);
  }
  printf("Dia:\n");
  scanf("%d", &dia);
  
  while(dia>= 32 || dia<=0){
      if (mes == 1 && dia>31){
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
    } 
  
  puts("Escolha uma dessas categorias Já existentes:");
  printf(" 1-%s\n 2-%s\n 3-%s\n 4-%s\n 5-%s\nDigite Sua Opção:",c1,c2,c3,c4,c5);
  scanf("%d", &categoria);
  
 while(categoria>5 || categoria<0){
    puts("");
    printf("Digite uma Número válido.\n");
    puts("");
    puts("Escolha uma dessas categorias Já existentes:");
    printf(" 1-%s\n 2-%s\n 3-%s\n 4-%s\n 5-%s\nDigite Sua Opção:",c1,c2,c3,c4,c5);
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
/*
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
*/
/*
void ArrumaAno(){
  int dia=0,ano=0,mes=0;
  double Gasto=0;
  char descricao[300];
  char categoria[300];

  int i=0,j=1,k=0,n=0,m=0;
  FILE* fp = fopen ("Registros.txt", "r");
  int z = fscanf(fp, "%lf" "%d" "%d" "%d" "%s" "%s", &Gasto,&dia,&mes,&ano,descricao,categoria);  

  for(n=0;z != EOF;n++){
    z = fscanf(fp, "%lf" "%d" "%d" "%d" "%s" "%s", &Gasto,&dia,&mes,&ano,descricao,categoria);
  }
  m=n*2;
  fclose(fp);

  char anovet[n];
  for(i=0;i<n;i++){
    anovet[i]=0;
  }

  char linhasvet[m];
  for(i=0;i<m;i++){
    linhasvet[i]=0;
  }
  printf("N=> %d M=> %d\n",n,m);
  FILE* arq = fopen ("Registros.txt", "r");

  int y = fscanf(arq, "%lf" "%d" "%d" "%d" "%s" "%s", &Gasto,&dia,&mes,&ano,descricao,categoria);

  for(i=0;y != EOF;i++){
    linhasvet[i] = j;
    linhasvet[i+1] = ano;
    anovet[k] = ano;
    y = fscanf (arq, "%lf" "%d" "%d" "%d" "%s" "%s", &Gasto,&dia,&mes,&ano,descricao,categoria);
    i++;
    j++;
    k++;
  }
  fclose(arq);

  FILE* ffp = fopen ("Registros.txt", "r");
  int aux=0,d=0;
  boubble(anovet,n);
  FILE* f = fopen ("RegistroNovo.txt", "w"); 
  j=0;
  for(i=0;i<m;i++){
    FILE* ffp = fopen ("Registros.txt", "r");
    if(i%2==1){
      if(anovet[j]==linhasvet[i]){
        if(j==n){
          break;
        }
        for(d=0;d<aux;d++){
          fscanf(ffp, "%lf" "%d" "%d" "%d" "%s" "%s", &Gasto,&dia,&mes,&ano,descricao,categoria)
          ;
        }
        fclose(ffp);
        fprintf(f,"%.2lf %d %d %d %s %s\n",Gasto,dia,mes,ano,descricao,categoria);
        linhasvet[i]=0;
        i=0;
        j++;
      }
    }
    if(i%2==0){
       aux=linhasvet[i];
    }
  }
  fclose(f);
}
*/
 
void mensal(){
//Qual Mes foi pedido 
  int mespedido = 0,anopedido=0;
  int dia=0,ano=0,mes=0;
  double Gasto=0;
  char descricao[300];
  char categoria[300];
  printf("Digite o Ano\n");
  scanf("%d",&anopedido);
  printf("Digite o Mês do qual você queira ver os Gastos/Receitas\n");
  scanf("%d",&mespedido);
  while(mespedido>12 || mespedido<=0){
    printf("Digite um mês válido\n");
    scanf("%d",&mespedido);
  }
  FILE* fp = fopen ("Registros.txt", "r");
  FILE* f = fopen ("RelatorioMensal.html", "w");
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
  puts("");
  puts("Relátorio Mensal Gerado Com sucesso!!");
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
  
  FILE* fp = fopen ("Registros.txt", "r");
  FILE* f = fopen ("RelatorioAnual.html", "w");
  
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
  puts("");
  puts("Relátorio Anual Gerado Com sucesso!!");
}
void RelatorioCat(){
//Qual Mes foi pedido 
  int catscanf=0;
  int dia=0,ano=0,mes=0;
  double Gasto=0;
  char descricao[300];
  char categoria[300];
  char c1[]={"Moradia"};
  char c2[]={"Estudos"};
  char c3[]={"Transporte"};
  char c4[]={"Alimentação"};
  char c5[]={"Trabalho"};

  puts("Escolha uma dessas categorias Já existentes:");
  printf(" 1-%s\n 2-%s\n 3-%s\n 4-%s\n 5-%s\nDigite Sua Opção:",c1,c2,c3,c4,c5);
  scanf("%d", &catscanf);
  while(catscanf>5 || catscanf<0){
    puts("");
    printf("Digite uma Número válido.\n");
    puts("");
    puts("Escolha uma dessas categorias Já existentes:");
    printf(" 1-%s\n 2-%s\n 3-%s\n 4-%s\n 5-%s\nDigite Sua Opção:",c1,c2,c3,c4,c5);
    scanf("%d", &catscanf);
  }
  FILE* fp = fopen ("Registros.txt", "r");
  FILE* f = fopen ("RelatorioCategorico.html", "w");
  fprintf(f,"<!DOCTYPE html>\n<html lang='en'>\n<head>\n<meta charset='UTF-8'>\n<title>Relátório Mensal</title>\n<style>table, th, td {\n border: 1px solid black;\nborder-collapse: collapse;\nborder-radius: 5px;\nfont-family: 'Arial Rounded MT Bold';}\ntd{ color: gray;}\n</style>\n</head>\n");
  fprintf(f,"<body>\n");
  fprintf(f,"<center><h1>Relátório Categórico</h1></center>\n");
  if(catscanf==1){
   fprintf(f,"<center><h3>Gastos Provenientes Da Categoria de %s</h3></center>\n",c1);
  }
  else if(catscanf==2){
    fprintf(f,"<center><h3>Gastos Provenientes Da Categoria de %s</h3></center>\n",c2);
  }
  else if(catscanf==3){
    fprintf(f,"<center><h3>Gastos Provenientes Da Categoria de %s</h3></center>\n",c3);
  }
  else if(catscanf==4){
    fprintf(f,"<center><h3>Gastos Provenientes Da Categoria de %s</h3></center>\n",c4);
  }
  else if(catscanf==5){
    fprintf(f,"<center><h3>Gastos Provenientes Da Categoria de %s</h3></center>\n",c5);
  }
  fprintf(f,"<center>");
  fprintf(f,"<table>\n");
  
  int z = fscanf (fp, "%lf" "%d" "%d" "%d" "%s" "%s", &Gasto,&dia,&mes,&ano,descricao,categoria);
  fprintf(f,"<tr><th>Valor</th><th>Descricao</th><th>Categoria</th><th>Data</th></tr>\n");
  if(catscanf==1){
    while (z != EOF) {
      int testa = strcmp(c1, categoria);
      if(testa==0){
        if(Gasto<0){
            fprintf(f,"<tr><td style='color:   red'>%2.lf</td><td>%s</td><td>%s</td><td>%d/%d/%d</td></tr>\n",Gasto,descricao,categoria,dia,mes,ano);
          }
        else{
          fprintf(f,"<tr><td style='color:  green'>%2.lf</td><td>%s</td><td>%s</td><td>%d/%d/%d</td></tr>\n",Gasto,descricao,categoria,dia,mes,ano);
        } 
      }
    z = fscanf (fp, "%lf" "%d" "%d" "%d" "%s" "%s", &Gasto,&  dia,&mes,&ano,descricao,categoria);  
    }
  }
  if(catscanf==2){
    while (z != EOF) {
      int testa = strcmp(c2, categoria);
      if(testa==0){
        if(Gasto<0){
            fprintf(f,"<tr><td style='color:   red'>%2.lf</td><td>%s</td><td>%s</td><td>%d/%d/%d</td></tr>\n",Gasto,descricao,categoria,dia,mes,ano);
          }
        else{
          fprintf(f,"<tr><td style='color:  green'>%2.lf</td><td>%s</td><td>%s</td><td>%d/%d/%d</td></tr>\n",Gasto,descricao,categoria,dia,mes,ano);
        } 
      }
    z = fscanf (fp, "%lf" "%d" "%d" "%d" "%s" "%s", &Gasto,&  dia,&mes,&ano,descricao,categoria);  
    }
  }
  if(catscanf==3){
    while (z != EOF) {
      int testa = strcmp(c3, categoria);
      if(testa==0){
        if(Gasto<0){
            fprintf(f,"<tr><td style='color:   red'>%2.lf</td><td>%s</td><td>%s</td><td>%d/%d/%d</td></tr>\n",Gasto,descricao,categoria,dia,mes,ano);
          }
        else{
          fprintf(f,"<tr><td style='color:  green'>%2.lf</td><td>%s</td><td>%s</td><td>%d/%d/%d</td></tr>\n",Gasto,descricao,categoria,dia,mes,ano);
        } 
      }
    z = fscanf (fp, "%lf" "%d" "%d" "%d" "%s" "%s", &Gasto,&  dia,&mes,&ano,descricao,categoria);  
    }
  }
  if(catscanf==4){
    while (z != EOF) {
      int testa = strcmp(c4, categoria);
      if(testa==0){
        if(Gasto<0){
            fprintf(f,"<tr><td style='color:   red'>%2.lf</td><td>%s</td><td>%s</td><td>%d/%d/%d</td></tr>\n",Gasto,descricao,categoria,dia,mes,ano);
          }
        else{
          fprintf(f,"<tr><td style='color:  green'>%2.lf</td><td>%s</td><td>%s</td><td>%d/%d/%d</td></tr>\n",Gasto,descricao,categoria,dia,mes,ano);
        } 
      }
    z = fscanf (fp, "%lf" "%d" "%d" "%d" "%s" "%s", &Gasto,&  dia,&mes,&ano,descricao,categoria);  
    }
  }
  if(catscanf==5){
    while (z != EOF) {
      int testa = strcmp(c5, categoria);
      if(testa==0){
        if(Gasto<0){
            fprintf(f,"<tr><td style='color:   red'>%2.lf</td><td>%s</td><td>%s</td><td>%d/%d/%d</td></tr>\n",Gasto,descricao,categoria,dia,mes,ano);
          }
        else{
          fprintf(f,"<tr><td style='color:  green'>%2.lf</td><td>%s</td><td>%s</td><td>%d/%d/%d</td></tr>\n",Gasto,descricao,categoria,dia,mes,ano);
        } 
      }
    z = fscanf (fp, "%lf" "%d" "%d" "%d" "%s" "%s", &Gasto,&  dia,&mes,&ano,descricao,categoria);  
    }
  
  }

  fprintf(f,"</table>\n");
  fprintf(f,"</center>");
  fprintf(f,"</body>\n</html>");
  fclose(f);
  puts("");
  puts("Relátorio Categórico Gerado Com sucesso!!");
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

void LimpaDados(){
  char arquivo[100];
  puts(" ");
  puts("-------------------------------");
  puts("Digite Exatamente como o arquivo está salvo!");
  puts("Exemplo: 'ExEmPlo.txt' ou 'exemplo.html':");
  puts("-------------------------------");
  puts(" ");
  puts("Digite o arquivo que deseja remover:");
  scanf("%s",arquivo);
  FILE * arq = fopen ( arquivo, "r" );
    if ( arq ) {
        fclose(arq);
        puts(" ");
        printf("Removido Com Sucesso"); 
        puts(" ");
        remove(arquivo);
    }
    else{ 
      puts(" ");
        printf("Nao existe nenhum arquivo com o nome de '%s'",arquivo);
      puts(" ");
    }
    getchar();
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
    puts("Opção 5 - Relatório Por Categoria");
    puts("Opção 6 - Limpar Dados");
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
        RelatorioCat();
        break;
      case 6:
        LimpaDados();
        break;
      case 0:
        puts("Obrigado Por Utilizar o gerenciador Financeiro");
        exit(0);
        break;
      default:
        puts("Você digitou um número inválido Digite novamente");
    }
  }
}
 
int main(void){
  menu();
  return 0;
 }


