#pragma once
#include<SFML/Graphics.hpp>
#include "Entidade.h"
#include"Jogador.h"
#include "Inimigo.h"
#include "Menu.h"
#include "Ente.h"
#include "Fase.h"
class Jogo{
private:
	sf::RenderWindow janela;
	Jogador jogador;
	Inimigo inimigo;
	Menu menu;
	Fase fase;
public:
	Jogo();
	~Jogo();
	void executar();
	void gravidade();
	void inicializar();
};

