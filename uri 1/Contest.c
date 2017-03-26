#include <stdio.h>
typedef int bool;
#define true 1
#define false 0

bool uno, dos, tres, cuatro;

int main() {

    int n, m, i, j, aux, res;
    while(1){
        scanf("%d %d", &n, &m);
        if(n == 0) break;

        int con[n], pro[m];
        memset(con, 0, sizeof(con));
        memset(pro, 0, sizeof(pro));
        uno = dos = tres = cuatro = true;
        res = 0;

        for(i = 0; i < n; i++)
            for(j = 0; j < m; j++){
                scanf("%d", &aux);
                if(aux == 1){
                    con[i]++;
                    pro[j]++;
                }
            }

        for(i = 0; i < n; i++)
            if(con[i] == m){
                uno = false;
                break;
            }
        if(uno) res++;

        for(i = 0; i < m; i++)
            if(pro[i] == 0){
                dos = false;
                break;
            }
        if(dos) res++;

        for(i = 0; i < m; i++)
            if(pro[i] == n){
                tres = false;
                break;
            }
        if(tres) res++;

        for(i = 0; i < n; i++)
            if(con[i] == 0){
                cuatro = false;
                break;
            }
        if(cuatro) res++;

        printf("%d\n", res);
    }

    return 0;
}
