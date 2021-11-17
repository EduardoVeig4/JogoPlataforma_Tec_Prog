#pragma once
#include "Inimigo.h"
#include "Textura1.h"
class Inimigo_comum : public Textura1,public Inimigo{
private:
	//float dy;
	int flag_mover;
	int flag_perseguir;

public:
	Inimigo_comum();
	~Inimigo_comum();
	void setDy(float dyy);
	void perseguir();
	void mover();
	void executar();
	void morrer();
	void matar();
};

