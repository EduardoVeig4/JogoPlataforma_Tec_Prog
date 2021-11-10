#pragma once
#include <SFML/Graphics.hpp>
#include"Entidade.h"
class Jogador:public Entidade{
private:
	
	float dy;
	sf::RectangleShape bala;
public:
	Jogador();
	~Jogador();
	void mover();
	void setDy(float dyy);
	void atirar();
	void executar();
};

