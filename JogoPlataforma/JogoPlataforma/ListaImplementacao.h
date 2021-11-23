#pragma once

namespace Jogo {

	namespace Lista {

		// Métodos da classe aninhada Elemento ---------------------------------------------------------
		template <typename TL>
		template <typename TE>
		Lista<TL>::Elemento<TE>::Elemento(TE Item, Elemento* Prox, Elemento* Ante) :
			item{ Item }, pProx{ Prox }, pAnte{ Ante } {

		}

		template <typename TL>
		template <typename TE>
		Lista<TL>::Elemento<TE>::~Elemento() {

		}

		template <typename TL>
		template <typename TE>
		TE& Lista<TL>::Elemento<TE>::getItem() {
			return item;
		}

		template <typename TL>
		template <typename TE>
		void Lista<TL>::Elemento<TE>::setItem(TE* Item) {
			item = Item;
		}

		template <typename TL>
		template <typename TE>
		typename Lista<TL>::template Elemento<TE>* Lista<TL>::Elemento<TE>::getProx() {
			return pProx;
		}

		template <typename TL>
		template <typename TE>
		void Lista<TL>::Elemento<TE>::setProx(Elemento<TE>* Prox) {
			pProx = Prox;
		}

		template <typename TL>
		template <typename TE>
		typename Lista<TL>::template Elemento<TE>* Lista<TL>::Elemento<TE>::getAnte() {
			return pAnte;
		}

		template <typename TL>
		template <typename TE>
		void Lista<TL>::Elemento<TE>::setAnte(Elemento<TE>* Ante) {
			pAnte = Ante;
		}

		// Métodos da classe Lista ------------------------------------------------------------
		template <typename TL>
		Lista<TL>::Lista() :
			inicio{ nullptr }, fim{ nullptr }, atual{ nullptr } { // 'Aterra' os ponteiros

		}

		template <typename TL>
		Lista<TL>::~Lista() {
			esvaziar();
		}

		template <typename TL>
		void Lista<TL>::inserir(const TL& Item) {
			if (Item) {
				Elemento* novo = new Elemento(Item);

				if (!inicio) {
					inicio = novo;
					fim = novo;
				}

				else {
					fim->setProx(novo);
					novo->setAnte(fim);

					fim = novo;
				}
			}
		}

		template <typename TL>
		void Lista<TL>::esvaziar() {
			Elemento* pAux = inicio;
			atual = inicio;

			while (atual != nullptr) {
				pAux = atual->getProx();
				delete atual;
				atual = pAux;
			}

			inicio = nullptr;
			fim = nullptr;
			atual = nullptr;
		}

		template <typename TL>
		TL Lista<TL>::voltarInicio() {
			atual = inicio;

			if (atual) return atual->getItem();
			else return nullptr;
		}

		template <typename TL>
		TL Lista<TL>::irProximo() {
			atual = atual->getProx();

			return(atual) ? atual->getItem() : nullptr; // Operador Ternário

			/* Equivalente à:
			if (atual) return atual->getItem();
			else return nullptr;
			*/
		}
	}
}