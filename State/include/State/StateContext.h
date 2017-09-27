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

#ifndef GOF_STATE_STATE_CONTEXT_H
#define GOF_STATE_STATE_CONTEXT_H

#include <string>
#include "State/IState.h"
#include "State/EmptyState.h"
#include "State/ResultState.h"
#include "State/OperationState.h"
#include "State/OperandLeftState.h"
#include "State/OperandRightState.h"

namespace GoF {

    namespace State {

        enum Operation;
        class AbstractState;
        class StateContext
        {
        public:
            StateContext();
            ~StateContext();

            void clear();
            IState * getCurrentState();

        private:
            // Using friendship to void creating lots of set and get repetitive methods
            // in both two related classes. A choice with no side effects in this scenario.
            //
            // Note.: The same technique is used in a similar way in the GoF Pattern's book.
            friend class AbstractState;

            // Only the states must be able to change the context state.
            void changeState(IState *);

            double leftOperand;
            double rightOperand;
            Operation operation;
            IState * currentState;

        };

    }

}

#endif
