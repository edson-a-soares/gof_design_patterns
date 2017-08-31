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

#ifndef GOF_BUILDER_PIZZA_BUILDER_H
#define GOF_BUILDER_PIZZA_BUILDER_H

#include "Builder/Pizza.h"
#include "Builder/Size.h"
#include "Builder/Topping.h"
#include "Builder/StuffedCrust.h"

namespace GoF {

    namespace Builder {

        class PizzaBuilder
        {
        public:
            PizzaBuilder(const std::string &, const std::string &);

            Pizza * build();
            PizzaBuilder & size(Size);
            PizzaBuilder & topping(Topping);
            PizzaBuilder & stuffedCrust(StuffedCrust);

        private:
            Pizza pizza;

        };

    }

}

#endif
