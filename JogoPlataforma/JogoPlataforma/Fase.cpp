#include "Fase.h"
#include "Fase1.h"
#include "Fase2.h"

Fase::Fase() {
	fundo.setTexture(&fase1);
	fundo.setSize(sf::Vector2f(4000, 800));

	listaEntidades = new ListaEntidades;
}
Fase::~Fase() {

}
void Fase::selecionar(int i) {
	if (i == 1) {
		fundo.setTexture(&fase1);
		fundo.setSize(sf::Vector2f(4000, 800));
	}
	if (i == 2) {
		fundo.setTexture(&fase2, true);
		fundo.setSize(sf::Vector2f(4000, 800));
	}
	janela->draw(fundo);
	mover();
}
void Fase::mover() {
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
		fundo.move(0.1f, 0.f);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
		fundo.move(-0.1f, 0.f);
	}
}

ListaEntidades* Fase::getListaEntidades() {
	return listaEntidades;
}