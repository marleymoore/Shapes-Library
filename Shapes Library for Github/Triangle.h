#include <SFML/Graphics.hpp>


class triangle : public sf::Drawable
{
private:
	const int size = 4;
	sf::VertexArray array;

public:
	triangle();
	triangle(sf::Vector2f point1, sf::Vector2f point2, sf::Vector2f point3, sf::Vector2f point4);
	void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};
