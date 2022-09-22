#include "LinkedList.h"

namespace byteofsin::datastructures {
    template <class Type>
    LinkedList<Type>::LinkedList(){};

    template <class Type>
    LinkedList<Type>::LinkedList(Type initialData){
        this->Add(initialData);
    }

    template <class Type>
    LinkedList<Type>::LinkedList(Type* initialData){
        int arraySize = sizeof(initialData);

        for(int i = 0; i < arraySize; i++){
            this->Add(initialData[i]);
        }
    }

    template <class Type>
    void LinkedList<Type>::Add(Type newData){
        LinearNode<Type>* temp = this->head;

        if(this->head == nullptr){
            this->head = new LinearNode<Type>(newData)
        } else {
            while(temp.GetNextNode() != nullptr){
                temp = temp.GetNextNode();
            }

            temp->SetNextNode(new LinearNode<type>(newData));
        }
    }
}