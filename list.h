#ifndef _list_
#define _list_
#include "Node.h"
#include "shape2D.h"
#include <iostream>
using namespace std;

template <class T>
class list{
    private:
        static int len;
        Node<T>* data;
        Node<T>* head;
        Node<T>* tail;
    public:
        void add(T t);
        void insert(T t, int index);
        T get(int idex);
        void del(int index);
        static int length();

        void sort();
        void display();
};
#endif