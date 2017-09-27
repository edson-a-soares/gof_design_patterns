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

#ifndef GOF_STATE_ISTATE_H
#define GOF_STATE_ISTATE_H

#include "State/Operation.h"

namespace GoF {

    namespace State {

        enum Operation;
        class StateContext;
        class IState
        {
        public:
            virtual ~IState()
            { }

            virtual double getResult() = 0;
            virtual void setOperand(double) = 0;
            virtual void setOperation(Operation) = 0;
            virtual void setContext(StateContext *) = 0;

        };

    }

}

#endif
