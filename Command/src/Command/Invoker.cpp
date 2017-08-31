#include "Command/Invoker.h"

namespace GoF {

    namespace Command {

        Invoker::Invoker()
            : commandResult(0),
              commandQueue { },
              currentCommand(nullptr)
        { }

        Invoker::~Invoker()
        {
            delete currentCommand;
            commandQueue.erase(commandQueue.begin(), commandQueue.end());
            commandQueue.clear();
        }

        void Invoker::addCommand(Command * command)
        {
            commandQueue.push_back(command);
            iterator = commandQueue.rbegin();
        }

        double Invoker::getActionResult()
        {
            return this->currentCommand->getResult();
        }

        void Invoker::run(Command * command)
        {
            command->execute();
            this->addCommand(command);
            this->currentCommand = command;
        }

        void Invoker::redoAction()
        {

            if ( !this->commandQueue.empty() ) {

                if ( iterator != commandQueue.rend() ) {
                    this->currentCommand = *(--iterator);
                    this->currentCommand->execute();
                }

            }

        }

        void Invoker::undoAction()
        {

            if ( !this->commandQueue.empty() ) {

                if ( iterator != commandQueue.rend() ) {
                    this->currentCommand = *(iterator++);
                    this->currentCommand->undo();
                }

            }

        }

    }

}
