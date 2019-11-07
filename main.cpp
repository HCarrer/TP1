//Copyright Henrique Carrer e Guilherme Fleury

#include <iostream>
#include "dominios.h"
#include "entidades.h"
#include "testes.h"
#include "interfaces.h"
#include "controladoras.h"
#include "stubs.h"

using namespace std;

int main() {

    IAAutenticacao *cntrIAAutenticacao;
    cntrIAAutenticacao = new CntrIAAutenticacao();

    ISAutenticacao *stubSAutenticacao;
    stubSAutenticacao = new StubSAutenticacao();

    cntrIAAutenticacao->setCntrSAutenticacao(stubSAutenticacao);

    try {
        bool resultado = cntrIAAutenticacao->autenticar();

        if(resultado) {
            cout << "Sucesso na autenticacao." << endl;
        }
        else {
            cout << "Erro na autenticacao." << endl;
        }
    }
    catch(const runtime_error &exp) {
        cout << "Erro de sistema." << endl;
    }

    delete cntrIAAutenticacao;
    delete stubSAutenticacao;

    return 0;
}
