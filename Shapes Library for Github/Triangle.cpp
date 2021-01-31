
#include "Triangle.h"
#include <SFML/Graphics.hpp>


triangle::triangle()
{
	array.resize(size);
	array.setPrimitiveType(sf::LinesStrip);
	array[0] = sf::Vector2f(200.f, 200.f);
	array[1] = sf::Vector2f(500.f, 500.f);
	array[2] = sf::Vector2f(300.f, 300.f);
	array[3] = array[0];
}

triangle::triangle(sf::Vector2f point1, sf::Vector2f point2, sf::Vector2f point3, sf::Vector2f point4)
{
	array.resize(size);
	array.setPrimitiveType(sf::LinesStrip);
	array[0] = point1;
	array[1] = point2;
	array[2] = point3;
	array[3] = point4;
}

void triangle::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(array, states);
}