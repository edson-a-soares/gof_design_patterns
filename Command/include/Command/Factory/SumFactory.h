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

#ifndef GOF_COMMAND_SUM_FACTORY_H
#define GOF_COMMAND_SUM_FACTORY_H

#include "Command/Function/Sum.h"
#include "Command/Operation/Addition.h"
#include "Command/Factory/CommandFactory.h"

using GoF::Command::Function::Sum;
using GoF::Command::Operation::Addition;
using GoF::Command::Factory::CommandFactory;

namespace GoF {

    namespace Command {

        namespace Factory {

            class SumFactory : public CommandFactory {
            public:
                virtual Command * createCommand(double, double);
                virtual Receiver * createReceiver(double, double);

            };

        }

    }

}

#endif
