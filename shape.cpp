#include<iostream>
#include"shape.h"
using namespace std;

shape::shape(){
    //cout << "Shape created..." << endl;
}
shape::shape(int a){
    this->length = a;
}
shape::~shape(){
    //cout << "Shape deleted..." << endl;
}