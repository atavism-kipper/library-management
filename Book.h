#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book {
public:
    Book(const std::string& title, const std::string& author);

    const std::string& getTitle() const;
    bool isCheckedOut() const;
    void checkOut();
    void returnBook();

private:
    std::string title;
    std::string author;
    bool checkedOut;
};

#endif // BOOK_H
