#ifndef CONTROLADORAS_H
#define CONTROLADORAS_H

#include "dominios.h"
#include "interfaces.h"

#include <stdexcept>
#include <iostream>
#include <cstdlib>

using namespace std;

class CntrIAAutenticacao:public IAAutenticacao {
private:
    ISAutenticacao *cntrSAutenticacao;

public:
    bool autenticar() throw(runtime_error);

    void setCntrSAutenticacao(ISAutenticacao*);
};

void inline CntrIAAutenticacao::setCntrSAutenticacao(ISAutenticacao *cntrSAutenticacao){
    this->cntrSAutenticacao = cntrSAutenticacao;
}

#endif // CONTROLADORAS_H
