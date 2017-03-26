#include <stdio.h>

int main(){
    double x;
    double n[] = {100.0, 50.0, 20.0, 10.0, 5.0, 2.0};
    double m[] = {1, 0.5, 0.25, 0.1, 0.05, 0.01};
    int i, aux;

    while (scanf("%lf", &x) != EOF){

        printf("NOTAS:\n");
        for(i = 0; i < 6; i++){
            aux = (int) (x / n[i]);
            x -= ((double)aux) * n[i];
            printf("%d nota(s) de R$ %.2f\n", aux, n[i]);
        }

        printf("MOEDAS:\n");
        for(i = 0; i < 6; i++){
            aux = (int) (x / m[i]);
            if( (aux + 1) - (x / m[i]) < 1e-8) aux++;
            //printf("%d resultado de %lf dividido %lf\n", aux, x ,m[i]);
            x -= ((double)aux) * m[i];
            printf("%d moeda(s) de R$ %.2f\n", aux, m[i]);
        }
    }
    return 0;
}
