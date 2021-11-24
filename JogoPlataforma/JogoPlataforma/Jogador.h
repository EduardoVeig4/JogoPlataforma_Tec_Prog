#pragma once
#include <SFML/Graphics.hpp>
#include"Entidade.h"
#include "Textura1.h"

namespace Jogo {

	namespace Entidades {

		//namespace Jogador {

			class Jogador :public Entidade {
			private:

				sf::RectangleShape bala;
				sf::FloatRect bala_colisao;

			public:
				Jogador();
				~Jogador();
				void mover();
				void atirar();
				void executar();
				sf::RectangleShape getBala();
				sf::FloatRect getColisaoBala();
				
				void morrer(int i);
				void morrer2(Entidade* aux);

				
				
			};
		//}
	}
}