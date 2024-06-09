#pragma hdrstop

#include "Book.h"
#include <algorithm>
#include <cmath>

#pragma package(smart_init)

Book::Book(const std::string& title, const std::string& author,
		const int& isbn, bool available)
		: title(title), author(author), ISBN(isbn), available(available){}

	std::string Book::getTitle() const {return title;}
	std::string Book::getAuthor() const{return author;}
	int Book::getISBN() const{return ISBN;}
	bool Book::getAvailability() const {return available;}

	void Book::setTitle(const std::string& title){this->title = title;}
	void Book::setAuthor(const std::string& Author){this->author = author;}
	void Book::setISBN(const int& isbn){ISBN = isbn;}
	void Book::setAvailability(bool available){this->available = available;}

BookHandler::BookHandler() {}

	void BookHandler::addBook(Book& book){books.push_back(book);}

