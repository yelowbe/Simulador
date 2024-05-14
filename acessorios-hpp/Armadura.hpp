#ifndef ARMADRA
#define ARMADURA

#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../core-simulador-hpp/ArmaDefesa.hpp"
class Armadura : public ArmaDefesa
{
    public:
        Armadura (string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif