#include "Node.h"


namespace byteofsin::datastructures {
    template <class Type>
    Node<Type> :: Node() {

    };

    template <class Type>
    Node<Type> :: Node(Type initialData){
        this->data = initialData;
    }

    template <class Type>
    void Node<Type> :: Set(Type newData){
        this->data = newData;
    }

    template <class Type>
    Type Node<Type> :: Get(){
        return data;
    }
};