#include "Arqueiro.h"
#include <math.h>
#include <iostream>
using namespace std;

Arqueiro::Arqueiro() :Inimigo() { 
	dy = 0;
	corpo.setTexture(&arqueiro);
	flecha.setSize(sf::Vector2f(30, 10));
	flecha.setFillColor(sf::Color::Black);
	flecha.setPosition(9000.f, 9000.f);
	vidas = 3;
	flag_mover = 0;
	
}
Arqueiro::~Arqueiro() {
	corpo.setTexture(NULL);
}
void Arqueiro::setDy(float dyy) {
	dy += dyy;
}
void Arqueiro::atirar() {
	if (fabs((float)flecha.getPosition().x - corpo.getPosition().x) > 1000 && fabs(corpo.getPosition().x -pJogador->getx()) <100000) {
		flecha.setPosition(corpo.getPosition().x, corpo.getPosition().y+50);
		flecha.setFillColor(sf::Color::Magenta);
		
	}
	flecha.move(-0.5f, 0.f);
	janela->draw(flecha);
	if (fabs(flecha.getPosition().x - pJogador->getx()) < 100 && fabs(flecha.getPosition().y - pJogador->gety()) < 100) {
		flecha.setPosition(9000, 9000);
		//Codigo pra matar o jogador,comentei pois dificulta o teste
		//pJogador->morrer(0);
	}
}
void Arqueiro::mover() {
	if (corpo.getPosition().y + corpo.getSize().y <= janela->getSize().y) {
		corpo.move(0, dy);
	}
	if (flag_mover < 3000) {
		corpo.move(+0.08f, 0.0f);
		flag_mover++;
	}
	else if (flag_mover < 6000 && flag_mover >= 3000) {
		corpo.move(-0.08f, 0.0f);
		flag_mover++;
	}
	if (flag_mover == 6000) {
		flag_mover = 0;
	}
	if (corpo.getPosition().y + corpo.getSize().y >= janela->getSize().y) {
		dy = 0;
	}
}
void Arqueiro::executar() {
	if (vidas > 0) {
		setx();
		sety();
		atirar();
		mover();
		morrer();
		imprimir();
	}

}

void Arqueiro::morrer() {
	if (pJogador->getBala().getPosition().x - corpo.getPosition().x > 0 && pJogador->getBala().getPosition().x - corpo.getPosition().x < 100 &&
		pJogador->getBala().getPosition().y - corpo.getPosition().y <100 && pJogador->getBala().getPosition().y - corpo.getPosition().y > -5) {
		pJogador->setbala(9000, 9000);
		vidas--;
	}
}
