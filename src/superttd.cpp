/* (c) 2017-2019 thatlittlegit & PinguPenguin. This file's from the SuperTTD
 * project.
 *
 * SuperTTD, and by extension this file, is free software under the GNU General
 * Public License, 2.0.
 *
 * SuperTTD is distributed in the hope that it will be useful, but comes with NO
 * WARRANTY WHATSOEVER. Please see the GNU GPL 2.0 license for more information.
 *
 * You should have recieved a copy of the GPL with this project. If not, see
 * https://gnu.org/licenses/.
 */
#include "sprite.hpp"
#include "tileman.hpp"
#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>

using std::vector;

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "SuperTTD");

    SuperTTD::Sprite::loadSprites("sprites");

    // TEMP Create a 255x255 map for development
    for (unsigned char x = 0; x < 255; x++) {
        for (unsigned char y = 0; y < 255; y++) {
            SuperTTD::Tile::tiles.push_back(SuperTTD::Tile("[sprite]base:earth:grass", x, y));
        }
    }
    while (window.isOpen()) {
        sf::Event event;

        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.clear(sf::Color::Black);

        // draw everything here...
        for (unsigned int index = 0; index < SuperTTD::Tile::tiles.size();
             index++) {
            // TODO
        }
        // end the current frame
        window.display();
    }
}
