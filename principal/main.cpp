#include <iostream>
#include <string>
#include "../acessorios-hpp/Rosa.hpp"
#include "../acessorios-hpp/Colher.hpp"
#include "../acessorios-hpp/Escudo.hpp"
#include "../personagens-hpp/Chaves.hpp"
#include "../core-simulador-hpp/Simulador.hpp"
#include "../acessorios-hpp/Bastao.hpp"
#include "../acessorios-hpp/Bazuca.hpp"
#include "../acessorios-hpp/Espada.hpp"
#include "../acessorios-hpp/Tesoura.hpp"
#include "../acessorios-hpp/Violao.hpp"
#include "../acessorios-hpp/Capacete.hpp"
#include "../acessorios-hpp/Armadura.hpp"
#include "../acessorios-hpp/Panela.hpp"
#include "../acessorios-hpp/Porta.hpp"
#include "../acessorios-hpp/Livro.hpp"
#include "../personagens-hpp/Dracula.hpp"
#include "../personagens-hpp/Faustao.hpp"
#include "../personagens-hpp/Jedi.hpp"
#include "../personagens-hpp/Papainoel.hpp"
#include "../personagens-hpp/Rambo.hpp"

using std::cout;
using std::endl;
using std::string;

int main()
{
    ArmaAtaque* arma  = new Rosa("Super Rosa Amarela",0,10);
    ArmaAtaque* arma2 = new Colher("Colher de Pata",0,50);
    ArmaAtaque* arma3  = new Bastao("Bastao de basebol",0,70);
    ArmaAtaque* arma4  = new Bazuca("Bazuca militar",30,150);
    ArmaAtaque* arma5  = new Espada("Espada de diamante",0,80);
    ArmaAtaque* arma6  = new Tesoura("Tesoura sagrada dos montes",0,60);
    ArmaAtaque* arma7  = new Violao("Violao de aco",90,90);

    ArmaDefesa* escudo = new Escudo("Latao", 1);
    ArmaDefesa* escudo2 = new Armadura("Ferro", 3);
    ArmaDefesa* escudo3 = new Capacete("Couro", 2);
    ArmaDefesa* escudo4 = new Livro("Enciclopedia", 1);
    ArmaDefesa* escudo5 = new Panela("Pressao", 2);
    ArmaDefesa* escudo6 = new Porta("Porta de carro", 3);
    
    Personagem* p1 = new Chaves(1, "Chaves", 60, arma7, escudo5);
    Personagem* p2 = new Dracula(2, "Dracula o empalador", 100, arma, escudo);
    Personagem* p3 = new Papainoel(3, "Papai noel", 80, arma2, escudo4);
    Personagem* p4 = new Faustao(4, "Faustao", 50, arma6, escudo2);
    Personagem* p5 = new Rambo(5, "RAMBO", 110, arma4, escudo6);
    Personagem* p6 = new Jedi(6, "Darth vader", 90, arma5, escudo3);

    Simulador* simulador = new Simulador();
    simulador->adicionarPersonagem(p1, 1);
    simulador->adicionarPersonagem(p2, 2);
    simulador->adicionarPersonagem(p3, 1);
    simulador->adicionarPersonagem(p4, 2);
    simulador->adicionarPersonagem(p5, 1);
    simulador->adicionarPersonagem(p6, 2);
    
    simulador->iniciarSimulacao();

    system("pause");
    return 0;
}