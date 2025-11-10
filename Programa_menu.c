#include <stdio.h>
#include <stdlib.h>

//funcao que calcula a area do circulo
float circulo(float dia) 
      {float r, area, PI;
      PI=3.14159265;
      r = dia/2;
      area = PI*r*r;
      return(area);}

//funcao que calcula a area do losango
float losango(float D1,float D2) 
      {float area;
      area=(D1*D2)/2;
      return(area);}

// funcao que calcula a area do paralelogramo
float paralelogramo(float alt, float base)
      {float area;
      area=base*alt;
      return(area);}

//funcao que calcula a area do trap�zio
float trapezio(float B_maior, float b_menor,float alt)
      {float area;
      area=((B_maior+b_menor)/2)*alt;
      return(area);}

//funcao que calcula a area do triangulo equilatero
float tri_equi(float A, float B, float C)
      {float area;
      area= ((A*A)/4)*1.732050808;
      return (area);}

//funcao que calcula a area do triangulo
float tri(float A, float B, float C)
      {float area;
      area=(B*A)/2;
      return(area);}

//funcao que calcula o volume da esfera
float esf(float dia)
      {float r, vol;
      r=dia/2;
      vol=((4*3.14159265)/3)*r*r*r;
      return (vol);}

//funcao que calcula o volume do cone
float cone(float dia, float alt)
      {float r, vol;
      r=dia/2;
      vol=(3.14159265/3)*r*r*alt;
      return(vol);}

//funcao que calcula o volume do cilindro
float cilindro(float dia, float alt)
      {float r, vol;
      r=dia/2;
      vol=3.14159265*r*r*alt;
      return(vol);}

//funcao que calcula o volume do paralelep�pedo
float paral(float comp, float larg, float alt)
      {float vol;
      vol=comp*larg*alt;
      return(vol);}

//funcao que converte metros para jardas
float m_j(float num)
      {float total;
      total= num*1.09361;
      return (total);}
                   
//funcao que converte jardas para metros
float j_m(float num)
      {float total;
      total= num/1.09361;
      return(total);}

//funcao que converte cent. cub. para pol cub
float cmcub_polcub(float num)
      {float total;
      total=num/16.387064;  
      return(total);}

//funcao que converte pol cub. para cent. cub
float polcub_cmcub(float num)
      {float total;
      total= num*16.387064; 
      return(total);}

//funcao que converte litros em galoes
float l_gl(float num)
      {float total;
      total= num*0.2642;
      return(total);}

//funcao que converte galoes em litros
float gl_l(float num)
      {float total;
      total= num/0.2642;
      return(total);}

//funcao que converte quilos em libras
float kg_lib(float num)
      {float total;
      total= num*2.20462262;
      return(total);}

//funcao que converte libras em quilos
float lib_kg(float num)
      {float total;
      total= num/2.20462262;
      return(total);}   
      
main()
{
      int opcao;
      
      //primeiro looping
      do{        
            //menu principal
            printf("********************************************************************************");
            puts  ("\n\n\t\t********** P R O G R A M A   M E N U **********");
            printf("\n\n********************************************************************************");
            puts("\n\n \tEscolha a opcao desejada:");
            
            puts("\n\t 1 - Calcular area de figuras planas");
            puts("\t 2 - Calcular volume de solidos geometricos"); 
            puts("\t 3 - Conversao de medidas");
            puts("\t 4 - Sair");
            printf("\n\t\t\t\tOpcao: "); scanf ("%d", &opcao);
            
            fflush(stdin); //limpa o buffer do teclado
            system("cls"); //limpa a tela
      
            switch (opcao) //escolha
            {                 
                  case 1:
                  //inicio do segundo looping
                  do
                  { 
                        //submenu 1
                        printf("\n\n********************************************************************************");         
                        puts("\n\n\t\t********** AREA DE FIGURAS PLANAS **********");
                        printf("\n\n********************************************************************************");
                        puts("\t\n Escolha a opcao desejada:");
                        puts("\n\t 1 - Circulo");
                        puts("\t 2 - Losango");
                        puts("\t 3 - Paralelogramo");
                        puts("\t 4 - Trapezio");
                        puts("\t 5 - Triangulo");
                        puts("\t 0 - Retornar");
                        printf("\t\t\t\tOpcao: ");
                        scanf("\n\t%d", &opcao);

                        fflush(stdin);          
                        system("cls");
                        
                        //declaracao das variaveis que serao usadas no switch
                        float dia, area, d1, d2, base, alt; 
                        float A, B, C;
                        
                        //segunda escolha
                        switch(opcao)    
                        {
                              case 1:           
                              printf("\n\n********************************************************************************");
                              puts("\n\n\t\t********** 1. AREA DO CIRCULO **********");     
                              printf("\n\n********************************************************************************");
                              printf("\n\tDigite o diametro do circulo: ");
                              scanf("%f", &dia);
                              area= circulo(dia);
                              printf("\n\n\n\n\n\t>>>  A area do circulo e %f", area);
                              printf("\n\n\n********************************************************************************");
                              printf("\n\n Pressione <ENTER> para retornar ao menu.");
                              getch(); break;
                                    
                              case 2:
                                    printf("\n\n********************************************************************************");
                                    puts("\n\n\t\t********** 2. AREA DO LOSANGO **********");
                                    printf("\n\n********************************************************************************");
                                    printf("\n\tDigite a diagonal 1: "); scanf("%f", &d1);
                                    printf("\n\tDigite a diagonal 2: "); scanf("%f", &d2);
                                    area= losango(d1,d2);
                                    printf("\n\n\t>>>  A area do losango e %f", area);
                                    printf("\n\n\n********************************************************************************");
                                    printf("\n\n Pressione <ENTER> para retornar ao menu.");
                                    getch(); break;
                              
                              case 3:
                                    printf("\n\n********************************************************************************");
                                    puts("\n\n\t\t********** 3. AREA DO PARALELOGRAMO **********");
                                    printf("\n\n********************************************************************************");
                                    printf("\n\n\n\tDigite a base: "); scanf("%f", &base);
                                    printf("\n\tDigite a altura: "); scanf("%f", &alt);
                                    area=paralelogramo(base,alt);
                                    printf("\n\n\t>>> A area do paralelogramo e %f", area);
                                    printf("\n\n\n\n********************************************************************************");
                                    printf("\n\n Pressione <ENTER> para retornar ao menu.");
                                    getch(); break;
                                    
                              case 4:
                                    printf("\n\n********************************************************************************");
                                    puts("\n\n\t\t********** 4. AREA DO TRAPEZIO **********");
                                    printf("\n\n********************************************************************************");        
                                    printf("\n\tDigite a base maior: "); scanf("%f", &B);
                                    printf("\n\tDigite a base menor: "); scanf("%f", &base); 
                                    printf("\n\tDigite a altura: "); scanf("%f", &alt);
                                    area=trapezio(B,base,alt);
                                    printf("\n\n\t>>> A area do trapezio e: %f", area);
                                    printf("\n\n********************************************************************************");
                                    printf("\n\n Pressione <ENTER> para retornar ao menu.");
                                    getch(); break;
                              
                              case 5:
                                    printf("\n\n********************************************************************************");
                                    puts("\n\n\t\t********** 5. AREA DO TRIANGULO **********");
                                    printf("\n\n********************************************************************************");
                                    printf("\n\tDigite o lado A do triangulo: "); scanf("%f", &A);
                                    printf("\n\tDigite o lado B do triangulo: "); scanf("%f", &B);
                                    printf("\n\tDigite o lado C do triangulo: "); scanf("%f", &C);
                                    if(A==B && B==C)
                                    {
                                          area=tri_equi(A,B,C);
                                          printf(" \n\n\n\t\tTriangulo Equilatero >>> area: %f", area);
                                          printf("\n\n********************************************************************************");
                                          printf("\n\n Pressione <ENTER> para retornar ao menu."); getch();
                                    
                                    }
                                    else if(A!=B && B!=C && A!=C)
                                    {
                                          area=tri(A,B,C);
                                          printf("\n\n\n\t\tTriangulo Escaleno >>> area: %f", area);
                                          printf("\n\n********************************************************************************");
                                          printf("\n\n Pressione <ENTER> para retornar ao menu.");
                                          getch();
                                    }
                                    else if(A==C && A!=B && B!=C||A==B&&A!=C&&B!=C||C==B&&C!=A&&B!=A)
                                    {
                                          area=tri(A,B,C);
                                          printf("\n\n\n\t\tTriangulo Isosceles >>> area: %f", area);
                                          printf("\n\n********************************************************************************");      
                                          printf("\n\n Pressione <ENTER> para retornar ao menu.");
                                          getch();
                                    }            
                                    break;
                              case 0: break;
                                    
                              default:
                                    printf    ("\n\n ******************************* opcao invalida ********************************");
                                    printf ("Pressione <ENTER> para retornar ao menu");
                                    getch();
                              }           //fecha o "segunda escolha"
                        system("cls"); 
                  }              //fecha o segundo looping

                  while (opcao!=0); //condicao para voltar para o submenu 1
                  break;//vai direto para o fim do primeiro switch sem testar os demais case      
                  
                  case 2:
                        //terceiro looping     
                        do        
                        {
                              // submenu 2
                              printf("\n\n********************************************************************************");
                              puts("\n\n\t\t********** VOLUME DE SOLIDOS GEOMETRICOS **********");
                              printf("\n\n\n********************************************************************************");          
                              puts("\n\t Escolha a opcao desejada:");
                              puts("\n\t 1 - Esfera");
                              puts("\t 2 - Cone Circular");
                              puts("\t 3 - Cilindro");
                              puts("\t 4 - Paralelepipedo");
                              puts("\t 0 - Retornar");
                              printf("\n\t\t\t\tOpcao: "); scanf("%d", &opcao);
                  
                              fflush(stdin);
                              system("cls");
                              
                              float dia, vol, alt, comp, larg;
                              switch (opcao)
                                    {
                                    case 1:
                                          printf("\n\n\n********************************************************************************");
                                          puts("\n\n\t\t********** 1. VOLUME DA ESFERA **********");
                                          printf("\n\n********************************************************************************");
                                          printf("\nDigite o diametro: "); scanf("%f", &dia);
                                          vol=esf(dia);         
                                          printf("\n\n\n\t>>> O volume da esfera e %f.",  vol);
                                          printf("\n\n\n********************************************************************************");
                                          printf("\n\n Pressione <ENTER> para retornar ao menu.");
                                          getch(); break;
                                          
                                    case 2:
                                          printf("\n\n\n********************************************************************************");
                                          puts ("\n\n\t\t********** 2. VOLUME DO CONE CIRCULAR **********");
                                          printf("\n\n********************************************************************************");
                                          printf("\n\tDigite o diametro da base:  "); scanf("%f",&dia);
                                          printf("\n\tDigite altura:  "); scanf("%f",&alt);
                                          vol=cone(dia,alt); 
                                          printf("\n\t>>> O volume do cone circular e %f.", vol );
                                          printf("\n\n\n********************************************************************************");
                                          printf("\n\n Pressione <ENTER> para retornar ao menu.");
                                          getch(); break;
                                                
                                    case 3:
                                          printf("\n\n\n********************************************************************************");
                                          puts("\n\n\t\t********** 3. VOLUME CILINDRO **********");
                                          printf("\n\n********************************************************************************");
                                          printf("\n\tDigite o diametro: "); scanf("%f",&dia);
                                          printf("\n\tDigite altura:  "); scanf("%f",&alt);
                                          vol= cilindro(dia,alt);
                                          printf("\n\t>>>O volume do cilindro e %f", vol);
                                          printf("\n\n\n********************************************************************************");
                                          printf("\n\n Pressione <ENTER> para retornar ao menu.");
                                          getch(); break;
                                          
                                    case 4:
                                          printf("\n\n\n********************************************************************************");
                                          puts("\n\n\t\t********** 4. VOLUME DO PARALELEPIPEDO **********");
                                          printf("\n\n********************************************************************************");
                                          printf("\n\tDigite o comprimento:  "); scanf("%f",&comp);
                                          printf("\n\tDigite a largura:  "); scanf("%f",&larg);
                                          printf("\n\tDigite a altura:  "); scanf("%f",&alt);
                                          vol=paral(comp, larg, alt);
                                          printf("\n\t>>>O volume do paralelepipedo e %f.",vol);
                                          printf("\n\n\n********************************************************************************");
                                          printf("\n\n Pressione <ENTER> para retornar ao menu.");
                                          getch(); break;
                                    
                                    case 0:
                                          break;       

                                    default:
                                          printf ("\n\n ******************************* opcao invalida ********************************");
                                          printf ("Pressione <ENTER> para retornar ao menu");
                                          getch();
                                    }              //fecha o terceiro switch 
                        
                        system("cls"); 
                        }while(opcao!=0); //condicao para voltar para o submenu 2
                        
                        break;   
                  
                  case 3:
                        do       
                        {
                              //submenu 3
                              printf("\n\n********************************************************************************");
                              puts("\n\n\t\t********** CONVERSAO DE MEDIDAS **********");
                              printf("\n********************************************************************************");
                              puts("\n\t\t\t Escolha a opcao desejada");
                              puts("\n Converter:\n");
                              printf(" 1 - Metros para Jardas");                                   printf("\t\t\t\t 5 - Litros para Galoes\n");
                              printf("\n 2 - Jardas para Metros");                                 printf("\t\t\t\t 6 - Galoes para Litros\n");
                              printf("\n 3 - Centimetros cubicos para Polegadas cubicas");         printf("\t 7 - Quilogramas para Libras\n");
                              printf("\n 4 - Polegadas cubicas para Centimetros cubicos");         printf("\t 8 - Libras para Quilogramas\n");       
                              puts("\n\n\t\t 0 - Retornar");
                              printf("\t\t\t\tOpcao: ");
                              scanf("\n\t%d", &opcao);
                              
                              system("cls");      
                              fflush(stdin);
                              
                              float num, result;
                              
                              switch (opcao)
                              {
                                    case 1:
                                          printf("\n\n********************************************************************************");
                                          puts("\n\n\t\t********** 1. METROS EM JARDAS **********");     
                                          printf("\n\n********************************************************************************");
                                          printf("\n\n\tDigite o valor em metros a ser convertido: ");
                                          scanf("%f", &num);
                                          result= m_j(num);
                                          printf("\n\n\t\t %f m = %f yd", num, result);
                                          printf("\n\n\n\n\n********************************************************************************");
                                          printf("\n\n Pressione <ENTER> para retornar ao menu.");
                                          getch(); break;
                              
                                    case 2:
                                          printf("\n\n********************************************************************************");
                                          puts("\n\n\t\t********** 2. JARDAS EM METROS **********");     
                                          printf("\n\n********************************************************************************");
                                          printf("\n\n\tDigite o valor em jardas a ser convertido: ");
                                          scanf("%f", &num);
                                          result= j_m(num);
                                          printf("\n\n\t\t %f yd = %f m", num, result);
                                          printf("\n\n\n\n\n********************************************************************************");
                                          printf("\n\n Pressione <ENTER> para retornar ao menu.");
                                          getch(); break;
                                    
                                    case 3:
                                          printf("\n\n********************************************************************************");
                                          puts("\n\n\t********* 3. CENTIMETROS CUBICOS EM POLEGADAS CUBICAS **********");     
                                          printf("\n\n********************************************************************************");          
                                          printf("\n\n\tDigite o valor em centimetros cubicos a ser convertido: ");
                                          scanf("%f", &num);
                                          result= cmcub_polcub(num);
                                          printf("\n\n\t\t %f cm3 = %f in3", num, result);
                                          printf("\n\n********************************************************************************");
                                          printf("\n\n Pressione <ENTER> para retornar ao menu.");
                                          getch(); break;
                              
                                    case 4:
                                          printf("\n\n********************************************************************************");
                                          puts("\n\n\t********** 4. POLEGADAS CUBICAS EM CENTIMETROS CUBICOS **********");     
                                          printf("\n\n********************************************************************************");
                                          printf("\nDigite o valor em polegadas cubicas a ser convertido: ");
                                          scanf("%f", &num);
                                          result= polcub_cmcub(num);
                                          printf("\n\n\t\t %f in3 = %f cm3", num, result);
                                          printf("\n\n********************************************************************************");
                                          printf("\n\n Pressione <ENTER> para retornar ao menu.");
                                    getch(); break;
                        
                                    case 5:
                                          printf("\n\n********************************************************************************");
                                          puts("\n\n\t\t********** 5. LITROS EM GALOES **********");     
                                          printf("\n\n********************************************************************************");
                                          printf("\nDigite o valor em litros a ser convertido: ");
                                          scanf("%f", &num);
                                          result= l_gl(num);
                                          printf("\n\n\t\t %f L = %f gal", num, result);
                                          printf("\n\n********************************************************************************");
                                          printf("\n\n Pressione <ENTER> para retornar ao menu.");
                                          getch(); break;
                                    
                                    case 6:
                                          printf("\n\n********************************************************************************");
                                          puts("\n\n\t\t********** 6. GALOES EM LITROS **********");     
                                          printf("\n\n********************************************************************************");
                                          printf("\nDigite o valor em galoes a ser convertido: ");
                                          scanf("%f", &num);
                                          result= gl_l(num);
                                          printf("\n\n\t\t %f gal = %f L", num, result);
                                          printf("\n\n********************************************************************************");
                                          printf("\n\n Pressione <ENTER> para retornar ao menu.");
                                          getch(); break;
                                    
                                    case 7:
                                          printf("\n\n********************************************************************************");
                                          puts("\n\n\t********** 7. QUILOGRAMAS EM LIBRAS **********");     
                                          printf("\n\n********************************************************************************");
                                          printf("\nDigite o valor em quilogramas a ser convertido: ");
                                          scanf("%f", &num);
                                          result= kg_lib(num);
                                          printf("\n\n\t\t %f kg = %f lb", num, result);
                                          printf("\n\n********************************************************************************");
                                          printf("\n\n Pressione <ENTER> para retornar ao menu.");
                                          getch(); break;                                                                                                               
                                    
                                    case 8:
                                          printf("\n\n********************************************************************************");
                                          puts("\n\n\t********* 8. LIBRAS EM QUILOGRAMAS **********");     
                                          printf("\n\n********************************************************************************");          
                                          printf("\nDigite o valor em libras a ser convertido: ");
                                          scanf("%f", &num);
                                          result= lib_kg(num);
                                          printf("\n\n\t\t %f lb = %f kg", num, result);
                                          printf("\n\n********************************************************************************");
                                          printf("\n\n Pressione <ENTER> para retornar ao menu.");
                                          getch(); break;
                                    
                                    case 0:break;
                                                
                                    default:
                                    printf ("\n\n ******************************* opcao invalida ********************************");
                                    printf ("Pressione <ENTER> para retornar ao menu");
                                    getch();
                              }
                  
                        system("cls");
                        } while(opcao!=0);      //cond. volta para o terceiro submenu
                        break;   
                        
                  case 4:
                        break;
                              
                  default:
                        printf ("\n\n ******************************* opcao invalida ********************************");
                        printf ("Pressione <ENTER> para retornar ao menu");
            }      //fecha o primeito switch
            getch();
            system("cls");
             
      }while (opcao!=4);            //fecha o primeiro looping

      return 0;
}

