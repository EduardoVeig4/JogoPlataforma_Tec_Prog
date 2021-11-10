#pragma once
#include <SFML/Graphics.hpp>

class Ente {
protected:
	int id;
	sf::RenderWindow* janela;
public:
	Ente();
	Ente(int i);
	~Ente();
	void setId(int i);
	virtual void executar();
	virtual void imprimir();
	void setJanela(sf::RenderWindow* window);

};

