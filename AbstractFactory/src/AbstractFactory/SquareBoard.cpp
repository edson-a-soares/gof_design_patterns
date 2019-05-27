#include "AbstractFactory/SquareBoard.h"

namespace GoF {
namespace AbstractFactory {


    SquareBoard::SquareBoard(std::shared_ptr<GoF::AbstractFactory::UIFactoryInterface> & factory)
        : _factory(factory)
    {
        panel  = _factory->createPanel();
        label  = _factory->createLabel();
        button = _factory->createButton();
    }

    void SquareBoard::draw()
    {
        panel->render();
        label->render();
        button->render();
    }


} }
