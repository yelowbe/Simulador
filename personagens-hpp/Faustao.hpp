#ifndef FAUSTAO
#define FAUSTAO
#include "../core-simulador-hpp/Personagem.hpp"
class Faustao : public Personagem
{
    public:
        Faustao(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif