#include <iostream>

int main()
{
    std::cout <<"Squares of numbers(0-14) " << std::endl;
    for(int x=0; x<15; x++)
    {
        std::cout << x << ": "<< x*x << std::endl; 
    }

std::cout << "Cube of numbers(0-5): " << std::endl;
int y=0;
    while(y<6)
    {
        std::cout  << y << ": "<< y*y*y << std::endl;
        y++;
    }
}