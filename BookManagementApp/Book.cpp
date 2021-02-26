#include "Book.h"

Book::Book()
{
	this->ISBN = "NONE";
	this->title = "NONE";
	this->edition = "NONE";
	this->publisher = "NONE";
	this->author = "NONE";
	this->category = "NONE";
	this->year = 0;
	this->numberOfPages = 0;
}

Book::Book(string ISBN, string title, string edition, string publisher, string author, string category, int year, int numberOfPages)
{
	this->ISBN = ISBN;
	this->title = title;
	this->edition = edition;
	this->publisher = publisher;
	this->author = author;
	this->category = category;
	this->year = year;
	this->numberOfPages = numberOfPages;
}

void Book::displayBookDetails()
{
	cout << title << '\n';
	cout << ISBN << '\n';
	cout << edition << '\n';
	cout << publisher << '\n';
	cout << author << '\n';
	cout << category << '\n';
	cout << year << '\n';
	cout << numberOfPages << '\n';
}

void Book::EditBook(string ISBN, string title, string edition, string publisher, string author, string category, int year, int numberOfPages)
{
	this->ISBN = ISBN;
	this->title = title;
	this->edition = edition;
	this->publisher = publisher;
	this->author = author;
	this->category = category;
	this->year = year;
	this->numberOfPages = numberOfPages;
}