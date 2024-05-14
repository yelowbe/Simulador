#ifndef PAPAINOEL
#define PAPAINOEL
#include "../core-simulador-hpp/Personagem.hpp"
class Papainoel : public Personagem
{
    public:
        Papainoel(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif