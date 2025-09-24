#include <stdio.h>
#include <math.h>
//-----------------------------------
#define _USE_MATH_DEFINES
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif
#ifndef M_E
#define M_E 2.71828182845904523536
#endif

int main(void){
    float n1, n2, resultado;
    int op;
    
    do{
        printf("-----------------------------------\n");
        printf("\tCALCULADORA MASSA\n");
        printf("-----------------------------------\n\n");
        printf("PARA SAIR DIGITE '0' EM OPERACAO\n\n");
        printf("DIGITE O PRIMEIRO NÚMERO: ");
        scanf("%f", &n1);
        printf("-----------------------------------\n");
        printf("1 - ADICAO\n");
        printf("2 - SUBTRACAO\n");
        printf("3 - MULTIPLICACAO\n");
        printf("4 - DIVISAO\n");
        printf("5 - EXPONENCIACAO\n");
        printf("6 - RAIZ QUADRADA\n");
        printf("7 - SENO COSSENO TANGENTE\n");
        printf("8 - LOGARITIMO\n");
        printf("9 - EXPONENCIAl\n");
        printf("-----------------------------------\n");
        printf("ESCOLHA A OPERACAO: ");
        scanf("%d", &op);
            switch(op){
            case 1: printf("ADICAO");
                    printf("\nDIGITE O SEGUNDO NÚMERO: ");
                    scanf("%f", &n2);
                    resultado = n1 + n2;
                    printf ("\nO RESULTADO É: %.2f\n",resultado);
                break;
            case 2: printf("SUBTRACAO");
                    printf("\nDIGITE O SEGUNDO NÚMERO: ");
                    scanf("%f", &n2);
                    resultado = n1 - n2;
                    printf ("\nO RESULTADO É: %.2f\n",resultado);
                break;
            case 3: printf("MULTIPLICACAO");
                    printf("\nDIGITE O SEGUNDO NÚMERO: ");
                    scanf("%f", &n2);
                    resultado = n1 * n2;
                    printf ("\nO RESULTADO É: %.2f\n",resultado);
                break;
            case 4: printf("DIVISAO");
                    printf("\nDIGITE O DIVISOR: ");
                    scanf("%f", &n2);
                    if (n2==0){
                    printf("\nDIVISAO POR 0 DETECTADA!!!");
                    return 0;
                    }
                    else {
                    resultado = n1 / n2;
                    printf ("\nO RESULTADO É: %.2f\n",resultado);
                    }
                break;
            case 5: printf("EXPONENCIACAO");
                    printf("\nDIGITE O EXPOENTE: ");
                    scanf("%f", &n2);
                    resultado = pow(n1, n2);
                    printf ("\nO RESULTADO É: %.2f\n",resultado);
                break;
            case 6: printf("RAIZ QUADRADA");
                    resultado = sqrt(n1);
                    printf ("\nO RESULTADO É: %.2f\n",resultado);
                break;
            case 7: float seno = sin(n1 * M_PI/180);
                    float cosseno = cos(n1 * M_PI/180);
                    float tangente = tan(n1 * M_PI/180);
                    printf("\nSENO: %.2f\n",seno);
                    printf("\nCOSSENO: %.2f\n",cosseno);
                    printf("\nTANGENTE: %.2f\n",tangente);
                break;
            case 8: printf("LOGARITIMO");
                    resultado = log10(n1);
                    printf ("\nO RESULTADO É: %.2f\n",resultado);
                break;
            case 9: printf("EXPONENCIAL");
                    resultado = exp(n1);
                    printf ("\nO RESULTADO É: %.2f\n",resultado);
                break;
            default: if(op==0){
                    break;}   
                    else {
                    printf("OPERACAO INVALIDA!");}
                break;
            }
    }  while(op!=0);
}