#ifndef TESOURA
#define TESOURA

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class Tesoura: public ArmaAtaque
{
    public:
        Tesoura(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif