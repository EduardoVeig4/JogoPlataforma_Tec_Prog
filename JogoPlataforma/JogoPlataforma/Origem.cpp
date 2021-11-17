



/*
sf::RenderWindow window(sf::VideoMode(1200, 700), "SFML works!");
int x = window.getSize().x;
int y = window.getSize().y;
sf::RectangleShape shape(sf::Vector2f((float) x/12, (float) y/6));
sf::RectangleShape bala(sf::Vector2f((float)x/30,(float)y/90));
sf::Texture mario;
mario.loadFromFile("aa.png");
shape.setTexture(&mario, true);

sf::Text texto;
sf::Font fonte;
fonte.loadFromFile("font.ttf");
texto.setFont(fonte);
texto.setString("Teste pra caralho");
texto.setOrigin(20, 20);
bala.setFillColor(sf::Color::Yellow);
bala.setPosition((float) window.getSize().x + 100, -100);
float dy = 0;


while (window.isOpen())
{
    sf::Event event;
    while (window.pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
            window.close();
    }
    if (shape.getPosition().x + shape.getSize().x <= window.getSize().x) {
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
            shape.move(0.4f,0.f);
        }
    }
    if (shape.getPosition().x >= 0) {
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
            shape.move(-0.4f,0.f);
        }
    }
   if (shape.getPosition().y + shape.getSize().y <= window.getSize().y) {
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
            shape.move(sf::Vector2f(0.f, 0.5f));
        }
    }

    if (shape.getPosition().y >= 0 && (int) shape.getPosition().y+shape.getSize().y >=window.getSize().y-5) {
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
            dy = -0.65f;
            shape.move(0, dy);
        }
    }
    if (bala.getPosition().x + bala.getSize().x >= window.getSize().x) {
        if (sf::Mouse::isButtonPressed(sf::Mouse::Left) == true) {
            //bala.setOrigin(sf::Vector2f(shape.getPosition().x + (shape.getSize().x / 2), shape.getPosition().y + (shape.getSize().y / 2)));
            bala.setPosition(sf::Vector2f(shape.getPosition().x + (shape.getSize().x / 2), shape.getPosition().y + (shape.getSize().y / 2)));


            //bala = new sf::RectangleShape(sf::Vector2f(shape.getPosition().x + (shape.getSize().x / 2), shape.getPosition().y + (shape.getSize().y / 2)));
        }
    }

    if (shape.getPosition().y + shape.getSize().y <= window.getSize().y) {
        shape.move(0,dy);
    }
    bala.move(0.8f,0.f);
    if ((int)shape.getPosition().y + shape.getSize().y >= window.getSize().y) {
        dy = 0;
    }
    else dy += 0.0008f;
    float sla = (float) window.getSize().y;
    float slaa = shape.getPosition().y + shape.getSize().y;



    window.clear(sf::Color::Green);
    window.draw(shape);
    window.draw(bala);
    //window.draw(sprite);
    window.display();
    //cout << sla << "--" << slaa << endl;
}

return 0;

}

*/
// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

// Dicas para Começar:
//   1. Use a janela do Gerenciador de Soluções para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do código-fonte
//   3. Use a janela de Saída para ver mensagens de saída do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, vá para Arquivo > Abrir > Projeto e selecione o arquivo. sln
