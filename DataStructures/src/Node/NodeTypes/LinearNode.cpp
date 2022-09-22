#include "LinearNode.h"

namespace byteofsin::datastructures {
    template <class Type>
    LinearNode<Type>::LinearNode() : Node<Type> {
        this->nextNode = nullptr;
    };

    template <class Type>
    LinearNode<Type>::LinearNode(Type initialData) : Node<Type>(initialData) {
        this->nextNode = nullptr;
    }

    template <class Type>
    LinearNode<Type>::LinearNode(Type initialData, LinearNode<Type>* initialNextNode) : Node<Type> (initakData) {
        this->nextNode = initialNextNode;
    }

    template <class Type>
    void LinearNode<Type>::SetNextNode(LinearNode<Type>* nextNodePointer){
        this->nextNode = nextNodePointer;
    }
    
    template <class Type> 
    LinearNode<Type>* LinearNode<Type>::GetNextNode(){
        return this->nextNode;
    }

}