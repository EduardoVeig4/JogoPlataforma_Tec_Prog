#pragma once
#include <SFML/Graphics.hpp>
#include "Ente.h"
class Entidade: public Ente{
protected:
	sf::RectangleShape corpo;
	//sf::RenderWindow* janela;
	float x;
	float y;
public:
	Entidade();
	Entidade(float xx, float yy);
	~Entidade();
	void imprimir();
	void setJanela(sf::RenderWindow* window);
	void setSize(float x, float y);
	void setCor(int x, int y, int z, int zz);
	void setx();
	void sety();
	void setxy(float x,float y);
	float getx();
	float gety();
	virtual void ajustar();
};
