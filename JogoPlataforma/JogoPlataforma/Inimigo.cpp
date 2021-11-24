#include "Inimigo.h"
#include<stdlib.h>
#include<time.h>

namespace Jogo {

	namespace Entidades {

		//namespace Inimigo {

			//namespace Jogador {

				Inimigo::Inimigo() :
					Entidade() {
					pJogador = NULL;
					vidas = 3;
					//corpo.setFillColor(sf::Color::Yellow);
					corpo.setPosition(rand() % 900 + 100, rand() % 500 + 100);
				}
				Inimigo::~Inimigo() {
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
					setxyCorpo(rand() % 900 + 100, rand() % 500 + 100);
				}
				void Inimigo::morrer() {
					if (pJogador->getColisaoBala().intersects(colisao)) {
						vidas--;
						pJogador->getBala().setPosition(pJogador->getBala().getPosition().x, 9000.f);
					}
				}
			//}
		//}
	}
}