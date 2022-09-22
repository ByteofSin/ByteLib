#include "./Json.h"

#include <map>

namespace byteofsin::datastructures::javascript {
    // Implementation
    struct Json::Implementation {
        //Properties
    };


    // Class Definitions
    Json::~Json() = default;

    Json::Json() : implementationPtr(new Implementation) {
        
    }

}