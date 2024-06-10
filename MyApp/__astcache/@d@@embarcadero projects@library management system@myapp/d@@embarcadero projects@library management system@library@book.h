#ifndef BOOK_H
#define BOOK_H

#include <string>
#include <vector>
#include <ctime>

class Book
{
	public:
		Book(const std::string& title, const std::string& author,
			const int& ISBN, bool available);

		std::string getTitle() const;
		std::string getAuthor() const;
		std::time_t getPurchaseDate() const;
		std::time_t getDueDate() const;
		std::time_t getReturnDate() const;
		int getISBN() const;
		bool getAvailability ()const;


		void setTitle(const std::string& title);
		void setAuthor(const std::string& author);
		void setPurchaseDate(std::time_t date);
		void setDueDate(std::time_t date);
		void setReturnDate(std::time_t date);
		void setISBN(const int& isbn);
		void setAvailability (bool available);

	private:
		std::string title;
		std::string author;
        std::time_t purchaseDate;
		std::time_t dueDate;
		std::time_t returnDate;
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

