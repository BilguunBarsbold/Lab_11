#include<iostream>
#include"square.h"
using namespace std;

float square::area(){
    return this->length*this->length;
}
float square::perimeter(){
    return this->length*4;
}
void square::set_coord(float a, float b){
    this->x[0] = a;
    this->y[0] = b;
    
    this->x[1] = this->x[0] + this->length;
    this->x[2] = this->x[1];
    this->x[3] = this->x[2] - this->length;

    this->y[1] = this->y[0];
    this->y[2] = this->y[1] - this->length;
    this->y[3] = this->y[2];
}
void square::show_data(){
    cout << "------------------------------------" << endl;
    cout << "Square     " << length << endl;
    cout << "area:      " << this->area() << endl;
    cout << "perimeter: " << this->perimeter() << endl;
    cout << "coords:    (" << this->x[0] << " " << this->y[0]  << ")\n" << endl;
}

square::square():shape2D(1, 4, "square"){
    Area = this->area();
    set_coord(0, 0);
    cout << "Default square created..." << endl;
}
square::square(float a):shape2D(a, 4, "square"){
    Area = this->area();
    set_coord(0, 0);
}
square::~square(){
    //cout << "Square deleted..." << endl;
}