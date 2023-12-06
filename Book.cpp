#include "Book.h"

Book::Book(const std::string& title, const std::string& author)
    : title(title), author(author), checkedOut(false) {}

const std::string& Book::getTitle() const {
    return title;
}

bool Book::isCheckedOut() const {
    return checkedOut;
}

void Book::checkOut() {
    checkedOut = true;
}

void Book::returnBook() {
    checkedOut = false;
}
