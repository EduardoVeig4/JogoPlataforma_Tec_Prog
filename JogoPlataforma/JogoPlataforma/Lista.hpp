#pragma once

namespace Jogo {

	namespace Lista {

		template <typename TL>
		class Lista {
		private:

			template <typename TE>
			class Elemento {
			private:
				Elemento<TE>* pProx;
				Elemento<TE>* pAnte;
				TE* item;

			public:
				Elemento(TE* Item = nullptr, Elemento* Prox = nullptr, Elemento* Ante = nullptr);
				~Elemento();

				// Gets e Sets
				TE* getItem();
				void setItem(TE* Item);

				Elemento<TE>* getProx();
				void setProx(Elemento<TE>* Prox);

				Elemento<TE>* getAnte();
				void setAnte(Elemento<TE>* Ante);
			};

			Elemento<TL>* inicio;
			Elemento<TL>* fim;
			Elemento<TL>* atual;

		public:
			Lista();
			~Lista();

			void inserirItem(TL* item);
			void esvaziar();

			TL* voltarInicio();
			TL* irProximo();
		};
	}
}

#include "ListaImplementacao.h"