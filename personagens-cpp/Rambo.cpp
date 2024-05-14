#include "../personagens-hpp/Rambo.hpp"

Rambo::Rambo(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Rambo::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Rambo::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Rambo::pegarDescricao() 
{
    return "Você é a doença, e eu sou a cura";
}