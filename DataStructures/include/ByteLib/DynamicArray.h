/* Dynamically resizing array */

#pragma once

namespace byteofsin::datastructures {
    template <class Type>
    class DynamicArray : public Type{
        public:
            DynamicArray(bool allowEmptyIndices = false);
            DynamicArray(Type initialData, bool allowEmptyIndices = false);
            DynamicArray(Type* initialData, bool allowEmptyIndices = false);

            int GetSize();

            void Add(Type newData); // Adds data to the end of the array
            void Set(Type newData, int index);
            void Delete(int index);
            Type Get(int index);

        private:
            Type* data;
            int size;

            bool allowEmpty;
    };
};
