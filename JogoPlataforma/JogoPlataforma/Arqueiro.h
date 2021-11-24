#pragma once
#include "Inimigo.h"
#include "Textura1.h"

namespace Jogo {

	namespace Entidades {

		namespace Arqueiro {

			class Arqueiro :public Inimigo{
			private:
				sf::RectangleShape flecha;
				sf::FloatRect flecha_colisao;
				int flag_mover;
			public:
				Arqueiro();
				~Arqueiro();
				void atirar();
				void mover();
				void executar();
				sf::FloatRect getColisaoFlecha();

			};
		}
	}
}