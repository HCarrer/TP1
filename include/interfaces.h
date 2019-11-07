#ifndef INTERFACES_H
#define INTERFACES_H

#include "dominios.h"
#include <stdexcept>

using namespace std;

class IAAutenticacao;
class ISAutenticacao;

class IAAutenticacao {
public:
    virtual bool autenticar() throw(runtime_error) = 0;

    virtual void setCntrSAutenticacao(ISAutenticacao *) = 0;

    virtual ~IAAutenticacao() {}
};

class ISAutenticacao {
public:
    virtual bool autenticar( Email&,  Senha&) throw(runtime_error) = 0;

    virtual ~ISAutenticacao() {}
};

#endif // INTERFACES_H
