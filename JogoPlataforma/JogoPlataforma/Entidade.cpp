#include "Entidade.h"
#include<iostream>
using namespace std;

Entidade::Entidade() :
	corpo(sf::Vector2f(100.f,100.f)) {
	x = 0;
	y = 0;
	janela = NULL;
}
Entidade::Entidade(float xx, float yy):
	corpo(sf::Vector2f(xx,yy)){
	corpo.setSize(sf::Vector2f((float)xx, (float)yy));
	x = 0;
	y = 0;
	janela = NULL;
}
Entidade::~Entidade() {
	corpo.setTexture(NULL);
	janela = NULL;
}
void Entidade::imprimir() {
	ajustar();
	janela->draw(corpo);
}
void Entidade::setJanela(sf::RenderWindow* window) {
	this->janela = window;
}
void Entidade::setSize(float x,float y) {
	this->corpo.setSize(sf::Vector2f(x, y));
}
void Entidade::setCor(int x,int y,int z,int zz) {
	this->corpo.setFillColor(sf::Color(x, y, z, zz));
}
void Entidade::setx() {
	x = corpo.getPosition().x;
}
void Entidade::sety() {
	y = corpo.getPosition().y;
}
void Entidade::setxy(float x,float y) {
	corpo.setPosition(x, y);
	x = corpo.getPosition().x;
	y = corpo.getPosition().y;
}

float Entidade::getx() {
	return x;
}
float Entidade::gety() {
	return y;
}
void Entidade::ajustar() {
	if (corpo.getPosition().y + corpo.getSize().y > janela->getSize().y) {
		corpo.setPosition(sf::Vector2f(corpo.getPosition().x, janela->getSize().y - corpo.getSize().y));
	}
}