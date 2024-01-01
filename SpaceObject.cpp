#include "Common.h"
#include "SpaceObject.h"

spaceObject::spaceObject()
{
	thisShape = new sf::ConvexShape(8);

	createOctagon(thisShape, 25);

	thisShape->setPosition(sf::Vector2f(250, 250));
}

spaceObject::~spaceObject()
{
	delete thisShape;
}

sf::ConvexShape* spaceObject::returnShape()
{
	return thisShape;
}