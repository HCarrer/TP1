
#ifndef INTERFACES_H
#define INTERFACES_H

class IAA;
class IAU;
class IAC;
class IAR;

class ISA;
class ISU;
class ISC;
class ISR;


#include <string>
#include <iostream>
#include <vector>


#include "dominios.h"
#include "entidades.h"
#include "controller.h"
#include "builder.h"

/*
class IAA {
    friend class Builder;
public:
    virtual void executar() = 0;
    virtual void autenticar() = 0;
protected:
    Controller* controller = nullptr;
    ISA* servico = nullptr;
};
*/

class IAA {
    friend class Builder;
 public:
    virtual void executar() = 0;
    //virtual ~IAA(){}
 private:
    virtual void autenticar() = 0;
 protected:
    Controller* controller = nullptr;
    ISA* servico = nullptr;
};


class IAU {
    friend class Builder;
public:
    //virtual ~IAU(){}
    virtual void executar() = 0;
    virtual void verPerfil() = 0;
    virtual void verCaronas() = 0;
protected:
    Controller* controller = nullptr;
    ISU* servico = nullptr;
};

class IAC {
    friend class Builder;
public:
    //virtual ~IAC(){}
    virtual void executar() = 0;
    virtual void criarCarona() = 0;
protected:
    Controller* controller = nullptr;
    ISC* servico = nullptr;
};

class IAR {
    friend class Builder;
public:
    //virtual ~IAR(){}
    virtual void executar() = 0;
protected:
    Controller* controller = nullptr;
    ISR* servico = nullptr;
};





class ISA {
    friend class Builder;
public:
    virtual bool autenticar(Email&, Senha&) = 0;
    //virtual ~ISA(){}
protected:
    IAA* iaa = nullptr;
};

class ISU {
    friend class Builder;
public:
    //virtual ~ISU(){}
    virtual bool cadastrar(Usuario&, Conta&) = 0;
    virtual bool descadastrar(Email&) = 0;
    virtual Usuario infoLoggedUser(char*) = 0;
protected:
    IAU* iau = nullptr;
};

class ISC {
    friend class Builder;
public:
    //virtual ~ISC(){}
    virtual bool cadastrarCarona(Carona&) = 0;
    virtual bool descadastrarCarona(CodigoDeCarona&) = 0;
    virtual void pesquisarCarona(Cidade&, Estado&, Cidade&, Estado&, Data&) = 0;
protected:
    IAC* iac = nullptr;
};

class ISR {
    friend class Builder;
public:
    //virtual ~ISR(){}
    virtual bool reservar(Reserva&) = 0;
    virtual bool cancelarReserva(Reserva&) = 0;
    virtual Carona listarReservas(CodigoDeCarona&) = 0;
protected:
    IAR* iar = nullptr;
};

#endif // INTERFACES_H
