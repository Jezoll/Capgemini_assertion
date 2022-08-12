#pragma once
#include <iostream>
#include <vector>
using namespace std;



class Book
{
		string title;
		string author;
		string genre;
		int year;
		string publisher;
		int nrOfPages;
public:
	
	Book()
	{

	}
	Book(string t, string a, string g, int y, string p, int nr)
	{
		title = t;
		author = a;
		genre = g;
		year = y;
		publisher = p;
		nrOfPages = nr;
	}
	void setTitle(string t)
	{
		t = title;
	}
	string getTitle()
	{
		return title;
	}
	void setAuthor(string a)
	{
		a = author;
	}
	string getAuthor()
	{
		return author;
	}
	void setGenre(string g)
	{
		g = genre;
	}
	string getGenre()
	{
		return genre;
	}
	void setPublisher(string p)
	{
		p = publisher;
	}
	string getPublisher()
	{
		return publisher;
	}
	void setPages(int p)
	{
		p = nrOfPages;
	}
	int getNrOfPages()
	{
		return nrOfPages;
	}
	void setYear(int y)
	{
		y = year;
	}
	int getYear()
	{
		return year;
	}
	/*void display()
	{
		cout << title << endl;
		cout << author << endl;
		cout << genre << endl;
		cout << (string)year << endl;
		cout << title << endl;
	}*/
};

