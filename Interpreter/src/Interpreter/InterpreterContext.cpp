#include "Interpreter/InterpreterContext.h"

namespace GoF {

    namespace Interpreter {

        InterpreterContext::InterpreterContext()
            : result(0),
              content (""),
              interpretedContentSize(0)
        { }

        InterpreterContext::InterpreterContext(const std::string & _content)
            : result(0),
              content(_content),
              interpretedContentSize(0)
        { }

        int InterpreterContext::getResult() const
        {
            return result;
        }

        bool InterpreterContext::isInterpreted()
        {
            return interpretedContentSize == content.size();
        }

        std::string InterpreterContext::getContent() const
        {
            return content;
        }

        void InterpreterContext::update(int counterIncrement, int valueIncrement)
        {
            result += valueIncrement;
            interpretedContentSize += counterIncrement;
        }

        std::string InterpreterContext::getNextPortion(unsigned int portionSize)
        {
            return content.substr(interpretedContentSize, portionSize);
        }

    }

}
