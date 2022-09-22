/** Title: Command Line Interface
 *	@version: v0.0.0.1
 *	@author: ByteofSin
 *	Contacts: 
 *		Email: ByteofSin@gmail.com 
 *	Created: 08/22/2022 
 *	Modified: 08/22/2022
 *	@brief: A basic system for handling command line interfaces in a way that can scale. Focus is placed on the input. Tied in with the logging system
 *	Externals: 
 *      - https://www.flipcode.com/archives/Creating_a_Scalable_Console_System_with_STL-Part_1.shtml
 *	@bug: none yet
 */

//TODO: Find a way to use stream but default to std::cout

#ifndef BOS_CLI_H   
#define BOS_CLI_H


#include <string>
#include <vector>
#include <list>
//TODO: Implement a scalable command system for debugging and potentially in gui use

namespace byteofsin::console {
    /*	Item Types
     ========================= */
    enum Type {
        UnsignedChar,
        Char,
        UnsignedInteger,
        Integer,
        Float,
        String,
        Function
    };

    /*	Function Structure
     ========================= */
    typedef void (*ConsoleFunction) (const std::vector<std::string>&);

    /*	Command Structure
     ========================= */
    typedef struct {
        std::string name;
        byteofsin::console::Type type;

        union {
            void* variablePointer;
            byteofsin::console::ConsoleFunction test;
        };
    } Command;
    
    /*	Alias's
     ========================= */
    using ConsoleType = byteofsin::console::Type;
    using ConsoleCommand = byteofsin::console::Command;

    /*	Interface
     ========================= */
    class Console {
        public:
            /*	Lifecycle Management
             ========================= */
            Console(){};
            ~Console(){};
           
            /*	Runtime Management
             ========================= */
            /** @brief Adds a command to the commands list
             */
            void AddItem(std::string& commandName, void* pointer, ConsoleType itemType);
            void RemoveItem(const std::string& command);

            /** @brief Sets the default command to a specified command
             */
            void SetDefaultCommand(ConsoleFunction defaultFunction);

            bool Contains(std::string compare);

        private:
            std::vector<std::string> commandBuffer;
            std::list<ConsoleCommand> consoleItems;
            ConsoleFunction defaultCommand;
            
            bool ParseCommandLine();

        protected:
            std::list<std::string> textBuffer;
            std::string commandLine;
    };
};

#endif