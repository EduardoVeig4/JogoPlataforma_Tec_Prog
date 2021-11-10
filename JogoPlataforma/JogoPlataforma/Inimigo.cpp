#include "Inimigo.h"
#include<stdlib.h>
#include<time.h>

Inimigo::Inimigo() :
	Entidade(90, 90) {
	sf::Texture mario;
	
	mario.loadFromFile("aa.png");
	corpo.setTexture(&mario, true);
	corpo.setFillColor(sf::Color::Yellow);
	corpo.setPosition(rand() % 900+100, rand() % 500+100);
}
Inimigo::~Inimigo(){}