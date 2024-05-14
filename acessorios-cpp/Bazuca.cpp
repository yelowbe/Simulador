#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/Bazuca.hpp"

Bazuca::Bazuca(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Bazuca::gerarForcaAtaque()
{
    return maxForca - minForca;
}

string Bazuca::gerarRuidoAtaque()
{
    return "cabum!!";
}
