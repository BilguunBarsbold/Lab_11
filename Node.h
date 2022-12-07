#ifndef _Node_
#define _Node_

template <class Elm> class Node{
    public:
        Elm element;
        Node<Elm>* next = nullptr;
        ~Node(){
            if(element != nullptr)
                delete element;
        }
};
#endif