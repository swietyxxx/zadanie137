#include <stdio.h>
#include <stdlib.h>

#define TRUE    1
#define FALSE   0

#define OPCJA_PIERWIASTEK_ROWNANIA_LINIOWEGO 1
#define OPCJA_PIERWIASTEK_ROWNANIA_KWADRATOWEGO   2
#define OPCJA_WYJSCIE   0

void pierwiastek_liniowy();
void pierwsiastek_kwadratowy();

int main() {
    int wybrana_opcja, wyjscie_z_programu;

    wyjscie_z_programu = FALSE;
    while(TRUE) {
        printf("\nOpcje programu:\n");
        printf("===============\n");
        printf("%d %s\n", OPCJA_PIERWIASTEK_ROWNANIA_LINIOWEGO,  " - pierwiastek liniowy");
        printf("%d %s\n", OPCJA_PIERWIASTEK_ROWNANIA_KWADRATOWEGO,    " - pierwiastek kwadratowy");
        printf("%d %s\n", OPCJA_WYJSCIE,    " - koniec");
        printf("\nPodaj kod polecenia: ");
        scanf("%d", &wybrana_opcja);

        switch(wybrana_opcja) {
            case OPCJA_PIERWIASTEK_ROWNANIA_LINIOWEGO:   pierwiastek_liniowy();          break;
            case OPCJA_PIERWIASTEK_ROWNANIA_KWADRATOWEGO:    pierwsiastek_kwadratowy();            break;
            case OPCJA_WYJSCIE:     wyjscie_z_programu = TRUE;  break;
            default:                printf("Niepoprawny kod polecenia.\n");

        }
        if (wyjscie_z_programu == TRUE)
            break;
    }

    return EXIT_SUCCESS;
}

void pierwiastek_liniowy() {

    double a,b,x;
    printf("%s","Podaj a = ");
    scanf("%f",&a);
    printf("%s","Podaj b = ");
    scanf("%f",&b);
    if ((a == 0) && (b == 0))
    {
    printf("%s","Rownanie tozsamosciowe");
    }
    else
        if (a == 0)
        {
        printf("%s","Rownanie sprzeczne");
        }
        else
            {
            x=-b/a;
            printf("%s %.2f","X wynosi:",x);
            }
}


void pierwsiastek_kwadratowy() {


}
