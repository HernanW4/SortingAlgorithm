/*
    TO-DO:
        FIX the amount of rectangles i can make;
        PUT the code into the while loop;
        DRAW the rectangle that is being examined;




*/


#include <SFML/Graphics.hpp>
#include <cstdlib>
#include <unistd.h>
#include <chrono>
#include <windows.h>
#include <iostream>

#include "Column.h"
using namespace std;

void swap(float *array1, float *array2){
    float temp = *array1;
    *array1 = *array2;
    *array2 = temp;
}






int main()
{
    int len = 500;
    bool done = false;
    //sf::Time time = sf::milliseconds(10);
    
    sf::RenderWindow window(sf::VideoMode(1000, 800), "Sort Algorithm");

    Column column[len];
    
    window.clear(sf::Color::Black);
    for (int l = 0; l < len; l++)
        {
            column[l].width = 1000/len - 1;
            column[l].height = (((rand() % 801) + 0)  );
            column[l].x_pos = (1000/len) * l;
            column[l].y_pos = 800 - column[l].height;

            window.draw(column[l].Draw());
            window.display();
            std::cout<< column[l].height << ", ";
           
        }

    std::cout<<endl;

    std::cout<<"\n\n\n";

    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len-i-1; j++)
        {
            if(column[j].height > column[j+1].height){
                swap(&column[j].height,&column[j+1].height);
                
            }

        }
        
    }

    sf::sleep(sf::seconds(3));
    window.clear(sf::Color::Black);
    window.display();
    
    for (int l = 0; l < len; l++)
    {

        column[l].y_pos =  std::abs((int)column[l].height - 800);
        window.draw(column[l].Draw());
        window.display();
        std::cout<< column[l].x_pos << ", " << column[l].height <<endl;
           
    }
    
    

   
   
    
    sf::sleep(sf::seconds(2));
   






    
    
    
    
    

    //  SORT ALGORITHM


    

   

    int i,j = 0;
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

        
        //window.display();


        

        
        
    }
        
        
        

       
        


     
    
   

    return 0;
}




