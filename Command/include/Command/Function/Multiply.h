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

#ifndef GOF_COMMAND_MULTIPLY_H
#define GOF_COMMAND_MULTIPLY_H

#include "Command/Command.h"
#include "Command/Receiver.h"
#include "Command/Operation/Division.h"

using GoF::Command::Command;
using GoF::Command::Receiver;
using GoF::Command::Operation::Division;

namespace GoF {

    namespace Command {

        namespace Function {

            class Multiply : public Command
            {
            public:
                Multiply(Receiver *);
                ~Multiply();

                void undo();
                void execute();
                double getResult();

            private:
                double result;
                Receiver * performer;

            };

        }

    }

}

#endif
