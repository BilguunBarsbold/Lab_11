#include "list.h"
#include <iostream>
using namespace std;

template <class T> int list<T>::len = 0;
template <class T> void list<T>::add(T t){
    data = new Node<T>;
    data->element = t;
    if(len == 0){
        head = data;
    }else{
        tail->next = data;
    }
    tail = data;
    len++;
}
template<class T> void list<T>::insert(T t, int index){
    data = new Node<T>;
    data->element = t;
    if(index < len){
        Node<T>* node = head;
        for(int i=0; i<index-1; i++){
            node = node->next;
        }
        data->next = node->next;
        node->next = data;
    }else{
        cout << "insert in last position" << endl;
        tail->next = data;
    }
    len++;
}
template<class T> T list<T>::get(int index){
    if(index < len){
        data = head;
        for(int i=0; i<index; i++){
            data = data->next;
        }
        return data->element;
    }else{
        cout << "Stack over flow!!!" << endl;
        exit(0);
    }
}
template<class T> void list<T>::del(int index){
    if(index < len-1){
        data = head;
        for(int i=0; i<index-1; i++){
            data = data->next;
        }
        Node<T>* tmp = data->next->next;
        delete data->next;
        data->next = tmp;
        len--;
    }else if(index < len){
        for(int i=0; i<index-1; i++){
            data = data->next;
        }
        delete data->next;
        data->next = nullptr;
        len--;
    }else{
        cout << "Stack over flow!!!" << endl;
        exit(0);
    }
}

template <class T> int list<T>::length(){
    return len;
}

template <class T> void list<T>::sort(){
    Node<T>* first;
    Node<T>* second;
    for(int i=0; i<len-1; i++){
        data = head;
        for(int j=0; j<len-1-i; j++){
            first = data;
            second = data->next;
            if(*(first->element) > *(second->element)){
                //cout << "testing: " << j << endl;
                T tmp;
                tmp = first->element;
                first->element = second->element;
                second->element = tmp;
            }
            data = data->next;
        }
    }
}

template <class T> void list<T>::display(){
    data = head;
    for(int i=0; i<len; i++){
        cout << *(data->element) << endl;
        data = data->next;
    }
}