#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "funcoes.h"

#ifndef PI
#define PI 3.14159265
#endif


// FUNÇOES PARA CALCULO DE ÁREA
float circulo(float dia) {float r, area; r = dia/2; area = PI*r*r; return(area);} //funcao que calcula a area do circulo
float losango(float D1,float D2) {float area; area=(D1*D2)/2; return(area);} //funcao que calcula a area do losango
float paralelogramo(float alt, float base) {float area; area=base*alt; return(area);} // funcao que calcula a area do paralelogramo
float trapezio(float B_maior, float b_menor,float alt){float area; area=((B_maior+b_menor)/2)*alt; return(area);} //funcao que calcula a area do trapézio
float tri_equi(float A) {float area; area= ((A*A)/4)*1.732050808; return (area);} //funcao que calcula a area do triangulo equilatero
float tri(float A, float B){float area; area=(B*A)/2; return(area);} //funcao que calcula a area do triangulo


// FUNCOES DE CALCULO DE VOLUME
float esf(float dia){float r, vol; r=dia/2; vol=((4*PI)/3)*r*r*r; return (vol);} //funcao que calcula o volume da esfera
float cone(float dia, float alt){float r, vol; r=dia/2; vol=(PI/3)*r*r*alt; return(vol);} //funcao que calcula o volume do cone
float cilindro(float dia, float alt){float r, vol; r=dia/2; vol=PI*r*r*alt; return(vol);} //funcao que calcula o volume do cilindro
float paral(float comp, float larg, float alt) {float vol; vol=comp*larg*alt; return(vol);} //funcao que calcula o volume do paralelepípedo

// FUNCOES DE CONVERTER
float m_j(float num){float total; total= num*1.09361; return (total);} //funcao que converte metros para jardas
float j_m(float num){float total; total= num/1.09361; return(total);} //funcao que converte jardas para metros
float cmcub_polcub(float num) {float total; total=num/16.387064; return(total);} //funcao que converte cent. cub. para pol cub
float polcub_cmcub(float num) {float total; total= num*16.387064;  return(total);} //funcao que converte pol cub. para cent. cub
float l_gl(float num){float total; total= num*0.2642; return(total);} //funcao que converte litros em galoes
float gl_l(float num){float total; total= num/0.2642; return(total);} //funcao que converte galoes em litros
float kg_lib(float num){float total; total= num*2.20462262; return(total);} //funcao que converte quilos em libras
float lib_kg(float num){float total; total= num/2.20462262; return(total);}  //funcao que converte libras em quilos

// FUNCOES DE OPERAÇÕES MATEMATICAS
void soma(){
    int n1, n2;
    printf("Digite o primeiro numero: "); scanf("%d", &n1);
    printf("Digite o segundo numero: "); scanf("%d", &n2);
    printf("O Resultado e: %d. \nPressione uma tecla para continuar", n1 + n2);getch();
}

void subtracao(){
    int n1, n2;
    printf("Digite o primeiro numero: "); scanf("%d", &n1);
    printf("Digite o segundo numero: "); scanf("%d", &n2);
    printf("O Resultado da subtracao e: %d. \nPressione uma tecla para continuar", n1 - n2);getch();
}

void multiplicacao(){
    int n1,n2;
    printf("Digite o primeiro numero: "); scanf("%d", &n1);
    printf("Digite o segundo numero: "); scanf("%d", &n2);
    printf("O Resultado da multiplicacao e: %d. \nPressione uma tecla para continuar", n1 * n2);getch();
}

void divisao(){
    float n1, n2;
    printf("Digite o primeiro numero: "); scanf("%f", &n1);
    printf("Digite o segundo numero: "); scanf("%f", &n2);
    if(n2 == 0){
            printf("operacao invalida, nao e possivel dividir por 0\nPressione uma tecla para continuar");getch();
    }else{
            printf("O Resultado da divisao e: %.2f. \nPressione uma tecla para continuar", n1 / n2);getch();
    }  
}

void restodiv(){
    int n1,n2, resultado;
    printf("Digite o primeiro numero: "); scanf("%d", &n1);
    printf("Digite o segundo numero: "); scanf("%d", &n2);
    if(n2 == 0){
        printf("operacao invalida, nao e possivel dividir por 0.\nPressione uma tecla para continuar");getch();
    }else{
        printf("O Resto da divisao e: %d. \nPressione uma tecla para continuar", n1 % n2);getch();
    }
}


      
