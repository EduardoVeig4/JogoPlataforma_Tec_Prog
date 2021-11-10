#pragma once
#include <SFML/Graphics.hpp>
#include "Ente.h"
class Entidade: public Ente{
protected:
	sf::RectangleShape corpo;
	//sf::RenderWindow* janela;
	int x;
	int y;
public:
	Entidade();
	Entidade(float xx, float yy);
	~Entidade();
	void imprimir();
	void setJanela(sf::RenderWindow* window);
	void setSize(float x, float y);
	void setCor(int x, int y, int z, int zz);
	int getPositionx();
	int getPositiony();
	void setTextura(const char*textura);

};
