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

#ifndef GOF_PROTOTYPE_SQUARE_BOARD_H
#define GOF_PROTOTYPE_SQUARE_BOARD_H

#include <map>
#include <string>
#include "Prototype/ISquare.h"
#include "Prototype/WhiteSquare.h"
#include "Prototype/BlackSquare.h"
#include "Prototype/SquareOption.h"

namespace GoF {

    namespace Prototype {

        class CheckersBoard
        {
        public:
            CheckersBoard();
            CheckersBoard(const int, const int);

            ~CheckersBoard();

            void show();

        private:
            int lines;
            int columns;
            ISquare * getSquare(SquareOption);
            std::map<std::string, ISquare *> objectsContainer;

            void init();
            void createLineBlackSquareFirst();
            void createLineWhiteSquareFirst();

        };

    }

}

#endif
