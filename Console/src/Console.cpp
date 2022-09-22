#include <Console/Console.h>
#include <iostream>

namespace byteofsin::console {
    void Console::AddItem(std::string& commandName, void* pointer, ConsoleType itemType){
        Command cmd;
        cmd.name = commandName;
        cmd.variablePointer = pointer;
        cmd.type = itemType;

        consoleItems.push_back(cmd);
    }
    void Console::RemoveItem(const std::string& command) {

    }

    void Console::SetDefaultCommand(ConsoleFunction defaultFunction){
        this->defaultCommand = defaultFunction;
    }

    bool Console::ParseCommandLine(){
        

        return true;
    }

    bool Console::Contains(std::string compare){
        //for(std::list<ConsoleCommand>::iterator itor; itor )

        return false;
    }
}