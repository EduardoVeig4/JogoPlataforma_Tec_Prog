#pragma once
#include "ListaEntidades.h"
#include "Entidade.h"

namespace Jogo {

	namespace Lista {

		//namespace Entidades {

			ListaEntidades::ListaEntidades() {

			}

			ListaEntidades::~ListaEntidades() {
				destruirEntidades();
			}

			void ListaEntidades::inserir(Entidades::Entidade* Item) {
				if (Item) {
					lista.inserirItem(Item);
				}
			}

			/*

			void ListaEntidades::inicializarEntidade(GerenciadorGrafico &ge, GerenciadorEventos &gf) {
				Entidade* ent = lista.voltarInicio();

				while (ent) {
					ent->inicializar(ge, gf);
					ent = lista.irProximo();
				}
			}

			void ListaEntidades::atualizarEntidades(float t) {
				Entidade* ent = lista.voltarInicio();

				while (ent) {
					ent->atualizar(t);

					ent = lista.irProximo();
				}
			}
			*/

			void ListaEntidades::destruirEntidades() {
				Entidades::Entidade* ent = lista.voltarInicio();

				while (ent) {
					delete ent;
					ent = lista.irProximo();
				}

				lista.esvaziar();
			}

			//void ListaEntidades::desenharEntidades(sf::RenderWindow* janela) { }

		//}
	}
}