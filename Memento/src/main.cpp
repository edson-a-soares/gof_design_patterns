#include <iostream>
#include "Memento/Book.h"
#include "Memento/BookManager.h"

using GoF::Memento::Book;
using GoF::Memento::BookManager;

int main(int argc, char * argv[]) {

    Book redDragon = Book("B0000547E1", "Red Dragon", "Thomas Harris");
    Book theHobbit = Book("054792822X", "The Hobbit", "J.R.R. Tolkien");
    Book harryPotter = Book("0545582881", "Harry Potter and the Philosopher's Stone", "J.K. Rowling");

    BookManager bookManager;

    std::cout << "\nAdding books and performing a report: \n" << std::endl;
    bookManager.addBook(theHobbit);
    bookManager.addBook(redDragon);
    bookManager.addBook(harryPotter);

    bookManager.report();

    std::cout << "Performing Undo operation and reporting: \n" << std::endl;
    bookManager.undo();
    bookManager.report();

    std::cout << "Performing Undo operation and reporting again: \n" << std::endl;
    bookManager.undo();
    bookManager.report();

    std::cout << "Performing Undo operation and reporting again: \n" << std::endl;
    bookManager.undo();
    bookManager.report();

    std::cout << "Performing Undo operation and reporting again: \n" << std::endl;
    bookManager.undo();
    bookManager.report();

    return 0;

}
