#pragma once
#include "Entidade.h"

class Jogador : public Entidade {
private:

public:
    Jogador(); // Construtora
    ~Jogador(); // Destrutora

    void mover();
};

