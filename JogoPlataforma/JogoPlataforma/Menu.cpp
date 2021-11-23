#include "Menu.h"

namespace Jogo {
	Menu::Menu() :
		Ente() {
		fundo.setSize(sf::Vector2f(1360, 1000));
		tela_fim.setSize(sf::Vector2f(1360, 768));
		tela_fim.setTexture(&gameover);
	}
	Menu::~Menu() {

	}
	void Menu::executar() {
		janela->draw(fundo);
	}
	void Menu::morto() {

		janela->draw(tela_fim);

	}
	void Menu::pausa() {
		fundo.setFillColor(sf::Color::Magenta);
	}
}