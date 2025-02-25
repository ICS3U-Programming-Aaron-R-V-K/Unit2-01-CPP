// Copyright (2025) Aaron Rivelino All rights reserved.
// Date: Feb 24, 2025
// The code takes the input of the person
// Uses it to calculate the Perimeter and Area of a rectangle

#include <iostream>
  int main() {
    // Get the input from the user
    int length, width;
    std::cout << "Enter length of the rectangle (cm): ";
    std::cin >> length;

    std::cout << "Enter width of the rectangle (cm): ";
    std::cin >> width;

    // Formulas and calculations
    int area = length * width;
    int perimeter = 2 * (length + width);

    // Display the results
    std::cout << "The area of the rectangle is: "
    << area << " cm^2" << std::endl;
    std::cout << "The perimeter of the rectangle is: "
    << perimeter << " cm" << std::endl;

    return 0;
}
