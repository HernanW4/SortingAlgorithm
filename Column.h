#include <SFML/Graphics.hpp>
class Column{
    public:
        float width;
        float height;
        float x_pos;
        float y_pos;

        sf::Color color = sf::Color::White;

        sf::RectangleShape Draw(){
            sf::RectangleShape col(sf::Vector2f(width,height));
            col.setPosition(sf::Vector2f(x_pos,y_pos));
            col.setOutlineColor(sf::Color::Black);
            col.setFillColor(color);
            return col;
        }

  


};