#pragma once
#include "Ente.h"
#include "Textura1.h"
class Menu :public Ente,public Textura1{
private:
	sf::RectangleShape fundo;
	sf::RectangleShape tela_fim;
public:
	Menu();
	~Menu();
	void executar();
	void morto();
	void pausa();
};

