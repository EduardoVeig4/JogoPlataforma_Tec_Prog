#pragma once
#include "Inimigo.h"
#include "Textura1.h"

namespace Jogo {

	namespace Entidades {

		namespace Arqueiro {

			class Arqueiro :public Inimigo, public Textura1 {
			private:
				sf::RectangleShape flecha;
				int flag_mover;
			public:
				Arqueiro();
				~Arqueiro();
				void setDy(float dyy);
				void atirar();
				void mover();
				void executar();
				void morrer();

			};
		}
	}
}