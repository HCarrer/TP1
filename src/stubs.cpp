#include "stubs.h"

bool StubSAutenticacao::autenticar( Email &email, Senha &senha) throw(runtime_error) {
    cout << endl << "StubSAutenticacao::autenticar" << endl ;


    cout << "Email = " << email.getEmail() << endl ;
    cout << "Senha     = " << senha.getSenha() << endl ;


    if(senha.getSenha()==TRIGGER_FALHA) {
        cout << "Falha" << endl;
        return false;
    }
    else if(senha.getSenha()==TRIGGER_ERRO_DE_SISTEMA) {
        throw runtime_error("Erro de Sistema");
    }

    return true;
}
