#include "LibrarySystem.h"

int main() {
    LibrarySystem librarySystem;

    // Populate library with books
    librarySystem.addBook("Introduction to Algorithms", "Thomas H. Cormen");
    librarySystem.addBook("The C++ Programming Language", "Bjarne Stroustrup");

    // Display available books
    librarySystem.displayAvailableBooks();

    // Check out a book
    librarySystem.checkOutBook("Introduction to Algorithms");

    // Display available books after checking out
    librarySystem.displayAvailableBooks();

    // Return a book
    librarySystem.returnBook("Introduction to Algorithms");

    // Display available books after returning
    librarySystem.displayAvailableBooks();

    return 0;
}
