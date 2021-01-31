#include <SFML/Graphics.hpp>


class line : public sf::Drawable //!< class for the line, I can access the drawable library
{
private:
	const int size = 2; //!<const int size of 2 representing the 2 points of the line
	sf::VertexArray array; //!< creating an array for the vectors points

public:
	line();  //!< default constructor
	line(sf::Vector2f point1, sf::Vector2f point2); //!< public function allowing the line cpp to initialise the different points
	void draw(sf::RenderTarget& target, sf::RenderStates states) const; //!< draw function that renders the drawings and the states used for drawing
};