// Learning C++ 
// Exercise 02_08
// Arrays, by Eduardo Corpeño 

#include <iostream>

// #define AGE_LENGTH 4

int main(){
    const size_t AGE_LENGTH = 4;

    int age[AGE_LENGTH];
    float temperature[] = {31.5, 32.7, 38.9};

    age[0] = 25;
    age[1] = 40;
    age[2] = 57;
    age[3] = 37;

    std::cout << "The Age array has " << AGE_LENGTH << " elements" << std::endl;
    std::cout << "Age[0] = " << age[0] << std::endl;
    std::cout << "Age[1] = " << age[1] << std::endl;
    std::cout << "Age[2] = " << age[2] << std::endl;
    std::cout << "Age[3] = " << age[3] << std::endl;
    std::cout << std::endl;
    std::cout << "Temp[0] = " << temperature[0] << std::endl;
    std::cout << "Temp[1] = " << temperature[1] << std::endl;
    std::cout << "Temp[2] = " << temperature[2] << std::endl;
    std::cout << std::endl;
    std::cout << "Total Age = " << age[0] + age[1] + age[2] + age[3] << std::endl;
    std::cout << std::endl;
    // std::cout << "Average Age = " << (age[0] + age[1] + age[2] + age[3]) / AGE_LENGTH << std::endl;
    // std::cout << std::endl;
    std::cout << "Total Temp = " << temperature[0] + temperature[1] + temperature[2]<< std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
