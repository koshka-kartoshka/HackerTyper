#include <SFML/Graphics.hpp>
#include <iostream>
#include <cstdio>
#include <stdio.h>
#include <cassert>
#include <string.h>

int main()
{          
    const int WINDOW_WIDTH = 1000;
    const int WINDOW_HEIGHT = 500;

    int count = 0;
    string visibleText = new char[len + 1];
    string buf = buffer;    

    sf::Font font;    
    font.loadFromFile("arial.ttf");

    sf::Text visText;
    visText.setFont(font);
    visText.setCharacterSize(15); 
    visText.setFillColor(sf::Color::Green);


    sf::RenderWindow window(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "HackerTyper");

    while (window.isOpen())
    {
        sf::Event evnt;
        while (window.pollEvent(evnt))
        {
            if (evnt.type == sf::Event::Closed)
            {
                 window.close();
            }
            if (evnt.type == sf::Event::KeyReleased)
            {  
                  char* newSymbol;
                  newSymbol[0] = buffer[count];
                  newSymbol[1] = buffer[count + 1];

                  std::cout<<newSymbol<<std::endl;

                  if (visibleText.countChar('\n'))
                  {
                  count += 2;
                  string newText = newSymbol; 
                  visibleText = visibleText + newText;
                  }  
              }
            visText.setString(visibleText.str);
            
            window.clear();
            window.draw(visText);
            window.display();    
    }
    return 0;
}
