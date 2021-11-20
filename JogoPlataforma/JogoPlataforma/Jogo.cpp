#include "Jogo.h"
#define GRAVIDADE 0.0008
#include<iostream>
using namespace std;

Jogo::Jogo():
	janela(sf::VideoMode::getDesktopMode(),"Sla",sf::Style::Fullscreen){
		menu1 = 1;
		fase1 = 1;
		/*
		// Inserção dos jogadores
		listaJogadores.inserir(new Jogador());
		listaJogadores.inserir(new Jogador());

		// Inserção dos inimigos
		listaJogadores.inserir(new Inimigo_comum());
		listaJogadores.inserir(new Inimigo_comum());
		listaJogadores.inserir(new Inimigo_comum());
		listaJogadores.inserir(new Arqueiro());
		*/

		inicializar();
		executar();
		
		
}
Jogo::~Jogo() {
}

void Jogo::executar() {
	janela.setKeyRepeatEnabled(false);
	
	while (janela.isOpen()) {
		janela.clear();
		eventos();
		if (menu1 == 1 ) {
			menu.pausa();
			menu.executar();
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num2)) {
				fase1 = 2;
				reiniciar();
			}
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num1)) {
				fase1 = 1;
				reiniciar();
			}
		}
		else {
			printar();
			/* Codigo pra tela de morte
			while (jogador.getVivo() != 1) {
				janela.clear();
				menu.morto();
				eventos();
				janela.display();

			}*/
		}
		gravidade();
		janela.display();
	}
}
void Jogo::gravidade() {
	jogador->setDy((float)GRAVIDADE);
	inimigo->setDy((float)GRAVIDADE);
	inim->setDy((float)GRAVIDADE);
	inim2->setDy((float)GRAVIDADE);
	arqueiro->setDy((float)GRAVIDADE);
}
void Jogo::inicializar() {
	
	//Janela das entidades
	jogador->setJanela(&janela);
	inimigo->setJanela(&janela);
	inim->setJanela(&janela);
	inim2->setJanela(&janela);
	arqueiro->setJanela(&janela);
	menu.setJanela(&janela);
	fase.setJanela(&janela);

	//Atribuir jogador aos inimigos
	inimigo->setJogador(jogador);
	inim->setJogador(jogador);
	inim2->setJogador(jogador);
	arqueiro->setJogador(jogador);
}
void Jogo::eventos() {
	sf::Event evento;
	while (janela.pollEvent(evento)) {
		//Evento que fecha o jogo
		if (evento.type == sf::Event::Closed) {
			janela.close();
		}
		//Evento que ativa o menu
		if (evento.type == sf::Event::KeyPressed) {
			if (evento.key.code == sf::Keyboard::Escape) {
				menu1 = -menu1;
			}
		}
		//Evento para reinicar o jogo
		if (evento.type == sf::Event::KeyPressed) {
			if (evento.key.code == sf::Keyboard::P) {
				reiniciar();
				jogador->morrer(1);
				
			}
		}
	}
	
}

void Jogo::printar(){
	fase.selecionar(fase1);
	jogador->executar();
	inimigo->executar();
	arqueiro->executar();
	inim->executar();
	inim2->executar();
}

void Jogo::reiniciar() {
	jogador->setxy(0, 0);
	inim->reiniciar();
	arqueiro->reiniciar();
	inim2->reiniciar();
	inimigo->reiniciar();
}