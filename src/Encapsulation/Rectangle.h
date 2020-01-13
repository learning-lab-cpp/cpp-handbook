#pragma once

class Rectangle
{
    public:
        // Constructors
        Rectangle();
        Rectangle(int initial_width, int initial_height);
        Rectangle(int initial_id, int initial_width, int initial_height);

        // Setters
        void set_id(int initial_id);
        void set_width(int initial_width);
        void set_height(int initial_height);

        // Getters
        int get_id();
        int get_width();
        int get_height();
        int get_area();

        // Other functions
        void resize(int new_width, int new_height);
        void display();
        
    private:
        int _id;
        int _width;
        int _height;
};