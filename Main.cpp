#define SFML_STATIC

#include <iostream>
#include <cmath>
#include <vector>
#include <SFML/Graphics.hpp>
#include "SpaceObject.h"

void drawToWindow(sf::RenderWindow* window, std::vector<spaceObject*>* items);

int main()
{
	std::cout << "Hello, SFML" << std::endl;

	std::vector<spaceObject*> drawableItems;
	drawableItems.push_back(new spaceObject());

	sf::RenderWindow* window = new sf::RenderWindow(sf::VideoMode(1280, 720), "SFML works!");

	while (window->isOpen())
	{
		sf::Event event;

		while (window->pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				window->close();
			}
		}

		drawToWindow(window, &drawableItems);
	}

	std::cout << "Window Closed" << std::endl;

	return 0;
}

void drawToWindow(sf::RenderWindow* window, std::vector<spaceObject*>* items)
{
	window->clear();

	for (auto it = items->begin() ; it != items->end() ; it++)
	{
		int index = std::distance(items->begin(), it);

		window->draw(*items->at(index)->returnShape());
	}

	window->display();
}