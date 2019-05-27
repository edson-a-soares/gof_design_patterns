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

#ifndef GoF_Visitor_CommissionedEmployee_INCLUDED
#define GoF_Visitor_CommissionedEmployee_INCLUDED

#include <iostream>
#include "Visitor/AbstractEmployee.h"
#include "Visitor/EmployeeVisitableInterface.h"

namespace GoF {
namespace Visitor {


    class CommissionedEmployee :
        public AbstractEmployee,
        public EmployeeVisitableInterface
    {
    public:
        CommissionedEmployee(const std::string & name, const std::string & ssn, double sales = 0.0, double rate  = 0.0);
        double grossSales() const;
        double commissionRate() const;
        std::string toString() const override;
        void accept(std::shared_ptr<EmployeeVisitorInterface>) override;
        friend std::ostream & operator<<(std::ostream & os, const CommissionedEmployee & employee);

    private:
        double _grossSales;
        double _commissionRate;

    };


} }

#endif
