#include "Jogador.h"
#include<iostream>
using namespace std;

Jogador::Jogador():
	Entidade(100,100){	
	dy = 0.f;
	bala.setPosition(9000, 9000);
	bala.setTexture(&bala_imagem);
	bala.setSize(sf::Vector2f(40, 20));
	vivo = 1;
	corpo.setTexture(&player);

	//image.loadFromFile("aaa.png");
	//sf::Texture textura;
	//textura.loadFromImage(image);
}
Jogador::~Jogador(){
	dy = 0;

}
void Jogador::mover() {

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
		if ((float)bala.getPosition().x - (float) corpo.getPosition().x > fabs(1000)) {
			bala.setPosition(corpo.getPosition().x + corpo.getSize().x, corpo.getPosition().y + 50);
			bala.setTexture(&bala_imagem, true);
			//bala.setSize(sf::Vector2f(20, 10));
		}
	}
	bala.move(0.8f, 0.f);
	janela->draw(bala);
	//janela->draw(sprite);
}
void Jogador::executar() {
	if (vivo == 1) {
		setx();
		sety();
		atirar();
		mover();
		imprimir();
	}
}
sf::RectangleShape Jogador::getBala() {
	return bala;
}
void Jogador::setbala(float x, float y) {
	bala.setPosition(x, y);
}
void Jogador::morrer(int i) {
	if (i == 1) {
		vivo = 1;
	}
	else vivo = 0;
}
int Jogador::getVivo() {
	return vivo;
}