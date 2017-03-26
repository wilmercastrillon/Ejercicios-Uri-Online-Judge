#include <bits/stdc++.h>

using namespace std;

stack<char> pila;
char cad[1001];

void clear(){
    while(pila.size() > 0) pila.pop();
}

int main() {
    bool yes;

    while(scanf("%s", &cad) != EOF){
        int y = strlen(cad);
        yes = true;
        clear();

        for(int i = 0; i < y; i++){
            if(cad[i] == '('){
               pila.push('(');
               continue;
            }

            if(cad[i] == ')'){
                if(pila.size() == 0){
                    yes = false;
                    break;
                }else
                    pila.pop();
            }
        }
        printf((yes && pila.size() == 0)? "correct\n":"incorrect\n");
    }

    return 0;
}
