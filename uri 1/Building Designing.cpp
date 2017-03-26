#include <bits/stdc++.h>

using namespace std;
priority_queue<int> azul, azul2, rojo, rojo2;

int solved(priority_queue<int> a, priority_queue<int> b) {
        if(a.size() == 0) return 1;
        int x = a.top(), aux, con = 1;
        a.pop();
        bool flag = false, salir = true;

        while (salir) {
            salir = false;

            if (flag) {
                while (a.size() > 0) {
                    aux = a.top();
                    a.pop();
                    if (aux < x) {
                        x = aux;
                        con++;
                        salir = true;
                        flag = false;
                        break;
                    }
                }
            } else {
                while (b.size() > 0) {
                    aux = b.top();
                    b.pop();
                    if (aux < x) {
                        x = aux;
                        salir = true;
                        flag = true;
                        con++;
                        break;
                    }
                }
            }
        }
        return con;
}

void clear(){
    while (azul.size() > 0 ) azul.pop();
    while (azul2.size() > 0 ) azul2.pop();
    while (rojo.size() > 0 ) rojo.pop();
    while (rojo2.size() > 0 ) rojo2.pop();
}

int main() {
        int casos, subcasos, x;
        scanf("%d", &casos);

        for (int i = 0; i < casos; i++) {
            scanf("%d", &subcasos);
            clear();

            for (int j = 0; j < subcasos; j++) {
                scanf("%d", &x);
                if (x < 0) {
                    rojo.push(abs(x));
                    rojo2.push(abs(x));
                } else {
                    azul.push(x);
                    azul2.push(x);
                }
            }
            printf("%d\n", max(solved(azul, rojo), solved(rojo2, azul2)));
        }
        return 0;
}
