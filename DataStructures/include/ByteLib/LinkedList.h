/* List made by chained pointers */

//#ifndef BYTEOFSIN_LINKED_LIST_H
//#define BYTEOFSIN_LINKED_LIST_H

#pragma once

#include "../Node/NodeTypes/LinearNode.h"

namespace byteofsin::datastructures {
    template <class Type>
    class LinkedList : public Type {
        public:
            LinkedList();
            LinkedList(Type initialData);
            LinkedList(Type* initialData);

            ~LinkedList();

            void Add(Type newData);

            void Remove(int index);

            void Get(int index);

        protected:
            LinearNode<Type>* head;
            LinearNode<Type>* tail;
            int size = 0;
    };
};