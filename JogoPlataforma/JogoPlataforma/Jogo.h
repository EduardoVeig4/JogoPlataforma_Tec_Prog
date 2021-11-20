#pragma once
#include<SFML/Graphics.hpp>
#include "Entidade.h"
#include"Jogador.h"
#include "Inimigo_comum.h"
#include "Arqueiro.h"
#include "Menu.h"
#include "Ente.h"
#include "Fase.h"
#include "Fase1.h"
#include "Entidade.h"
#include "ListaEntidades.h"

class Jogo{
private:
	sf::RenderWindow janela;
	sf::RectangleShape fundo;
	Jogador* jogador;
	Inimigo_comum* inimigo;
	Inimigo_comum* inim;
	Inimigo_comum* inim2;
	Arqueiro* arqueiro;
	Menu menu;
	Fase fase;

	ListaEntidades* LEs;

	int fase1;
	int menu1;
public:
	Jogo();
	~Jogo();
	void executar();
	void gravidade();
	void inicializar();
	void eventos();
	void printar();
	void reiniciar();

	void inicializaElementos(); // Preenche a lista com as entidades
};

