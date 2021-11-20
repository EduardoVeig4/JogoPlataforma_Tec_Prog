#pragma once
#include "Ente.h"
#include "Textura1.h"
#include "ListaEntidades.h"

class Fase :public Ente,public Textura1{
protected:
	sf::RectangleShape fundo;

	ListaEntidades* listaEntidades;

public:
	Fase();
	~Fase();
	void selecionar(int i);
	void mover();
	ListaEntidades* getListaEntidades();
};

