#include "Entidade.h"
#include<iostream>
using namespace std;

Entidade::Entidade() :
	corpo(sf::Vector2f(100.f,100.f)) {

	posicao = sf::Vector2f(0.0f, 0.0f); // Define a posição inicial usando o vector de float

	x = 0;
	y = 0;
	janela = NULL;
}
Entidade::Entidade(float sizex, float sizey):
	corpo(sf::Vector2f(sizex, sizey)){
	corpo.setSize(sf::Vector2f((float)sizex, (float)sizey));

	posicao = sf::Vector2f(0.0f, 0.0f); // Define a posição inicial usando o vector de float

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

void Entidade::setPos(float x, float y) { // Set da posição utilizando o vector de float
	posicao = sf::Vector2f(x, y);
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

/*
void Entidade::inicializar(GerenciadorGrafico &gf, GerenciadorEventos &ge) {
	gf.carregarTextura(caminho);
}

void Entidade::atualizar(float t) {
	posicao += v*t; // Posição incrementada com uma certa velocidade
}

void Entidade::desenhar(GerenciadorGrafico &gf) {
	gf.desenhar(caminho, posicao);
}
*/