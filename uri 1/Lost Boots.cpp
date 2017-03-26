#include <bits/stdc++.h>

using namespace std;

int der[31], izq[31];

int main() {

    int subcasos, m, con;
    char l;

    while(scanf("%d", &subcasos) != EOF){
        con = 0;
        for(int i = 0; i < 31; i++) izq[i] = der[i] = 0;

        for(int i = 0; i < subcasos; i++){
            scanf("%d %c", &m, &l);

            if(l == 'D'){
                if(izq[m - 30]){
                    izq[m - 30]--;
                    con++;
                }else{
                    der[m - 30]++;
                }
            }else{
                if(der[m - 30]){
                    der[m - 30]--;
                    con++;
                }else{
                    izq[m - 30]++;
                }
            }
        }

        printf("%d\n", con);
    }

    return 0;
}
