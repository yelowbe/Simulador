#ifndef RAMBO
#define RAMBO
#include "../core-simulador-hpp/Personagem.hpp"
class Rambo : public Personagem
{
    public:
        Rambo(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif