#include <stdio.h>
#include <stdlib.h>

int main () {

    //Variáveis
    int opc;
    float x, y, result;
    const float pi = 3.14;

    do {
        system ("cls");

        //Menu
        printf ("\nCALCULO DA AREA DE FIGURAS GEOMETRICAS\n");
        printf ("======================================");
        printf ("\nSELECIONE A OPCAO DESEJADA:\n");
        printf ("\n(1) QUADRADO\n(2) RETANGULO\n(3) TRIANGULO\n(4) CIRCULO\n(0) FINALIZAR\n");
        opc = getch ();
        system ("cls");

        //Condições
        switch (opc) {
        case '1':
            printf ("\nDIGITE O VALOR DO COMPRIMENTO: ");
            scanf ("%f", &x);
            printf ("\nDIGITE O VALOR DA LARGURA: ");
            scanf ("%f", &y);
            system ("cls");

            if (x == 0 || y == 0) {
                printf ("\nVALORES DEVEM SER DIFERENTES DE ZERO!!\n\n");
                system ("pause");
            } else {
                if (x != y) {
                    printf ("\nVALORES DEVEM SER IGUAIS!!\n\n");
                system ("pause");
                } else {
                    result = x * y;
                    printf ("\nO VALOR DA AREA DESTE QUADRADO E DE %.2f\n\n", result);
                system ("pause");
                }
            }
            break;
        case '2':
            printf ("\nDIGITE O VALOR DO COMPRIMENTO: ");
            scanf ("%f", &x);
            printf ("\nDIGITE O VALOR DA LARGURA: ");
            scanf ("%f", &y);
            system ("cls");

            if (x == 0 || y == 0) {
                printf ("\nVALORES DEVEM SER DIFERENTES DE ZERO!!\n\n");
                system ("pause");
            } else {
                    result = x * y;
                    printf ("\nO VALOR DA AREA DESTE RETANGULO E DE %.2f\n\n", result);
                system ("pause");
                }
            break;
        case '3':
            printf ("\nDIGITE O VALOR DA BASE: ");
            scanf ("%f", &x);
            printf ("\nDIGITE O VALOR DA ALTURA: ");
            scanf ("%f", &y);
            system ("cls");

            if (x == 0 || y == 0) {
                printf ("\nVALORES DEVEM SER DIFERENTES DE ZERO!!\n\n");
                system ("pause");
            } else {
                    result = (x * y)/ 2;
                    printf ("\nO VALOR DA AREA DESTE TRIANGULO E DE %.2f\n\n", result);
                system ("pause");
                }
            break;
        case '4':
            printf ("\nDIGITE O VALOR DO RAIO: ");
            scanf ("%f", &x);
            system ("cls");

            if (x == 0) {
                printf ("\nVALORES DEVEM SER DIFERENTES DE ZERO!!\n\n");
                system ("pause");
            } else {
                    result = pi *(x * x);
                    printf ("\nO VALOR DA AREA DESTE CIRCULO E DE %.2f\n\n", result);
                system ("pause");
                }
            break;
        }
    } while (opc != '0'); //Loop

    printf ("\nOBRIGADO PELA UTILIZACAO DO PROGRAMA!!\nVOLTE SEMPRE!!  :)\n\n");
    system ("pause");

    return 0;
}