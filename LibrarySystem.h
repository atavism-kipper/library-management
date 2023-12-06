#ifndef LIBRARYSYSTEM_H
#define LIBRARYSYSTEM_H

#include "Book.h"

#include <iostream>
#include <vector>

class LibrarySystem {
public:
    void addBook(const std::string& title, const std::string& author);
    void checkOutBook(const std::string& title);
    void returnBook(const std::string& title);
    void displayAvailableBooks() const;

private:
    std::vector<Book> books;
};

#endif // LIBRARYSYSTEM_H
