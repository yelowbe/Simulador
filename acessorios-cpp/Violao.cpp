#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/Violao.hpp"

Violao::Violao(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Violao::gerarForcaAtaque()
{
    return maxForca - minForca;
}

string Violao::gerarRuidoAtaque()
{
    return "musica legiao urbana";
}
