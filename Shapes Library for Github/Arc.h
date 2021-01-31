#include <SFML/Graphics.hpp>

class arc : public sf::Drawable
{
private:

	sf::VertexArray array2;
	const float pi = 3.141;
	float theta2;
	float radiusX2;
	float radiusY2;
	float n;
	sf::Vector2f centre2;
	float inc2;
	float angle; //!< "float angle" is needed to change how the arc increments later on

public:

	arc();
	arc(float X2, float Y2, float NOP2, float A, sf::Vector2f cp2); //!< declared "float A" to later be initialised
	void draw(sf::RenderTarget& target, sf::RenderStates states) const;
	void arrfill2();

};