#include "../personagens-hpp/Papainoel.hpp"

Papainoel::Papainoel(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Papainoel::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Papainoel::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Papainoel::pegarDescricao() 
{
    return "HOHOHO Papai noel chegou";
}