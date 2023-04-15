#include "aop.h"

struct SecurityAspect {
    AOP_OBJECT
    // lógica de autenticação de usuários
    void (*authenticate)();
    // lógica de autorização de usuários
    void (*authorize)();
};

void authenticate() {
    // lógica de autenticação de usuários
}

void authorize() {
    // lógica de autorização de usuários
}

void my_function() {
    // lógica da função
}

int main() {
    struct SecurityAspect securityAspect = {AOP_OBJECT_INITIALIZER(authenticate, authorize)};
    aop_weave((void*) my_function, (void*) &securityAspect);
    my_function();
    return 0;
}
