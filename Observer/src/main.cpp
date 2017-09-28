#include <iostream>
#include "Observer/Event/Event.h"
#include "Observer/Event/MouseEvent.h"
#include "Observer/Event/TouchEvent.h"
#include "Observer/Event/KeyboardEvent.h"

using GoF::Observer::Event::Event;
using GoF::Observer::Event::MouseEvent;
using GoF::Observer::Event::TouchEvent;
using GoF::Observer::Event::KeyboardEvent;
using GoF::Observer::Listener::EventListener;

int main(int argc, char * argv[]) {

    // The events
    Event * mouseEvent    = new MouseEvent();
    Event * touchEvent    = new TouchEvent();
    Event * keyboardEvent = new KeyboardEvent();

    // The listener
    EventListener * listener = new EventListener();

    mouseEvent->addEventListener(listener);
    touchEvent->addEventListener(listener);
    keyboardEvent->addEventListener(listener);

    std::cout << "\nTriggering events:\n" << std::endl;
    mouseEvent->trigger();
    touchEvent->trigger();
    keyboardEvent->trigger();

    mouseEvent->removeEventListener(listener);
    touchEvent->removeEventListener(listener);
    keyboardEvent->removeEventListener(listener);


    delete listener;

    return 0;

}
