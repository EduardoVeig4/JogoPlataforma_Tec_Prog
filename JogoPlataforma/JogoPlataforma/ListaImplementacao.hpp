#pragma once

namespace lPersonagens {
	// Métodos da classe aninhada Elemento ---------------------------------------------------------
	template <typename T>
	Lista<T>::Elemento::Elemento(T Item, Elemento* Prox, Elemento* Ante) :
		item{ Item }, pProx{ Prox }, pAnte{ Ante } {

	}

	template <typename T>
	Lista<T>::Elemento::~Elemento() {

	}

	template <typename T>
	T Lista<T>::Elemento::getItem() {
		return item;
	}

	template <typename T>
	void Lista<T>::Elemento::setItem(T Item) {
		item = Item;
	}

	template <typename T>
	Lista<T>::Elemento* Lista<T>::Elemento::getProx() {
		return pProx;
	}

	template <typename T>
	void Lista<T>::Elemento::setProx(Elemento* Prox) {
		pProx = Prox;
	}

	template <typename T>
	Lista<T>::Elemento* Lista<T>::Elemento::getAnte() {
		return pAnte;
	}

	template <typename T>
	void Lista<T>::Elemento::setAnte(Elemento* Ante) {
		pAnte = Ante;
	}

	// Métodos da classe Lista ------------------------------------------------------------
	template <typename T>
	Lista<T>::Lista() :
		inicio{ nullptr }, fim{ nullptr }, atual{ nullptr } { // 'Aterra' os ponteiros

	}

	template <typename T>
	Lista<T>::~Lista() {
		esvaziar();
	}

	template <typename T>
	void Lista<T>::inserir(T Item) {
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

	template <typename T>
	void Lista<T>::esvaziar() {
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

	template <typename T>
	T Lista<T>::voltarInicio() {
		atual = inicio;

		if (atual) return atual->getItem();
		else return nullptr;
	}

	template <typename T>
	T Lista<T>::irProximo() {
		atual = atual->getProx();

		return(atual) ? atual->getItem() : nullptr; // Operador Ternário

		/* Equivalente à:
		if (atual) return atual->getItem();
		else return nullptr;
		*/
	}
}