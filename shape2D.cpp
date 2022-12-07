#include<iostream>
#include <string.h>
#include"shape2D.h"
using namespace std;

bool shape2D::operator<(shape2D &tmp){
    if(this->area() < tmp.area()){
        return true;
    }
    return false;
}
bool shape2D::operator>(shape2D &tmp){
    if(this->area() > tmp.area()){
        return true;
    }
    return false;
}

ostream & operator<<(ostream &out, const shape2D &tmp){
    out << "------------------------------------\n";
    out << tmp.name;
    out << "\narea: " << tmp.Area  << endl;
    return out;
}

shape2D::shape2D(){
    cout << "Empty 2D shape created..." << endl;
}
shape2D::shape2D(float a, int pnts, const char* _name):shape(a){
    this->name = new char[strlen(_name)+1]; 
    strcpy(name, _name);
    this->x = new float[pnts];
    this->y = new float[pnts];
}
shape2D::~shape2D(){
    if(this->x != NULL && this->y != NULL){
        delete[] this->x;
        delete[] this->y;
        delete[] this->name;
    }else{
        cout << "2D shape deleted..." << endl;
    }
}