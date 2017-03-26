#include <bits/stdc++.h>

using namespace std;

stack<char> pila;

void clear(){
    while(pila.size() > 0) pila.pop();
}

int main() {

    int casos, con;
    char cad[1001];
    scanf("%d", &casos);

    while(casos--){
        scanf("%s", &cad);
        con = 0;
        clear();
        int y = strlen(cad);

        for(int i = 0; i < y; i++){
            if(cad[i] == '.') continue;

            if(cad[i] == '<'){
                pila.push(cad[i]);
            }else{
                if(pila.size() == 0) continue;
                if(pila.top() == '<'){
                    pila.pop();
                    con++;
                }
            }
        }

        printf("%d\n", con);
    }

    return 0;
}
