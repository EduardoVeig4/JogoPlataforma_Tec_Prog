#include "Fase2.h"

namespace Jogo {

	Fase2::Fase2() {
		fundo.setTexture(&fase2);
		fundo.setSize(sf::Vector2f(9000, 800));
	}
	Fase2::~Fase2() {

	}
	void Fase2::executar() {
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
			fundo.move(-0.1f, 0.f);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
			fundo.move(+0.1f, 0.f);
		}
		janela->draw(fundo);
	}
}