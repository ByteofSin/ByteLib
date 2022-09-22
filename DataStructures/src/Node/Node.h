#pragma once
namespace byteofsin::datastructures {
    template <class Type>
    class Node {
        public:
            Node();
            Node(Type data);
            void Set(Type data);
            Type Get();
        protected:
            Type data;
    };
};