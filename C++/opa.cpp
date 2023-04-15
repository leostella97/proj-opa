#include <iostream>
#include "securityAspect.h"
using namespace std;

void myFunction() {
    // lógica da função
}

int main() {
    securityAspect security;
    myFunction();
    return 0;
}

aspect securityAspect {
public:
    pointcut void authentication() {
        // lógica de autenticação de usuários
    }
    pointcut void authorization() {
        // lógica de autorização de usuários
    }
    advice execution() : authentication(), authorization() {
        cout << "Executando aspecto de segurança" << endl;
    }
};
