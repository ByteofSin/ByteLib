#pragma once

#include "../Node.h"

namespace byteofsin::datastructures {
    template <class Type>
    class LinearNode : public Node<Type> {
        public:
            LinearNode();
            LinearNode(Type initialData);
            LinearNode(Type initialData, LinearNode<Type> * initialNextNode);

            void SetNextNode(LinearNode<Type> * nextNodePointer);

            LinearNode<Type>* GetNextNode();     

        protected:
            LinearNode<Type>* nextNode;
    };
};
