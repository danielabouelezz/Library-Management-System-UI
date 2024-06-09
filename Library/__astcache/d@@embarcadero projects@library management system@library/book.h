#ifndef BOOK_H
#define BOOK_H

#include <string>
#include <vector>

class Book
{
	public:
		Book(const std::string& title, const std::string& author,
			const int& ISBN, bool available);

		std::string getTitle() const;
		std::string getAuthor() const;
		int getISBN() const;
		bool getAvailability ()const;

		void setTitle(const std::string& title);
		void setAuthor(const std::string& author);
		void setISBN(const int& isbn);
		void setAvailability (bool available);

	private:
		std::string title;
		std::string author;
		int ISBN;
		bool available;
};

class BookHandler
{
	public:
		BookHandler();
		void addBook(Book& book);

	private:
		std::vector<Book> books;
};

#endif // BOOK_H

