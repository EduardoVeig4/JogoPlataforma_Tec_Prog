#pragma once
#include "Entidade.h"
#include "Jogador.h"

class Inimigo :public Entidade{
    protected:
        Jogador* pJogador;
        int vidas;
        float dy;
    public:
        Inimigo();
        ~Inimigo();
        void setJogador(Jogador* pjog);
        Jogador* getJogador();
        virtual void reiniciar();
};

