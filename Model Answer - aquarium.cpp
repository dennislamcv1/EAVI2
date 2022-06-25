#include <iostream>


/**
    Placeholder object used to represent fish
**/
class Fish {};


/** 
    This is the class definition for our aquarium. It contains
    the variables and functions we expect our aquarium to support.
**/
class Aquarium {

    public:
        /**
            Here, we include functions for the primary ways we'd like to
            interact with the aquarium. We should be able to feed fish,
            clean the tank, and add or remove fish as needed.
        **/
        void feed_fish();
        void clean_tank();
        void add_fish(Fish fish);
        void remove_fish(Fish fish);
        void remove_all_fish();

        /**
            Here, we include the getter and setter functions for the tank's
            dimension. This way, we can easily adjust the size of the tank.
        **/
        float get_tank_width();
        float get_tank_length();
        float get_tank_depth();

        float set_tank_width();
        float set_tank_length();
        float set_tank_depth();

    private:
        /** 
            These are the private variables we need to track for our aquarium.
            We need to keep track of the fish that are currently contained in
            the tank as well as the dimensions of the tank.
        **/
        static const int max_fish_capacity = 10;
        Fish fish_list[max_fish_capacity];
        float tank_width;
        float tank_length;
        float tank_depth;
};

int main() {
    // Declare acquarium
    Aquarium aquarium;
    std::cout << "aquarium declared";
    return 0;
}