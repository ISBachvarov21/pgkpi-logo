//#include <iostream>
//#include "SFML/Graphics.hpp"
//
//int main()
//{
//    sf::RenderWindow window(sf::VideoMode(1280, 720), "pgkpi logo");
//    sf::Texture logoT;
//    sf::Image logoI;
//    sf::Sprite logo;
//    sf::Clock clock;
//    float dt;
//
//    logoT.loadFromFile("images/logo.png");
//    logoI.loadFromFile("images/logo.png");
//    logo.setTexture(logoT);
//    logo.setScale(0.5, 0.5);
//    logo.setPosition(1280 / 2 - 62.5, 720 / 2 - 62.5);
//
//    while (window.isOpen()) {
//        dt = clock.getElapsedTime().asSeconds();
//        sf::Event ev;
//
//        std::cout << 1 / dt << std::endl;
//
//        while (window.pollEvent(ev)) {
//            if (ev.type == sf::Event::Closed) {
//                window.close();
//            }
//        }
//
//        clock.restart();
//        window.draw(logo);
//        window.display();
//    }
//}