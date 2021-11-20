#pragma once
//#include "Lista.h"
#include "Entidade.h"

/*
namespace sf {
	class RenderWindow;
}
*/

namespace personagens {

	class ListaEntidades {
	private:

		class Elemento {
		private:
			Elemento* pProx;
			Elemento* pAnte;
			Entidade* item;

		public:
			Elemento(Entidade* item = nullptr, Elemento* pProx = nullptr, Elemento* pAnte = nullptr);
			~Elemento();
		
			// Gets e Sets
			Entidade* getItem();
			void setItem(Entidade* Item);

			Entidade* getProx();
			void setProx(Elemento* Prox);

			Entidade* getItem();
			void setItem(Elemento* Ante);
		};

		ListaEntidades* inicio;
		ListaEntidades* fim;
		ListaEntidades* atual;

	public:
		ListaEntidades();
		~ListaEntidades();

		void inserir(Entidade* info);
		void esvaziar();
		Entidade* voltarInicio();
		Entidade* irProximo();

		/*
		void atualizarEntidades(float t);
		void desenharEntidades(sf::RenderWindow* janela);
		void destruirEntidades();
		*/
	};
}

