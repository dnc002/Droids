#define SFML_STATIC

#include <iostream>
#include <SFML/Graphics.hpp>
#include "SpaceObject.h"

int main()
{
	std::cout << "Hello, SFML" << std::endl;

	sf::RenderWindow window(sf::VideoMode(800, 600), "SFML works!");
	sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::Green);

	spaceObject testAsteroid;

	while (window.isOpen())
	{
		sf::Event event;

		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				window.close();
			}
		}

		window.clear();
		window.draw(shape);
		window.draw(*testAsteroid.returnShape());
		window.display();
	}

	std::cout << "Window Closed" << std::endl;

	return 0;
}