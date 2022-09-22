#include "DynamicArray.h" 

namespace byteofsin::datastructures {
    //Constructors
    template <class Type>
    DynamicArray<Type>::DynamicArray(bool allowEmptyIndices = false){
        this->data = nullptr;
        this->allowEmpty = allowEmptyIndices;
    }

    template <class Type>
    DynamicArray<Type>::DynamicArray(Type initialData, bool allowEmptyIndices = false){
        this->data = new Type[1];
        this->data[0] = initialData;
        this->allowEmpty = allowEmptyIndices;
    }

    template <class Type>
    DynamicArray<Type>::DynamicArray(Type* initialData, bool allowEmptyIndices = false){
        this->size = sizeof(initialData);
        this->data = initialData;
        this->allowEmpty = allowEmptyIndices;
    }

    // Metadata Getters
    template <class Type>
    int DynamicArray<Type>::GetSize(){
        return this->size;
    }

    // Array Controls
    template <class Type>
    void DynamicArray<Type>::Add(Type newData){
        Type* tempArray = new Type[size + 1];

        for(int i = 0; i < size; i++){
            tempArray[i] = this->data[i];
        }

        tempArray[size] = newData;        
    }

    template <class Type>
    void DynamicArray<Type>::Set(Type newData, int index){
        if(index < size) {
            this->data[index] = newData;
        }
    }

    template <class Type>
    void DynamicArray<Type>::Delete(int index){
        if(this->allowEmpty){
            this->data[index] = NULL;   // TODO: Look into, this may cause issues
        } else {
            int tempIndex = 0;
            Type* tempArray = new Type[size - 1];


            for(int i = 0; i < size; i++) {
                if(!(i == index)){
                    tempArray[tempIndex] = this->data[i]
                    tempIndex += 1;
                }
            }

            this->data = tempArray;
        }
    }

    template <class Type>
    Type DynamicArray<Type>::Get(int index){
        if(this->size > index){
            return this->data[index];
        } else {
            return NULL;
        }

    }


}