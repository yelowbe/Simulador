#ifndef DRACULA
#define DRACULA
#include "../core-simulador-hpp/Personagem.hpp"
class Dracula : public Personagem
{
    public:
        Dracula(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif