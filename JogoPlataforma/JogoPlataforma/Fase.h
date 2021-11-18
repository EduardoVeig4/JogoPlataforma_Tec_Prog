#pragma once
#include "Ente.h"
#include "Inimigo.h"
#include "Jogador.h"
#include "ListaEntidades.h"

#include<SFML/Graphics.hpp>	

class Fase :public Ente{
private:
	sf::Image image;
	sf::Texture texture;
	sf::RectangleShape sprite;
	sf::RenderWindow* janela;

	ListaEntidades *listaEntidades;
	Inimigo* i1;
	Jogador* j1; // Ponteiro para o jogador instânciado em 'Jogo.h'
	void InicializaElementos();

public:
	Fase(Jogador *j1);
	~Fase();

	ListaEntidades* getListaEntidades() { return listaEntidades; }

	void executar();

};

