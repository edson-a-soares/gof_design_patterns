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

#ifndef GoF_AbstractFactory_SquareBoard_INCLUDED
#define GoF_AbstractFactory_SquareBoard_INCLUDED

#include <memory>
#include "AbstractFactory/UIFactoryInterface.h"
#include "AbstractFactory/PanelInterface.h"
#include "AbstractFactory/LabelInterface.h"
#include "AbstractFactory/ButtonInterface.h"

namespace GoF {
namespace AbstractFactory {


    class SquareBoard
    {
    public:
        explicit SquareBoard(std::shared_ptr<UIFactoryInterface> &);
        void draw();

    private:
        std::shared_ptr<PanelInterface> panel;
        std::shared_ptr<LabelInterface> label;
        std::shared_ptr<ButtonInterface> button;
        std::shared_ptr<UIFactoryInterface> _factory;

    };


} }

#endif
