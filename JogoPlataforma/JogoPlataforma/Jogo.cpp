#include "Jogo.h"
#define GRAVIDADE 0.0008
#include<iostream>
using namespace std;

Jogo::Jogo():
	janela(sf::VideoMode::getDesktopMode(),"Sla",sf::Style::Fullscreen){
		inicializar();
		executar();
		
}
Jogo::~Jogo() {
}

void Jogo::executar() {
	int flag_menu = 1;
	sf::RectangleShape fundo(sf::Vector2f(9000, (int)janela.getSize().y));
	sf::Texture back;
	back.loadFromFile("background.png");
	//back.setRepeated(true);
	fundo.setTexture(&back, true);
	janela.setKeyRepeatEnabled(false);
	while (janela.isOpen()) {
		janela.setKeyRepeatEnabled(true);
		sf::Event evento;
		while (janela.pollEvent(evento)) {
			if (evento.type == sf::Event::Closed) {
				janela.close();
			}
			if (evento.type == sf::Event::KeyPressed) {
				if (evento.key.code == sf::Keyboard::Escape) {
					flag_menu *= -1;
				}
			}
		}
		if (flag_menu == 1) {
			janela.clear();
			menu.imprimir();
		}
		else {
			janela.clear(sf::Color::Green);
			janela.draw(fundo);
			jogador.executar();
			inimigo.imprimir();
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
				fundo.move(-0.1f, 0.f);
			}
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
				fundo.move(+0.1f, 0.f);
			}
		}
		gravidade();
		janela.display();
	}
}
void Jogo::gravidade() {
	jogador.setDy((float)GRAVIDADE);
	
}
void Jogo::inicializar() {
	jogador.setJanela(&janela);
	//jogador.setCor(rand()%255, rand()%255, rand()%255, 255);
	//inimigo.setCor();
	inimigo.setJanela(&janela);
	menu.setJanela(&janela);
	fase.setJanela(&janela);
	menu.setSize(janela.getSize().x, janela.getSize().y);
	menu.setCor(100, 100, 255, 200);
	jogador.setCor(255, 0, 0, 255);
	//jogador.setTexture("aaa.png");
}