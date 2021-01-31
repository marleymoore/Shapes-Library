#include <SFML/Graphics.hpp>
#include "line.h" //!< allows the cpp to inherit from the parent header file.

/*! default line constructor*/

line::line()
{
	array.resize(size);  //!< resizes then array to be equal to the int size in the header file which is 2
	array.setPrimitiveType(sf::LinesStrip);  //!< lines strip are the lines from the sfml library
	array[0] = sf::Vector2f(100.f, 100.f); //!< default vectors for point 1 of the line.
	array[1] = sf::Vector2f(600.f, 100.f);  //!< default vectors for point 2 of the line.
}

/*! line constructor that allows me to change the variables in the main. */

line::line(sf::Vector2f point1, sf::Vector2f point2) //!< point1 and point2 called from the parent class to be used later in the function
{
	array.resize(size);
	array.setPrimitiveType(sf::LinesStrip);
	array[0] = point1;  //!< array 1 is equal to the given variable in the main cpp, point1 can be changed
	array[1] = point2;  //!< array 2 is equal to the given variable in the main cpp, point2 can be changed 
}

void line::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(array, states); //!< "target" refers to the window and "states" refers to point1/point2
}