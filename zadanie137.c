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
        printf("Opcje programu:\n");
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


}

void pierwsiastek_kwadratowy()
{
    double a, b, c;
    double delta,x1,x2;
    printf("podaj a\n");
    scanf("%lf",&a);
        if(a==0){
        printf("a nie moze byc zerem\n");
        }
        else {
        printf("podaj b\n");
        scanf("%lf",&b);
        printf("podaj c\n");
        scanf("%lf",&c);
        delta = (b*b -(4*a*c));
             if(delta>0){
             x1=(-b+sqrt(delta))/(2*a);
             x2=(-b-sqrt(delta))/(2*a);
             printf("x1=%.2f, x2=%.2f\n",x1,x2);
             }
             else if(delta==0){
                    x1=(-b/(2*a));
                    printf("x1=%lf\n", x1);
                    }
                    else if(delta<0)
                          printf("Nie ma rozwiazan\n");
      }

}
