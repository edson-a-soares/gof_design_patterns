#include <iostream>
#include "Prototype/WhiteSquare.h"
#include "Prototype/BlackSquare.h"
#include "Prototype/CheckersBoard.h"

namespace GoF {

    namespace Prototype {

        CheckersBoard::CheckersBoard()
            : lines(0),
              columns(0),
              objectsContainer { }
        {
            init();
        }

        CheckersBoard::CheckersBoard(const int _lines, const int _columns)
            : lines(_lines),
              columns(_columns),
              objectsContainer { }
        {
            init();
        }

        CheckersBoard::~CheckersBoard()
        {
            objectsContainer.erase(objectsContainer.begin(), objectsContainer.end());
            objectsContainer.clear();
        }

        void CheckersBoard::init()
        {
            objectsContainer["white"] = new WhiteSquare();
            objectsContainer["black"] = new BlackSquare();
        }

        void CheckersBoard::show()
        {

            for ( int i = 0; i < columns; ++i ) {
                if ( i % 2 == 0 ) {
                    createLineBlackSquareFirst();
                    std::cout << "\n";
                } else {
                    createLineWhiteSquareFirst();
                    std::cout << "\n";
                }
            }

        }

        void CheckersBoard::createLineBlackSquareFirst()
        {

            for ( int i = 0; i < lines; ++i ) {
                if ( i % 2 == 0 ) {
                    ISquare * square = getSquare(SquareOption::BLACK);
                    square->print();
                } else {
                    ISquare * square = getSquare(SquareOption::WHITE);
                    square->print();
                }
            }

        }

        void CheckersBoard::createLineWhiteSquareFirst()
        {

            for ( int i = 0; i < lines; ++i ) {
                if ( i % 2 == 0 ) {
                    ISquare * square = getSquare(SquareOption::WHITE);
                    square->print();
                } else {
                    ISquare * square = getSquare(SquareOption::BLACK);
                    square->print();
                }
            }

        }

        ISquare * CheckersBoard::getSquare(SquareOption option)
        {

            ISquare * squareType = nullptr;
            switch (option) {
                case WHITE:
                    squareType = objectsContainer["white"]->clone();
                    break;

                case BLACK:
                    squareType = objectsContainer["black"]->clone();
                    break;

            }

            return squareType;

        }

    }

}
