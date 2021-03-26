#include <string>
using std::literals::string_literals::operator""s;

#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>

#include "../include/Foo.hpp"

int
main
	(
		/*int argc, char * argv []*/
	)
	{
		auto foo = Foo("Hello SFML"s);

		// Create the main window
		sf::RenderWindow window(sf::VideoMode(820, 850), "SFML window");
		// Load a sprite to display
		sf::Texture texture;
		if (!texture.loadFromFile("../res/cute_image.jpg"))
		    return EXIT_FAILURE;
		sf::Sprite sprite(texture);
		// Create a graphical text to display
		sf::Font font;
		if (!font.loadFromFile("../res/arial.ttf"))
		    return EXIT_FAILURE;
		sf::Text text(foo.get_value(), font, 100);
		// Load a music to play
		sf::Music music;
		if (!music.openFromFile("../res/nice_music.ogg"))
		    return EXIT_FAILURE;
		// Play the music
		music.play();
		// Start the game loop
		while (window.isOpen())
			{
				// Process events
				sf::Event event;
				while (window.pollEvent(event))
					{
						// Close window: exit
						if (event.type == sf::Event::Closed)
						    window.close();
					}
				// Clear screen
				window.clear();
				// Draw the sprite
				window.draw(sprite);
				// Draw the string
				window.draw(text);
				// Update the window
				window.display();
			}
		return EXIT_SUCCESS;
	}
