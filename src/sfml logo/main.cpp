#include <iostream>
#include "SFML/Graphics.hpp"

int main()
{
    std::srand((unsigned)time(NULL));
    int vX = rand() % 2;
    int vY = rand() % 2;

    if (vX == 0) {
        vX = -1;
    }
    if (vY == 0) {
        vY = -1;
    }

    sf::RenderWindow window(sf::VideoMode(1280, 720), "pgkpi logo");
    sf::Texture logoT;
    sf::Sprite logo;
    sf::Clock clock;
    sf::Vector2f dir(vX,vY);
    float dt;
    float speed = 175.f;

    logoT.loadFromFile("images/white logo.png");
    logo.setTexture(logoT);
    logo.setScale(0.5, 0.5);
    logo.setOrigin(125, 125);
    logo.setPosition(1280 / 2 - 62.5, 720 / 2 - 62.5);

    logo.setColor(sf::Color(57, 91, 170, 255));

    while (window.isOpen()) {
        dt = clock.getElapsedTime().asSeconds();
        sf::Event ev;

        while (window.pollEvent(ev)) {
            if (ev.type == sf::Event::Closed) {
                window.close();
            }
        }

        logo.move(dir * speed * dt);
        if (logo.getPosition().x >= 1280 - 62.5 || logo.getPosition().x <= 62.5) {
            dir.x *= -1;
            logo.setColor(sf::Color(225 + (rand() % 255), 225 + (rand() % 255), 225 + (rand() % 255), 255));
            logo.move(dir.x * speed * dt, 0);
        }
        if (logo.getPosition().y >= 720 - 62.5 || logo.getPosition().y <= 62.5) {
            dir.y *= -1;
            logo.setColor(sf::Color(225 + (rand() % 255), 225 + (rand() % 255), 225 + (rand() % 255), 255));
            logo.move(0, dir.y * speed * dt);
        }

        clock.restart();
        window.clear();
        window.draw(logo);
        window.display();
    }
}