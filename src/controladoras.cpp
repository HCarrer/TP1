#include "controladoras.h"

//Controlador de Interface de Apresentacao de Autenticacao
bool CntrIAAutenticacao::autenticar() throw(runtime_error) {
    bool resultado;

    std::string dados;
    Email email;
    Senha senha;

    while(true) {
        try {
            cout << "Email: ";
            cin >> dados;
            email.setEmail(dados);
            cout << "Senha: ";
            cin >> dados;
            senha.setSenha(dados);
            break;
        }
        catch (const invalid_argument &exp) {
            cout << exp.what() << endl;
        }
    }
                //Controlador de Servico de Autenticacao
    resultado = cntrSAutenticacao->autenticar(email, senha);

    return resultado;

}
