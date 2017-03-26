#include <stdio.h>

int main(){

    int i, j, arr[] = {-1, 0, 1, 2, 3, 4, 4, 3, 2, 1, 0, -1};
    char l;
    double acum, matriz[12][12];
    //30
    while(scanf("%s", &l) != EOF){

        for(i = 0; i < 12; i++){
            for(j = 0; j < 12; j++){
                scanf("%lf", &matriz[i][j]);
            }
        }

        acum = 0;
        for(i = 0; i < 12; i++){
            for(j = 0; j <= arr[i]; j++){
                acum += matriz[i][j];
                //printf("valor de matriz = %lf", matriz[i][j])
            }
        }

        printf("%.1f\n", ((l == 'S')? acum: (acum / 30)));
    }

    return 0;
}
