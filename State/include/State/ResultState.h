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

#ifndef GOF_STATE_RESULT_STATE_H
#define GOF_STATE_RESULT_STATE_H

#include <iostream>
#include "State/StateContext.h"
#include "State/AbstractState.h"
#include "State/CalculationHandler.h"

namespace GoF {

    namespace State {

        class StateContext;
        class ResultState : public AbstractState
        {
        public:
            static IState & getInstance();

            void setOperand(double);

        private:
            ResultState();

            ResultState(ResultState const &)
            { }

            ResultState & operator=(ResultState const &)
            { }

        };

    }

}

#endif
