#include "Oblong.h"
#include <SFML/Graphics.hpp>


oblong::oblong()
{
	array.resize(size);
	array.setPrimitiveType(sf::LinesStrip);
	array[0] = sf::Vector2f(500.f, 500.f);
	array[1] = sf::Vector2f(800.f, 500.f);
	array[2] = sf::Vector2f(800.f, 800.f);
	array[3] = sf::Vector2f(500.f, 800.f);
	array[4] = array[0];
}

oblong::oblong(sf::Vector2f point1, sf::Vector2f point2, sf::Vector2f point3, sf::Vector2f point4, sf::Vector2f point5)
{
	array.resize(size);
	array.setPrimitiveType(sf::LinesStrip);
	array[0] = point1;
	array[1] = point2;
	array[2] = point3;
	array[3] = point4;
	array[4] = point5;
}

void oblong::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(array, states);
}