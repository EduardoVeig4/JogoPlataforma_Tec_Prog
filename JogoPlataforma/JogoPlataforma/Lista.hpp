#pragma once

namespace lPersonagens {

	template <typename T>
	class Lista {
	private:

		class Elemento {
		private:
			Elemento* pProx;
			Elemento* pAnte;
			T item;

		public:
			Elemento(T Item = nullptr, Elemento* Prox = nullptr, Elemento* Ante = nullptr);
			~Elemento();

			// Gets e Sets
			T getItem();
				void setItem(T Item);

			Elemento* getProx();
			void setProx(Elemento* Prox);

			Elemento* getAnte();
			void setAnte(Elemento* Ante);
		};

		Elemento* inicio;
		Elemento* fim;
		Elemento* atual;

	public:
		Lista();
		~Lista();

		void inserir(T item);
		void esvaziar();

		T voltarInicio();
		T irProximo();
	};
}

#include "ListaImplementacao.hpp"
