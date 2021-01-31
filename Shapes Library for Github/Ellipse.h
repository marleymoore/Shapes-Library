#include <SFML/Graphics.hpp>

class ellipse : public sf::Drawable
{
private:

	sf::VertexArray array;
	const float pi = 3.141;   //!< pi is the circumference of every circle, gives us our variable of pi for later use
	float theta;   //!< theta helps to determine the radians of our circle in the circle cpp
	float radiusX;  //!< having both radians x/y lets us change the shape of our sircle to make various types
	float radiusY;
	float m;  //!< float "m" represents the number of points for our circle.
	sf::Vector2f centre1;  //!< setting the centre point for our circle using the sfml library
	float inc;  //!< float "inc" will let me increment the points of the circle in  a for loop

public:

	ellipse();
	ellipse(float X, float Y, float NOP, sf::Vector2f cp1); //!< declaring the various varibales for later use in the circle cpp
	void draw(sf::RenderTarget& target, sf::RenderStates states) const;
	void arrfill(); //!< constructor that will allow me to fill the circles array of, radius x, radius y and points

};