#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "menus.h"
#include "funcoes.h"

// FUNÇÕES UTILITARIAS
void linhas(int qtde){ int i; for (i = 0; i < qtde; i++) { printf("*"); }}
void cabecalho(char titulo[70]){linhas(80); printf("\n\n\t\t\t%s\n\n", titulo); linhas(80);}
void retornar(){printf("\n\n Pressione <ENTER> para retornar ao menu.");getch();}
void invalida(){ puts(""); linhas(30); printf(" opcao invalida "); linhas(30); retornar();}

// MENUS
void menu(){
      int opcao;
      do{        
            opcao = menu_principal();
            switch (opcao)
            {                 
                  case 1:
                        do{
                              opcao= menu_figuras_planas();
                              figuras_planas(opcao);
                        }while (opcao!=0);
                        break;
                  
                  case 2:    
                        do        
                        {
                              opcao = menu_geometricos();
                              geometricos(opcao);
                        }while(opcao!=0);
                        break;   
                  
                  case 3:
                        do       
                        {
                              opcao = menu_conversao_medidas();
                              conversao_medidas(opcao);
                        } while(opcao!=0);
                        break;
                  case 4:   
                        do       
                        {
                              opcao = menu_operacoes_matematicas();
                              operacoes_matematicas(opcao);
                        }while(opcao!=0);
                        break;
                        
                  case 5:
                        break;
                              
                  default:
                        invalida();
            }
            system("cls");
             
      }while (opcao!=5);
}

int menu_principal(){
      int opcao;
      cabecalho("P R O G R A M A   M E N U");
      puts("\n\n \tEscolha a opcao desejada:");
      puts("\n\t 1 - Calcular area de figuras planas");
      puts("\t 2 - Calcular volume de solidos geometricos"); 
      puts("\t 3 - Conversao de medidas");
      puts("\t 4 - Operacoes Matematicas");
      puts("\t 5 - Sair");
      printf("\n\t\t\t\tOpcao: "); 
      scanf (" %d", &opcao);
      system("cls");
      return opcao;
}

int menu_figuras_planas(){
      int opcao;
      cabecalho("AREA DE FIGURAS PLANAS");
      puts("\t\n Escolha a opcao desejada:");
      puts("\n\t 1 - Circulo");
      puts("\t 2 - Losango");
      puts("\t 3 - Paralelogramo");
      puts("\t 4 - Trapezio");
      puts("\t 5 - Triangulo");
      puts("\t 0 - Retornar");
      printf("\t\t\t\tOpcao: ");
      scanf(" %d", &opcao);
      system("cls");
      return opcao;
}

int menu_geometricos(){
      int opcao;                       
      cabecalho("VOLUME DE SOLIDOS GEOMETRICOS");        
      puts("\n\t Escolha a opcao desejada:");
      puts("\n\t 1 - Esfera");
      puts("\t 2 - Cone Circular");
      puts("\t 3 - Cilindro");
      puts("\t 4 - Paralelepipedo");
      puts("\t 0 - Retornar");
      printf("\n\t\t\t\tOpcao: "); scanf(" %d", &opcao);
      system("cls");
      return opcao;
}

int menu_conversao_medidas(){
      int opcao;
      cabecalho("CONVERSAO DE MEDIDAS");
      puts("\n\t\t\t Escolha a opcao desejada");
      puts("\n Converter:\n");
      printf(" 1 - Metros para Jardas");                                   printf("\t\t\t\t 5 - Litros para Galoes\n");
      printf("\n 2 - Jardas para Metros");                                 printf("\t\t\t\t 6 - Galoes para Litros\n");
      printf("\n 3 - Centimetros cubicos para Polegadas cubicas");         printf("\t 7 - Quilogramas para Libras\n");
      printf("\n 4 - Polegadas cubicas para Centimetros cubicos");         printf("\t 8 - Libras para Quilogramas\n");       
      puts("\n\n\t\t 0 - Retornar");
      printf("\t\t\t\tOpcao: ");
      scanf(" %d", &opcao);
      system("cls");
      return opcao;
}

int menu_operacoes_matematicas(){
      int opcao;                       
      cabecalho("OPERACOES MATEMATICAS");       
      puts("\n\t Escolha a opcao desejada:");
      puts("\n\t 1 - Soma");
      puts("\t 2 - Subtracao");
      puts("\t 3 - Multiplicacao");
      puts("\t 4 - Divisao");
      puts("\t 5 - Resto da Divisao");
      puts("\t 0 - Retornar");
      printf("\n\t\t\t\tOpcao: "); scanf(" %d", &opcao);
      system("cls");
      return opcao;
}


// MENUS CALCULOS
void figuras_planas(int opcao){
      float dia, area, d1, d2, base, alt;
      float A, B, C;
      switch(opcao)    
      {
            case 1:           
                  cabecalho("1. AREA DO CIRCULO");      
                  printf("\n\tDigite o diametro do circulo: ");
                  scanf(" %f", &dia);
                  area= circulo(dia);
                  printf("\n\n\n\n\n\t>>>  A area do circulo e %f", area);
                  printf("\n\n\n");linhas(84);
                  retornar(); break;
                  
            case 2:
                  cabecalho("2. AREA DO LOSANGO");
                  printf("\n\tDigite a diagonal 1: "); scanf(" %f", &d1);
                  printf("\n\tDigite a diagonal 2: "); scanf(" %f", &d2);
                  area= losango(d1,d2);
                  printf("\n\n\t>>>  A area do losango e %f", area);
                  printf("\n\n\n");linhas(84);
                  retornar(); break;
            
            case 3:
                  cabecalho("3. AREA DO PARALELOGRAMO");
                  printf("\n\n\n\tDigite a base: "); scanf(" %f", &base);
                  printf("\n\tDigite a altura: "); scanf(" %f", &alt);
                  area=paralelogramo(base,alt);
                  printf("\n\n\t>>> A area do paralelogramo e %f", area);
                  printf("\n\n\n\n");linhas(84);
                  retornar(); break;
                  
            case 4:
                  cabecalho("4. AREA DO TRAPEZIO");
                  printf("\n\tDigite a base maior: "); scanf(" %f", &B);
                  printf("\n\tDigite a base menor: "); scanf(" %f", &base); 
                  printf("\n\tDigite a altura: "); scanf(" %f", &alt);
                  area=trapezio(B,base,alt);
                  printf("\n\n\t>>> A area do trapezio e: %f", area);
                  printf("\n\n\n\n");linhas(84); 
                  retornar(); break;
            
            case 5:
                  cabecalho("5. AREA DO TRIANGULO");
                  printf("\n\tDigite o lado A do triangulo: "); scanf(" %f", &A);
                  printf("\n\tDigite o lado B do triangulo: "); scanf(" %f", &B);
                  printf("\n\tDigite o lado C do triangulo: "); scanf(" %f", &C);
                  
                  if(A==B && B==C)
                  {
                        area=tri_equi(A);
                        printf(" \n\n\n\t\tTriangulo Equilatero >>> area: %f", area);
                        printf("\n\n");linhas(84); 
                        retornar();
                  
                  }
                  else if(A==B || A==C || B==C)
                  {
                        area=tri(A,B);
                        printf("\n\n\n\t\tTriangulo Isosceles >>> area: %f", area);
                        printf("\n\n");linhas(84); 
                        retornar();
                  } 
                  else
                  {
                        area=tri(A,B);
                        printf("\n\n\n\t\tTriangulo Escaleno >>> area: %f", area);
                        printf("\n\n");linhas(84); 
                        retornar();
                  }
                  break;
            case 0: 
                  break;
                  
            default:
                  invalida();
            }
      system("cls");
}

void geometricos(int opcao){
      float dia, vol, alt, comp, larg;
      switch (opcao)
            {
            case 1:
                  cabecalho("1. VOLUME DA ESFERA");
                  printf("\nDigite o diametro: "); scanf(" %f", &dia);
                  vol=esf(dia);         
                  printf("\n\n\n\t>>> O volume da esfera e %f.",  vol);
                  linhas(84);
                  retornar(); break;
                  
            case 2:
                  cabecalho("2. VOLUME DO CONE CIRCULAR");
                  printf("\n\tDigite o diametro da base:  "); scanf(" %f",&dia);
                  printf("\n\tDigite altura:  "); scanf(" %f",&alt);
                  vol=cone(dia,alt); 
                  printf("\n\t>>> O volume do cone circular e %f.", vol );
                  linhas(84);
                  retornar(); break;
                        
            case 3:
                  cabecalho("3. VOLUME CILINDRO");
                  printf("\n\tDigite o diametro: "); scanf(" %f",&dia);
                  printf("\n\tDigite altura:  "); scanf(" %f",&alt);
                  vol= cilindro(dia,alt);
                  printf("\n\t>>>O volume do cilindro e %f", vol);
                  linhas(84);
                  retornar(); break;
                  
            case 4:
                  cabecalho("4. VOLUME DO PARALELEPIPEDO");
                  printf("\n\tDigite o comprimento:  "); scanf(" %f",&comp);
                  printf("\n\tDigite a largura:  "); scanf(" %f",&larg);
                  printf("\n\tDigite a altura:  "); scanf(" %f",&alt);
                  vol=paral(comp, larg, alt);
                  printf("\n\t>>>O volume do paralelepipedo e %f.",vol);
                  linhas(84);
                  retornar(); break;
            
            case 0:
                  break;       

            default:
                  printf ("\n\n ******************************* opcao invalida ********************************");
                  printf ("Pressione <ENTER> para retornar ao menu");
                  getch();
            }
      system("cls");
}

void conversao_medidas(int opcao){
      float num, result;
      switch (opcao)
      {
            case 1:
                  cabecalho("1. METROS EM JARDAS");
                  printf("\n\n\tDigite o valor em metros a ser convertido: ");
                  scanf(" %f", &num);
                  result= m_j(num);
                  printf("\n\n\t\t %f m = %f yd", num, result);
                  printf("\n\n\n\n\n");linhas(86);
                  retornar(); break;
      
            case 2:
                  cabecalho("2. JARDAS EM METROS");
                  printf("\n\n\tDigite o valor em jardas a ser convertido: ");
                  scanf(" %f", &num);
                  result= j_m(num);
                  printf("\n\n\t\t %f yd = %f m", num, result);
                  printf("\n\n\n\n\n");linhas(86);
                  retornar(); break;
            
            case 3:
                  cabecalho("3. CENTIMETROS CUBICOS EM POLEGADAS CUBICAS");         
                  printf("\n\n\tDigite o valor em centimetros cubicos a ser convertido: ");
                  scanf(" %f", &num);
                  result= cmcub_polcub(num);
                  printf("\n\n\t\t %f cm3 = %f in3", num, result);
                  printf("\n\n");linhas(86);
                  retornar(); break;
      
            case 4:
                  cabecalho("4. POLEGADAS CUBICAS EM CENTIMETROS CUBICOS");
                  printf("\nDigite o valor em polegadas cubicas a ser convertido: ");
                  scanf(" %f", &num);
                  result= polcub_cmcub(num);
                  printf("\n\n\t\t %f in3 = %f cm3", num, result);
                  printf("\n\n");linhas(86);
                  retornar(); break;

            case 5:
                  cabecalho("5. LITROS EM GALOES");
                  printf("\nDigite o valor em litros a ser convertido: ");
                  scanf(" %f", &num);
                  result= l_gl(num);
                  printf("\n\n\t\t %f L = %f gal", num, result);
                  printf("\n\n");linhas(86);
                  retornar(); break;
            
            case 6:
                  cabecalho("6. GALOES EM LITROS");
                  printf("\nDigite o valor em galoes a ser convertido: ");
                  scanf(" %f", &num);
                  result= gl_l(num);
                  printf("\n\n\t\t %f gal = %f L", num, result);
                  printf("\n\n");linhas(86);
                  retornar(); break;
            
            case 7:
                  cabecalho("7. QUILOGRAMAS EM LIBRAS");
                  printf("\nDigite o valor em quilogramas a ser convertido: ");
                  scanf(" %f", &num);
                  result= kg_lib(num);
                  printf("\n\n\t\t %f kg = %f lb", num, result);
                  printf("\n\n");linhas(86);
                  retornar(); break;                                                                                                               
            
            case 8:
                  cabecalho("8. LIBRAS EM QUILOGRAMAS");
                  printf("\nDigite o valor em libras a ser convertido: ");
                  scanf(" %f", &num);
                  result= lib_kg(num);
                  printf("\n\n\t\t %f lb = %f kg", num, result);
                  printf("\n\n");linhas(86);
                  retornar(); break;
            
            case 0:
                  break;
        
            default:
            invalida();
      }
      system("cls");
}

void operacoes_matematicas(int opcao){
      switch (opcao)
      {
      case 1:
            soma();
            break;

      case 2:
            subtracao();
            break;

      case 3:
            multiplicacao();
            break;

      case 4:
            divisao();
            break;

      case 5:
            restodiv();
            break;

      case 0:
            break;
      
      default:
            invalida();
            break;
      }
      system("cls");
}
