#pragma once
#include <SFML/Graphics.hpp>
#include "Ente.h"
#include "Lista.h"
#include "ListaEntidades.h"

class Entidade: public Ente{
protected:
	sf::RectangleShape corpo;
	//sf::RenderWindow* janela;
	sf::Vector2f posicao; // vetor com as coordenadas x e y da entidade
	float x;
	float y;

public:
	Entidade();
	Entidade(float sizex, float sizey);
	~Entidade();
	void imprimir();
	void setJanela(sf::RenderWindow* window);
	void setSize(float x, float y);
	void setCor(int x, int y, int z, int zz);

	void setPos(float x, float y);

	void setx();
	void sety();
	void setxy(float x,float y);
	float getx();
	float gety();
	virtual void ajustar();

	
};
