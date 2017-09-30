#include "Prototype/CheckersBoard.h"

using GoF::Prototype::CheckersBoard;

int main(int argc, char * argv[]) {

    CheckersBoard checkersBoard = CheckersBoard(15, 15);
    checkersBoard.show();

    return 0;

}
