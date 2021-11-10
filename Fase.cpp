#include "Fase.h"

Fase::Fase() :
	Ente(id++) {
	janela = NULL;
	image.loadFromFile("background.png");
	texture.loadFromImage(image);
	texture.setRepeated(true);
	sprite.setTexture(&texture,true);
	sprite.setSize(sf::Vector2f(1000, 1000));
	sprite.setFillColor(sf::Color::Cyan);
}
Fase::~Fase() {
}
void Fase::executar() {
	janela->draw(sprite);
	//imprimir();
}