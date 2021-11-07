#include "Jogo.h"

Jogo::Jogo() :
    window(sf::VideoMode(720, 480), "Jogo")
{
    jogador1.setWindow(&window);
    inimigo1.setWindow(&window);
    Executar();
}

Jogo::~Jogo() {
}

void Jogo::Executar() {
    while (window.isOpen()) { // Teóricamente cada passagem do loop é um frame
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Primeiro coloca os elementos na tela e depois printa tudo junto

        jogador1.mover();
        window.clear();
        jogador1.draw();
        inimigo1.draw();
        window.display();
    }
}
