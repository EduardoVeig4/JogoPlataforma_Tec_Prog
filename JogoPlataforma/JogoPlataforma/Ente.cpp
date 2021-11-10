#include "Ente.h"


Ente::Ente() {
	id = 0;
	janela = NULL;
}
Ente::Ente(int i) {
	id = i;
	janela = NULL;
}
Ente::~Ente(){
	id = 0;
}
void Ente::setId(int i) {
	id = i;
}
void Ente::executar() {
	imprimir();
}
void Ente::imprimir() {

}
void Ente::setJanela(sf::RenderWindow* window) {
	this->janela = window;
}