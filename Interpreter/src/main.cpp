#include <vector>
#include <string>
#include <iostream>
#include "Interpreter/InterpreterContext.h"
#include "Interpreter/RomanNumberInterpreter.h"

#include "Interpreter/One.h"
#include "Interpreter/Ten.h"
#include "Interpreter/Hundred.h"
#include "Interpreter/Thousand.h"

using GoF::Interpreter::One;
using GoF::Interpreter::Ten;
using GoF::Interpreter::Hundred;
using GoF::Interpreter::Thousand;

using GoF::Interpreter::InterpreterContext;
using GoF::Interpreter::RomanNumberInterpreter;

int main(int argc, char * argv[]) {

    std::vector<RomanNumberInterpreter *> interpreters;

    interpreters.push_back(new Thousand());
    interpreters.push_back(new Hundred());
    interpreters.push_back(new Ten());
    interpreters.push_back(new One());

    std::string input = "";
    InterpreterContext context;

    std::cout << "Type roman numbers to be interpreted or 'exit' to finish:" << std::endl;
    std::cin >> input;

    while ( input != "exit" )
    {

        context = InterpreterContext(input);

        for ( auto & interpreter : interpreters ) {
            interpreter->interpret(context);
        }

        std::cout << "You input: " << context.getContent() << std::endl;
        std::cout << "Which results in: " << context.getResult() << "\n" << std::endl;

        std::cin >> input;

    }

    std::cout << "Bye!" << std::endl;

    return 0;

}
