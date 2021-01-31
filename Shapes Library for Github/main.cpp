#include <SFML/Graphics.hpp> //!< includes the sfml graphics library allowing me to draw the shapes.
#include <iostream>
#include "Line.h"
#include "Triangle.h"
#include "Oblong.h"
#include "Ellipse.h"
#include "Arc.h"

//!< include folders to include the different header files for the shape classes.


/*! int main where the main program takes place.*/

int main()
{
	sf::RenderWindow window(sf::VideoMode(1024, 800), "Creating Shapes"); //!< rendering the window space for all the shapes to be placed into.
	window.setFramerateLimit(60);

	line dot1(sf::Vector2f(50.f, 50.f), sf::Vector2f(51.f, 51.f));          //!< places a simple small dot in the top left of the window, sf::Vector2f allows me to manipulate 2d Vectors. Uses the same parent header file as line.
	line Line1(sf::Vector2f(100.f, 100.f), sf::Vector2f(200.f, 100.f));            //!< places a straight line, both co-ordinates represents where the points will show up on the X and Y axis.
	triangle triangle1(sf::Vector2f(400.f, 250.f), sf::Vector2f(500.f, 650.f), sf::Vector2f(300.f, 350.f), sf::Vector2f(400.f, 250.f));      //!< places a triangle with 4 points to join together the points properly.
	oblong square1(sf::Vector2f(700.f, 200.f), sf::Vector2f(900.f, 200.f), sf::Vector2f(900.f, 400.f), sf::Vector2f(700.f, 400.f), sf::Vector2f(700.f, 200.f));     //!< part of the oblong class so i can draw a shape with 5 points.   
	oblong rectangle1(sf::Vector2f(500.f, 600.f), sf::Vector2f(900.f, 600.f), sf::Vector2f(900.f, 750.f), sf::Vector2f(500.f, 750.f), sf::Vector2f(500.f, 600.f));      //!< part of the oblong class so i can draw a shape with 5 points.  
	ellipse circle(50, 50, 60, sf::Vector2f(100.f, 100.f));  //!< circle part of the ellipse class. I can change the x/y radians and the amount of points the circle has.
	ellipse oval(20, 50, 60, sf::Vector2f(200.f, 200.f));    //!< an oval drawn using the circle class
	arc arc(80, 80, 100, -2.5, sf::Vector2f(300.f, 200.f));  //!< same as the circle class however i can control the curve of the angle.

	/*! while loop to make the shapes parameters draw in the window*/

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				window.close();
			}
		}

		window.clear();

		window.draw(Line1);
		window.draw(triangle1);
		window.draw(square1);
		window.draw(dot1);
		window.draw(rectangle1);       //!< window.draw actually draws the shapes in the window depending on what i name the child.
		window.draw(circle);
		window.draw(oval);
		window.draw(arc);
		window.display();

	}

	return 0;
}