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

#ifndef GOF_FACTORY_METHOD_ICAR_H
#define GOF_FACTORY_METHOD_ICAR_H

#include <string>

namespace GoF {

    namespace FactoryMethod {

        class ICar
        {
        public:
            virtual ~ICar()
            { };

            virtual std::string getName() const = 0;
            virtual std::string getColor() const = 0;
            virtual std::string getVehicleYear() const = 0;
            virtual std::string getOriginCountry() const = 0;

        };

    }

}

#endif
