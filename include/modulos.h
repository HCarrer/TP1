#ifndef MODULOS_H
#define MODULOS_H


class MAA;
class MAU;
class MAC;
class MAR;

class MSA;
class MSU;
class MSC;
class MSR;

#include <string>
#include <vector>
#include "interfaces.h"

//////////////////Modulos de Apresentacao//////////////

class MAA : public IAA {
    friend class Builder;
public:
    void executar() override;
    //~MAA(){}
private:
    void autenticar() override;
};


class MAU : public IAU {
    friend class Builder;
public:
    void executar() override;
    void verPerfil() override;
    void verCaronas() override;
    //~MAU(){}
};



class MAC : public IAC {
    friend class Builder;
public:
    //~MAC(){}
    void executar() override;
    void criarCarona() override;
};



class MAR : public IAR {
    friend class Builder;
public:
    //~MAR(){}
    void executar() override;
};



//////////////////Modulos de Servico//////////////
class MSA : public ISA {
    friend class Builder;
public:
    //~MSA(){}
    bool autenticar(Email&, Senha&) override;
};


class MSU : public ISU {
    friend class Builder;
public:
    bool cadastrar(Usuario&, Conta&) override;
    bool descadastrar(Email&) override;
    Usuario infoLoggedUser(char*) override;
};


class MSC : public ISC {
    friend class Builder;
public:
    bool cadastrarCarona(Carona&) override;
    bool descadastrarCarona(CodigoDeCarona&) override;
    void pesquisarCarona(Cidade&, Estado&, Cidade&, Estado&, Data&) override;
};


class MSR : public ISR {
    friend class Builder;
public:
    bool reservar(Reserva&) override;
    bool cancelarReserva(Reserva&) override;
    Carona listarReservas(CodigoDeCarona&) override;
};

#endif // MODULOS_H
