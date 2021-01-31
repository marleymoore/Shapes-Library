#include "Arc.h"
#include <SFML/Graphics.hpp>


arc::arc()
{
	array2.resize(n);
	array2.setPrimitiveType(sf::LinesStrip);
}


arc::arc(float X2, float Y2, float NOP2, float A, sf::Vector2f cp2)
{
	array2.setPrimitiveType(sf::LinesStrip);
	radiusX2 = X2;
	radiusY2 = Y2;
	n = NOP2;
	theta2 = 0.f;
	centre2 = cp2;
	inc2 = 2 * pi / n;
	angle = A; //!< allows me to create and angle for the vertexes, "angle" is equal to "A"
	array2.resize(n);  //!< removed the "+1" because we dont want the arcs last points to rejoin
	arrfill2();

}

void arc::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(array2, states);
}

void arc::arrfill2()
{
	for (int i = 0; i < n; i++)
	{
		float x = centre2.x + cos(theta2) * radiusX2;
		float y = centre2.y + sin(theta2) * radiusY2;
		theta2 = theta2 + inc2 / angle; //!< must divide the angles outcome by "angle" to make the arc obtuse
		array2[i] = sf::Vector2f(x, y);
	}
	//!< removed "array[n] = array[0];" as we dont need the last and first vertex to join together.
}