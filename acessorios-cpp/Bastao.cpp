#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/Bastao.hpp"

Bastao::Bastao(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Bastao::gerarForcaAtaque()
{
    return maxForca - minForca;
}

string Bastao::gerarRuidoAtaque()
{
    return "pow pow";
}
