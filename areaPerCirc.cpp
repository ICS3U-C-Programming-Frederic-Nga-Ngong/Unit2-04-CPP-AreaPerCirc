// Copyright (c) 2008 Frederic All rights reserved
// .
// Created by: Your Name
// Date: Month 18 2008
// Write Calculates area and circumference of a circle
#include <cmath>
#include <iostream>
int main() {
    int radius, circumference, area;
    // get the radius from the user
    std::cout << "Enter the radius of the circle (m) :";
    std::cin >> radius;
    // calculates the area and circumference
    area = M_PI * pow(radius, 2);
    circumference = M_PI * radius * 2;
    //displays area and circumference
    std::cout << "The circumference of the circle is" << circumference << "m";
    std::cout << "the area of the circle is " << area << "m²";}
