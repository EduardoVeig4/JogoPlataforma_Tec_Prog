#include "Arqueiro.h"
#include <math.h>
#include <iostream>
using namespace std;

namespace Jogo {

	namespace Entidades {

		namespace Arqueiro {

			Arqueiro::Arqueiro() :Inimigo() {
				corpo.setTexture(&arqueiro);
				flecha.setSize(sf::Vector2f(30, 10));
				flecha.setPosition(9000.f, 9000.f);
				vidas = 3;
				flag_mover = 0;

			}
			Arqueiro::~Arqueiro() {
				corpo.setTexture(NULL);
			}
			void Arqueiro::atirar() {
				if (fabs((float)flecha.getPosition().x - corpo.getPosition().x) > 1000 && fabs(corpo.getPosition().x - pJogador->getPos().x) < 100000) {
					flecha.setPosition(corpo.getPosition().x, corpo.getPosition().y + 50);
					flecha.setFillColor(sf::Color::Magenta);

				}
				flecha.move(-0.5f, 0.f);
				janela->draw(flecha);
				if (flecha_colisao.intersects(pJogador->getColisao())) {
				
					flecha.setPosition(flecha.getPosition().x, 8000);
				}
			}
			void Arqueiro::mover() {
				if (corpo.getPosition().y + corpo.getSize().y <= janela->getSize().y) {
					corpo.move(0, dy);
				}
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

			}
			void Arqueiro::executar() {
				
				if (vidas > 0) {
					//setx();
					//sety();
					setxy();
					atirar();
					mover();
					morrer();
					imprimir();
					flecha_colisao = flecha.getGlobalBounds();
				}
				else vivo = 0;
			}
			sf::FloatRect Arqueiro::getColisaoFlecha() {
				return flecha_colisao;
			}
		}
	}
}