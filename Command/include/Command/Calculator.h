/*
 * (C) Copyright 2017 Edson (http://edsonaraujosoares.com) and others.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * Contributors:
 *     Edson Araújo Soares
 */

#ifndef GOF_COMMAND_CALCULATOR_H
#define GOF_COMMAND_CALCULATOR_H

#include "Command/Action.h"
#include "Command/Command.h"
#include "Command/Invoker.h"
#include "Command/Factory/CalculatorCommandFactory.h"

using GoF::Command::Action;
using GoF::Command::Invoker;
using GoF::Command::Command;
using GoF::Command::Factory::CalculatorCommandFactory;

namespace GoF {

    namespace Command {

        class Calculator
        {
        public:
            Calculator(CalculatorCommandFactory &, Invoker &);

            void redo();
            void undo();
            double getResult();
            void calculate(double, double, Action);

        private:
            double result;
            Invoker & invoker;
            CalculatorCommandFactory & commandFactory;
            Command * getCommand(double, double, Action);

        };

    }

}

#endif
