#include <SFML/Graphics.hpp>

class oblong : public sf::Drawable
{
private:
	const int size = 5;
	sf::VertexArray array;

public:
	oblong();
	oblong(sf::Vector2f point1, sf::Vector2f point2, sf::Vector2f point3, sf::Vector2f point4, sf::Vector2f point5);
	void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};