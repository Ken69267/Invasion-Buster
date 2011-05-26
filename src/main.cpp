/* Copyright (c) Kenneth Prugh 2011

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <SFML/Graphics.hpp>

int main()
{
  sf::RenderWindow app(sf::VideoMode(800, 600, 32), "Invasion Buster");

  app.SetFramerateLimit(60);

  const sf::Input& gInput = app.GetInput();

  while (app.IsOpened())
  {
    sf::Event Event;
    while (app.GetEvent(Event))
    {
      // handle events


      // close game
      if (Event.Type == sf::Event::Closed)
      {
        app.Close();
      }
    }

    // Clear screen
    app.Clear();

    // Flip to screen
    app.Display();
  }

}
