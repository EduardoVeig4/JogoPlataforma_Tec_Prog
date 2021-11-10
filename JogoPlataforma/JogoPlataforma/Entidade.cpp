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
}
void Entidade::imprimir() {
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
int Entidade::getPositionx() {
	return x;
}
int Entidade::getPositiony() {
	return y;
}
void Entidade::setTextura(const char* textura){
		sf::Texture texture;
		if (!texture.loadFromFile(textura)) {
			cout << textura << endl;
		}
		cout << textura << endl;
		corpo.setTexture(&texture,true);

}