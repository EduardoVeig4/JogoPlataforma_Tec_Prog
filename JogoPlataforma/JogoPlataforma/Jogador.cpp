#include "Jogador.h"

Jogador::Jogador() {

}

Jogador::~Jogador() {

}

void Jogador::mover()
{
    // Move para cima 'W'
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
        body.move(sf::Vector2f(0.f, -0.1f));
    }

    // Move para baixo 'S'
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
        body.move(sf::Vector2f(0.f, 0.1f));
    }

    // Move para a direita 'D'
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
        body.move(sf::Vector2f(0.1f, 0.f));
    }

    // Move para a esquerda 'A'
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
        body.move(sf::Vector2f(-0.1f, 0.f));
    }
}
