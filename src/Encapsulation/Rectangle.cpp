#include <iostream>
#include "Rectangle.h"

// Constructors

// syntax 1
Rectangle::Rectangle()
    : _id{}, _width{}, _height{}
{ }

Rectangle::Rectangle(int initial_width, int initial_height)
    : _id{}, _width{initial_width}, _height{initial_height}
{ }

Rectangle::Rectangle(int initial_id, int initial_width, int initial_height)
    : _id{initial_id}, _width{initial_width}, _height{initial_height}
{ }

// syntax 2
/*
Rectangle::Rectangle()
{
    this -> _id = {};
    this -> _width = {};
    this -> _height = {};
}

Rectangle::Rectangle(int initial_width, int initial_height)
{
    this -> _id = {};
    this -> _width = initial_width;
    this -> _height = initial_height;
}

Rectangle::Rectangle(int initial_id, int initial_width, int initial_height)
{
    this -> _id = initial_id;
    this -> _width = initial_width;
    this -> _height = initial_height;
}
*/

// Setters
void Rectangle::set_id(int initial_id)
{
    this -> _id = initial_id;
}

void Rectangle::set_width(int initial_width)
{
    this -> _width = initial_width;
}

void Rectangle::set_height(int initial_height)
{
    this -> _height = initial_height;
}

// Getters
int Rectangle::get_width()
{
    return this -> _width;
}

int Rectangle::get_height()
{
    return this -> _height;
}

// Other functions
int Rectangle::get_area()
{
    return this -> _width * this -> _height;
}

void Rectangle::resize(int new_width, int new_height)
{
    this -> _width = new_width;
    this -> _height = new_height;
}

void Rectangle::display()
{
    std::cout << "\nClass id: " << this -> _id << '\n';
    std::cout << "Width: " << this -> _width << "; Height: " << this -> _height << '\n'; 
}