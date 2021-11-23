#include "Inimigo_comum.h"
#include <iostream>

using namespace std;

namespace Jogo {

	namespace Entidades {

		//namespace Inimigo {

			Inimigo_comum::Inimigo_comum() {
				dy = 0;
				flag_mover = 0;
				flag_perseguir = 0;
				janela = NULL;
				vidas = 5;
				corpo.setTexture(&inimigo_comum);
			}
			Inimigo_comum::~Inimigo_comum() {
				dy = 0;
				janela = NULL;
				corpo.setTexture(NULL);

			}
			void Inimigo_comum::setDy(float dyy) {
				dy += dyy;
			}
			void Inimigo_comum::perseguir() {
				if (corpo.getPosition().x - getJogador()->getPos().x < 200 && corpo.getPosition().x - getJogador()->getPos().x > 100) {
					corpo.move(-0.16f, 0.0f);
					corpo.setFillColor(sf::Color::Red);
					flag_perseguir = 1;
				}
				else if (corpo.getPosition().x - getJogador()->getPos().x > -200 && corpo.getPosition().x - getJogador()->getPos().x < -100) {
					corpo.move(0.16f, 0.0f);
					corpo.setFillColor(sf::Color::Red);
					flag_perseguir = 1;
				}

			}
			void Inimigo_comum::mover() {
				if (corpo.getPosition().y + corpo.getSize().y <= janela->getSize().y) {
					corpo.move(0, dy);
				}
				if (flag_perseguir == 0) {
					if (flag_mover < 3000) {
						corpo.move(+0.08f, 0.0f);
						flag_mover++;
					}
					else if (flag_mover < 6000 && flag_mover >= 3000) {
						corpo.move(-0.08f, 0.0f);
						flag_mover++;
					}
					if (flag_mover == 6000) {
						flag_mover = 0;
					}
					corpo.setFillColor(sf::Color::Yellow);
				}
				else {
					flag_perseguir = 0;
				}
				if (corpo.getPosition().y + corpo.getSize().y >= janela->getSize().y) {
					dy = 0;
				}
			}
			void Inimigo_comum::executar() {
				if (vidas > 0) {
					//setx();
					//sety();
					mover();
					perseguir();
					imprimir();
					morrer();
					//Codigo pra matar o jogador,comentei pois dificulta o teste
					//matar();
				}
			}
			void Inimigo_comum::morrer() {
				if (pJogador->getBala().getPosition().x - corpo.getPosition().x > 0 && pJogador->getBala().getPosition().x - corpo.getPosition().x < 100 &&
					pJogador->getBala().getPosition().y - corpo.getPosition().y <100 && pJogador->getBala().getPosition().y - corpo.getPosition().y > -5) {
					pJogador->setbala(9000, 9000);
					vidas--;
				}
			}
			void Inimigo_comum::matar() {
				if (fabs(corpo.getPosition().x - pJogador->getPos().x) < 100 && fabs(corpo.getPosition().y - pJogador->getPos().x) < 100) {
					pJogador->morrer(0);
				}
			//}
		}
	}
}