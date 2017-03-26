#include <bits/stdc++.h>

using namespace std;

int main() {

    int casos, x, can;
    double aux, acum;
    char com[51];
    scanf("%d", &casos);
    map<string, double> mapa;

    while(casos--){
        scanf("%d", &x);
        mapa.clear();
        while(x--){
            scanf("%s %lf", &com, &aux);
            mapa[(string) com] = aux;
        }

        scanf("%d", &x);
        acum = 0;
        while(x--){
            scanf("%s %d", com, &can);
            acum += (double)(mapa[(string)com] * can);
        }
        printf("R$ %.2f\n", acum);
    }

    return 0;
}
