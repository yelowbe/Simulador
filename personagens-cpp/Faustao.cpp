#include "../personagens-hpp/Faustao.hpp"

Faustao::Faustao(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Faustao::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Faustao::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Faustao::pegarDescricao() 
{
    return "Churrasqueira controle remoto";
}