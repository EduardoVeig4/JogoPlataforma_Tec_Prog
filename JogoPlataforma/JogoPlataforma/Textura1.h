#pragma once
#include <SFML/Graphics.hpp>	
class Textura1{
protected:
	sf::Texture inimigo_comum;
	sf::Texture arqueiro;
	sf::Texture fase1;
	sf::Texture fase2;
	sf::Texture gameover;
	sf::Texture player;
	sf::Texture bala_imagem;

public:
	Textura1();
	~Textura1();
};

