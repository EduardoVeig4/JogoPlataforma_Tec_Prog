#pragma once
#include "Elemento.h"

template<class TL>
class Lista {
private:
    Elemento<TL>* pPrimeiro;
    Elemento<TL>* pUltimo;
    int len;

public:

    // Construtora e Destrutora
    Lista() { // Construtora
        pPrimeiro = nullptr;
        pUltimo = nullptr;
        len = 0;
    }
    
    ~Lista() { // Destrutora
    }

    //bool incluaElemento(Elemento<TL>* pElemento); /* N�o lembro o porque disso, por isso comentei */

    // Gets
    int getLen() { return len; };

    TL* getItem(int posicao){
        Elemento<TL>* temp = pPrimeiro;
        if (posicao == 0) {
            return temp->getItem();
        }

        for (int i = 0; i < posicao; i++) { // Percorre a lista at� achar o item desejado
            temp = temp->getPProx();
        }

        return temp->getItem();
    }

    // Incrementa a lista
    void push(TL* item) {
        if (pPrimeiro == nullptr) { // Se a lista estiver vazia
            pPrimeiro = new Elemento<TL>;
            pPrimeiro->setItem(item);
            pUltimo = pPrimeiro; // O primeiro tamb�m ser� o �ltimo
        }

        else {
            Elemento<TL>* temp = new Elemento<TL>;
            temp->setItem(item);
            pUltimo->setPProx(temp); // O antigo �ltimo aponta para a vari�vel tempor�ria que ser� o novo �ltimo elemento da lista
            pUltimo = temp;
        }

        len++;
    }

    // Exclui da lista
    void pop(TL* item) {
        Elemento<TL>* temp = pPrimeiro;
        Elemento<TL>* tempAnt = nullptr;

        while (temp->getItem() != item) {
            tempAnt = temp;
            temp = temp->getPProx();
        }

        // Se for o primeiro
        if (temp == pPrimeiro) {
            pPrimeiro = temp->getPProx(); // O ponteiro para o primeiro vai apontar para o pr�ximo da lista
        }
        
        // Se for o �ltimo
        else if (temp == pUltimo) {
            tempAnt->setPProx(nullptr); // O ponteiro para o pr�ximo do pen�ltimo recebe null
            pUltimo = tempAnt; // E o ponteiro para o �ltimo recebe o endere�o do pen�ltimo
        }

        // Se estiver no meio da lista
        else {
            tempAnt->setPProx(temp->getPProx()); // O ponteiro para o pr�ximo do pen�ltimo recebe o endere�o do pr�ximo do atual
        }

        delete temp; // Por fim, delete a vari�vel tempor�ria
        len--; // E atualiza o tamanho da lista
    }
};

/*
template<class TL>
inline Lista<TL>::Lista() { // Construtora
    pPrimeiro = nullptr;
    pUltimo = nullptr;
    len = 0;
}

template<class TL>
inline Lista<TL>::~Lista() { // Destrutora

} 
*/