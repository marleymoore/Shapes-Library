#include "Ellipse.h"
#include <SFML/Graphics.hpp>


ellipse::ellipse()
{
	array.resize(m);
	array.setPrimitiveType(sf::LinesStrip);
}

/*! ellipse constructor initialising the variables from the ellipse header file */

ellipse::ellipse(float X, float Y, float NOP, sf::Vector2f cp1)
{
	array.setPrimitiveType(sf::LinesStrip);
	radiusX = X;  //!< "radiusX" is equal to "float X" which allows me to state the x float as anynumber in the main cpp
	radiusY = Y;  //!< "radiusY" is equal to "float Y" which allows me to state the x float as anynumber in the main cpp
	m = NOP;  //!< "m" is equal to "float NOP"
	theta = 0.f;  //!< "theta" initialised as 0 for radius equation
	centre1 = cp1;
	inc = 2 * pi / m; //!< initialising the inc float with this equation keeps the circle round.
	array.resize(m + 1);  //!< resize "m+1" creates an extra point that connects the last and first point together
	arrfill(); //!< declaring constructor to fill the array later on

}

void ellipse::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(array, states);
}

void ellipse::arrfill()
{
	for (int i = 0; i < m; i++) //!< using this I dont have to statically insert each point, "int i" will increment until it matches the amount of points for "float m"
	{
		float x = centre1.x + cos(theta) * radiusX;  //!< creating the radius for the x axis
		float y = centre1.y + sin(theta) * radiusY;  //!< creating the radius for the y axis
		theta = theta + inc; //!< updates the angle for each point using theta and the increment
		array[i] = sf::Vector2f(x, y); //!< adding the vertex to the vertex array
	}
	array[m] = array[0]; //!< joins together the last and first vertex in the array
}