#include "Jogador.h"
#include<iostream>
using namespace std;

Jogador::Jogador():
	Entidade(100,100){	
	dy = 0.f;
	//image.loadFromFile("aaa.png");
	//sf::Texture textura;
	//textura.loadFromImage(image);
	
	
	
}
Jogador::~Jogador(){
	dy = 0;
	corpo.setFillColor(sf::Color::Black);
}
void Jogador::mover() {
	/**/
	if (corpo.getPosition().x + corpo.getSize().x <= janela->getSize().x) {
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
			corpo.move(0.16f, 0.f);
		}
	}
	if (corpo.getPosition().x >= 0) {
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
			corpo.move(-0.16f, 0.f);
		}
	}
	if (corpo.getPosition().y >= 0 && (int)corpo.getPosition().y + corpo.getSize().y >= janela->getSize().y - 5) {
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
			dy = -0.75f;
			corpo.move(0, dy);
		}
	}
	if (corpo.getPosition().y + corpo.getSize().y <= janela->getSize().y) {
		corpo.move(0, dy);

	}
}
void Jogador::setDy(float dyy) {
	dy += dyy;
}
void Jogador::atirar() {
	
	if (sf::Mouse::isButtonPressed(sf::Mouse::Button::Left)) {
		if (bala.getPosition().x - corpo.getPosition().x > 1000) {
			bala.setPosition(corpo.getPosition().x + corpo.getSize().x, corpo.getPosition().y);
			bala.setFillColor(sf::Color::Blue);
			bala.setSize(sf::Vector2f(20, 10));
		}
	}
	;
	bala.move(0.8f, 0.f);
	janela->draw(bala);
	//janela->draw(sprite);
}
void Jogador::executar() {
	atirar();
	mover();
	imprimir();
}