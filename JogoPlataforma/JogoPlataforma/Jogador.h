#pragma once
#include <SFML/Graphics.hpp>
#include"Entidade.h"
#include "Textura1.h"
class Jogador:public Entidade,public Textura1{
private:
	
	float dy;
	sf::RectangleShape bala;
	int vivo;
public:
	Jogador();
	~Jogador();
	void mover();
	void setDy(float dyy);
	void atirar();
	void executar();
	sf::RectangleShape getBala();
	void setbala(float x, float y);
	void morrer(int i);
	int getVivo();
};

