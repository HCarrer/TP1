#ifndef STUBS_H
#define STUBS_H

#include "interfaces.h"
#include <stdexcept>
#include <iostream>

using namespace std;

class StubSAutenticacao:public ISAutenticacao {
public:
    std::string TRIGGER_FALHA = "a2#$%";
    std::string TRIGGER_ERRO_DE_SISTEMA = "a3#$%";

    bool autenticar(Email&, Senha&) throw(runtime_error);
};

#endif // STUBS_H
