#include "LibrarySystem.h"

void LibrarySystem::addBook(const std::string& title, const std::string& author) {
    books.emplace_back(title, author);
}

void LibrarySystem::checkOutBook(const std::string& title) {
    for (Book& book : books) {
        if (book.getTitle() == title && !book.isCheckedOut()) {
            book.checkOut();
            std::cout << "Book checked out: " << book.getTitle() << std::endl;
            return;
        }
    }
    std::cout << "Book not available for checkout: " << title << std::endl;
}

void LibrarySystem::returnBook(const std::string& title) {
    for (Book& book : books) {
        if (book.getTitle() == title && book.isCheckedOut()) {
            book.returnBook();
            std::cout << "Book returned: " << book.getTitle() << std::endl;
            return;
        }
    }
    std::cout << "Invalid return: " << title << std::endl;
}

void LibrarySystem::displayAvailableBooks() const {
    std::cout << "Available Books:" << std::endl;
    for (const Book& book : books) {
        if (!book.isCheckedOut()) {
            std::cout << book << std::endl;
        }
    }
    std::cout << std::endl;
}
