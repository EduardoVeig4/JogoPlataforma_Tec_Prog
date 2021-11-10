#pragma once
#include "Ente.h"
#include<SFML/Graphics.hpp>	
class Fase :public Ente{
private:
	sf::Image image;
	sf::Texture texture;
	sf::RectangleShape sprite;
	sf::RenderWindow* janela;
public:
	Fase();
	~Fase();
	void executar();
};

