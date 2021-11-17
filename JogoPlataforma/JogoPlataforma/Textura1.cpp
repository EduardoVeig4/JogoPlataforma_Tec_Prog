#include "Textura1.h"

Textura1::Textura1() {
	inimigo_comum.loadFromFile("aa.png");
	arqueiro.loadFromFile("Archer.png");
	fase1.loadFromFile("background.png");
	fase2.loadFromFile("Background5.png");
	gameover.loadFromFile("gameover.png");
	player.loadFromFile("Alucard1.png");
	bala_imagem.loadFromFile("bala3.png");

}
Textura1::~Textura1(){
}