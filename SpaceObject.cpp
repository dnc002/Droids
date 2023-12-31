#include "SpaceObject.h"

spaceObject::spaceObject()
{
	thisShape = new sf::ConvexShape(9);
	thisShape->setPoint(0, sf::Vector2f(0, 50));
	thisShape->setPoint(1, sf::Vector2f(25, 50));
	thisShape->setPoint(2, sf::Vector2f(50, 25));
	thisShape->setPoint(3, sf::Vector2f(50, -25));
	thisShape->setPoint(4, sf::Vector2f(25, -50));
	thisShape->setPoint(5, sf::Vector2f(-25, -50));
	thisShape->setPoint(6, sf::Vector2f(- 50, -25));
	thisShape->setPoint(7, sf::Vector2f(-50, 25));
	thisShape->setPoint(8, sf::Vector2f(-25, 50));

	thisShape->setPosition(sf::Vector2f(250, 250));
}

sf::ConvexShape* spaceObject::returnShape()
{
	return thisShape;
}