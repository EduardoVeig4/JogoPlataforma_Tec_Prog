#include "Fase.h"

Fase::Fase(Jogador* j1) :
	Ente(id++) {
	this->j1 = j1;
	listaEntidades = new ListaEntidades;
	i1 = new Inimigo();
	InicializaElementos();

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

void Fase::InicializaElementos() {
	listaEntidades->LEs.push(j1);
	listaEntidades->LEs.push(i1);
}

void Fase::executar() {
	janela->draw(sprite);
	//imprimir();
}