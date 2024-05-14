#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/Tesoura.hpp"

Tesoura::Tesoura(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Tesoura::gerarForcaAtaque()
{
    return maxForca - minForca;
}

string Tesoura::gerarRuidoAtaque()
{
    return "flim flim";
}
