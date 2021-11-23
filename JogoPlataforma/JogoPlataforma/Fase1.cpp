#include "Fase1.h"

namespace Jogo {

	Fase1::Fase1() {
		fundo.setTexture(&fase1);
		fundo.setSize(sf::Vector2f(9000, 800));
	}
	Fase1::~Fase1() {

	}
	void Fase1::executar() {
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
			fundo.move(-0.1f, 0.f);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
			fundo.move(+0.1f, 0.f);
		}
		janela->draw(fundo);
	}
}