#pragma once
#include<SFML/Graphics.hpp>
#include "Entidade.h"
#include "Jogador.h"
#include "Inimigo.h"
#include "Menu.h"
#include "Ente.h"
#include "Fase.h"
#include "ListaEntidades.h"

class Jogo{
private:
	sf::RenderWindow janela;
	Jogador *jogador1;
	Menu menu;
	//Fase fase;

	ListaEntidades* LEs; 
	Fase* fase1;

public:
	Jogo();
	~Jogo();
	void executar();
	void gravidade();
	void inicializar();
};

