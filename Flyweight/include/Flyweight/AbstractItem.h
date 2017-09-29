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

#ifndef GOF_FLYWEIGHT_ABSTRACT_ITEM_H
#define GOF_FLYWEIGHT_ABSTRACT_ITEM_H

#include "Flyweight/Point.h"

namespace GoF {

    namespace Flyweight {

        class AbstractItem
        {
        public:
            virtual ~AbstractItem() = 0;

        protected:
            AbstractItem(const char);

        protected:
            char symbol;
            const Point & position;

        };

    }

}

#endif
