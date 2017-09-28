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

#ifndef GOF_FACTORY_METHOD_MODEL_S_H
#define GOF_FACTORY_METHOD_MODEL_S_H

#include <string>
#include "FactoryMethod/ICar.h"

namespace GoF {

    namespace FactoryMethod {

        class ModelS : public ICar
        {
        public:
            ModelS(
                const std::string &,
                const std::string &,
                const std::string &,
                const std::string &
            );

            std::string getName() const;
            std::string getColor() const;
            std::string getVehicleYear() const;
            std::string getOriginCountry() const;

        private:
            std::string name;
            std::string color;
            std::string vehicleYear;
            std::string originCountry;

        };

    }

}

#endif
