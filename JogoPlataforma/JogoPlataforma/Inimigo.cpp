#include "Inimigo.h"
#include<stdlib.h>
#include<time.h>

Inimigo::Inimigo() :
	Entidade() {
	pJogador = NULL;
	dy = 0;
	vidas = 3;
	//corpo.setFillColor(sf::Color::Yellow);
	corpo.setPosition(rand() % 900+100, rand() % 500+100);
}
Inimigo::~Inimigo(){
	corpo.setTexture(NULL);
}

void Inimigo::setJogador(Jogador* pjog) {
	pJogador = pjog;
}
Jogador* Inimigo::getJogador() {
	return pJogador;
}
void Inimigo::reiniciar() {
	vidas = 5;
	setxy(rand() % 900 + 100, rand() % 500 + 100);
}