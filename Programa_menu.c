#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"
#include "menus.h"


int main()
{
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
                        
                        break;
                        
                  case 5:
                        break;
                              
                  default:
                        printf ("\n\n ******************************* opcao invalida ********************************");
                        printf ("Pressione <ENTER> para retornar ao menu");
            }
            system("cls");
             
      }while (opcao!=4);

      return 0;
}

