#pragma once
#include "Entidade.h"
#include "Lista.hpp"
#include "ListaImplementacao.hpp"

/*
namespace sf {
	class RenderWindow;
}
*/

namespace lPersonagens {

	//class GerenciadorGrafico;
	//class GerenciadorEventos;

	class ListaEntidades {
	private:
		Lista<Entidade*> lista;

	public:
		ListaEntidades();
		~ListaEntidades();

		void inserir(Entidade* item);

		//void atualizarEntidades(float t);
		//void desenharEntidades(sf::RenderWindow* janela);
		//void inicializarEntidade(GerenciadorGrafico &ge, GerenciadorEventos &gf);
		
		void destruirEntidades();
	};
}