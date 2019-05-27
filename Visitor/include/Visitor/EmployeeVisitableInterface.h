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

#ifndef GoF_Visitor_EmployeeVisitableInterface_INCLUDED
#define GoF_Visitor_EmployeeVisitableInterface_INCLUDED

#include <memory>
#include "Visitor/EmployeeVisitorInterface.h"

namespace GoF {
namespace Visitor {


    class EmployeeVisitableInterface {
    public:
        virtual ~EmployeeVisitableInterface() = default;
        virtual void accept(std::shared_ptr<EmployeeVisitorInterface>) = 0;

    };


} }

#endif
