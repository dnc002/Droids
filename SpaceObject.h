#pragma once

#include <SFML/Graphics.hpp>

class spaceObject
{
private:
	sf::ConvexShape* thisShape;
	//sf::Vector2f* position;		// position at top-left is (0, 0), right is positive x, down is positive y
	//sf::Vector2f velocity;		// velocity is in pixels per second
	//sf::Vector2f acceleration;	// acceleration is in pixels per second squared

public:
	spaceObject();
	sf::ConvexShape* returnShape();
};