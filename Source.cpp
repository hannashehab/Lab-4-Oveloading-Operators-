//
//  main.cpp
//  Lab2
//
//  Created by Mohamed Basuony on 17/09/2022.
//

#include <iostream>
using namespace std;

class Box {

private:
    double length;      // Length of a box
    double breadth;     // Breadth of a box
    double height;      // Height of a box
public:
    double getVolume(void) {
        return length * breadth * height;
    }
    void setLength(double len) {
        length = len;
    }
    void setBreadth(double bre) {
        breadth = bre;
    }
    void setHeight(double hei) {
        height = hei;
    }
    void output() {
        cout << "Length of the box is " << length << endl;
        cout << "Breadth of the box is " << breadth << endl;
        cout << "Height of the box is " << height << endl;
    }

    // Overload + operator to add two Box objects.
    Box operator+(const Box& b) {
        Box b1;
        b1.length = this->length + b.length;
        b1.breadth = this->breadth + b.breadth;
        b1.height = this->height + b.height;
        return b1;
    }
    //Overload - operator to subtract two Box objects
    Box operator-(const Box& b) {
        Box b1;
        b1.length = this->length - b.length;
        b1.breadth = this->breadth - b.breadth;
        b1.height = this->height - b.height;
        return b1;
    }
    //Overload postfix increment operator(i++)
    Box operator++(int) {
        this->length++;
        this->breadth++;
        this->height++;
        return *this;
    }
    //Overload prefix increment operator (++i)
    Box operator++() {
        this->length++;
        this->breadth++;
        this->height++;
        return *this;
    }
};
// Main function for the program
int main() {
    Box Box1;                // Declare Box1 of type Box
    Box Box2;                // Declare Box2 of type Box
    Box Box3;                // Declare Box3 of type Box
    Box Box4;                 // Declare Box4 of type Box
    Box Box5;                 // Declare Box5 of type Box
    Box Box6;                 // Declare Box6 of type Box
    double volume = 0.0;     // Store the volume of a box here

    // box 1 specification
    Box1.setLength(6.0);
    Box1.setBreadth(7.0);
    Box1.setHeight(5.0);

    // box 2 specification
    Box2.setLength(12.0);
    Box2.setBreadth(13.0);
    Box2.setHeight(10.0);

    // volume of box 1
    volume = Box1.getVolume();
    cout << "Volume of Box1 : " << volume << endl;

    // volume of box 2
    volume = Box2.getVolume();
    cout << "Volume of Box2 : " << volume << endl;

    // Add two object as follows:
    Box3 = Box1 + Box2;

    // volume of box 3
    volume = Box3.getVolume();
    cout << "Volume of Box3 : " << volume << endl;

    cout << "Original dimensions of Box1: \n";
    Box1.output();

    cout << "Original dimensions of Box2: \n";
    Box2.output();

    cout << "Subtracting Box1 from Box2 \n";
    Box4 = Box1 - Box2;
    Box4.output();

    cout << "Postfix incrementing Box1 \n";
    Box5 = Box1++;
    Box5.output();

    cout << "Prefix incrementing Box1 \n";
    Box6 = Box1++;
    Box6.output();

    return 0;
}