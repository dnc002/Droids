#include "Common.h"

/* takes a convex shape & side length, sets points of convex
 * shape to make a regular octagon with side length sideLength */
void createOctagon(sf::ConvexShape* shape, float sideLength)
{
	// multiplication factor for all points
	float factor = sideLength / (2 * (sqrt(2) - 1));

	// precalc sideCoord used in every point
	float sideCoord = (sqrt(2) - 1) * factor;

	// add eight points
	shape->setPoint(0, sf::Vector2f(1 * sideCoord, 1 * factor));
	shape->setPoint(1, sf::Vector2f(1 * factor, 1 * sideCoord));
	shape->setPoint(2, sf::Vector2f(1 * factor, -1 * sideCoord));
	shape->setPoint(3, sf::Vector2f(1 * sideCoord, -1 * factor));
	shape->setPoint(4, sf::Vector2f(-1 * sideCoord, -1 * factor));
	shape->setPoint(5, sf::Vector2f(-1 * factor, -1 * sideCoord));
	shape->setPoint(6, sf::Vector2f(-1 * factor, 1 * sideCoord));
	shape->setPoint(7, sf::Vector2f(-1 * sideCoord, 1 * factor));
}