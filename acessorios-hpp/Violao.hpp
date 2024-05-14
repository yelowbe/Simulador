#ifndef VIOLAO
#define VIOLAO

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class Violao : public ArmaAtaque
{
    public:
        Violao(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif