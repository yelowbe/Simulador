#include "../personagens-hpp/Dracula.hpp"

Dracula::Dracula(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Dracula::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Dracula::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Dracula::pegarDescricao() 
{
    return "Eu sou o Rei da noite hahahahahhaha";
}