#pragma once
namespace byteofsin::datastructures::javascript {
    class Token {
        public:
            // Type Checking
            bool IsOjbect(){
                return isObject;
            }

            bool IsArray() {
                return isArray;
            }

            bool IsNumber() {
                return isNumber;
            }

            bool IsString(){
                return isString;
            }


        private: 
            bool isObject = false;
            bool isArray = false;
            bool isNumber = false;
            bool isString = false;
    };

    class Object : public Token {
        public:

        private:
    };

    class Array : public Token {
        public:

        private:
    };

    class Number : public Token {
        public:
            int GetAsInt(){

            }

            float GetAsFloat(){

            }

            double GetAsDouble(){

            }

            double Get(){
                
            }

        private:
    };

    class String : public Token {
        public:

        private:        
    };
}