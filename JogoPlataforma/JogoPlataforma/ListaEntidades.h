#pragma once
#include "Entidade.h"
#include "Lista.hpp"
#include "ListaImplementacao.h"

/*
namespace sf {
	class RenderWindow;
}
*/

namespace Jogo {

	namespace Lista {

		//namespace Entidades {

			//class GerenciadorGrafico;
			//class GerenciadorEventos;

			class ListaEntidades {
			private:
				Lista<Entidades::Entidade*> lista;

			public:
				ListaEntidades();
				~ListaEntidades();

				void inserir(Entidades::Entidade* item);

				//void atualizarEntidades(float t);
				//void desenharEntidades(sf::RenderWindow* janela);
				//void inicializarEntidade(GerenciadorGrafico &ge, GerenciadorEventos &gf);

				void destruirEntidades();
			};
		//}
	}
}