// BookCollection.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//
#include <algorithm>
#include <iterator>
#include <iostream>
#include <vector>
#include "Book.h"
using namespace std;
//void print(const vector<Book>& c)
//{
//    for (Book b : c)
//    {
//        cout <<  << " ";
//    }
//    cout << "\n";
//};
string convertToString(char* Book)
{
    string s = Book;
    return s;
}
int main()
{   
    
    
    Book b;
    vector<Book> booksCollection;
    vector<Book>::iterator it;
    
    int choice;
    cout << "Book collection managing app.\n";
    cout << "1.Add new book\n";
    cout << "2.Delete a book from collection\n";
    cout << "3.Reports\n";
    cout << "4.Close the program\n";
    cin >> choice;
    while (choice != 5)
    {
        if (choice == 1)
        {
            string title;

            cout << "Insert the title of the book" << endl;
            cin >> title;

            string author;

            cout << "Insert the author of the book" << endl;
            cin >> author;
            string genre;

            cout << "Insert the genre of the book" << endl;
            cin >> genre;

            int year;

            cout << "Insert the year of publishing of the book" << endl;
            cin >> year;

            string publisher;

            cout << "Insert the publisher of the book" << endl;
            cin >> publisher;

            int nr;

            cout << "Insert the number of pages" << endl;
            cin >> nr;
            Book b = Book(title,author,genre,year,publisher,nr);
            /*cout << b.getTitle() << endl;
            cout << b.getAuthor() << endl;
            cout << b.getGenre() << endl;
            cout << b.getYear() << endl;
            cout << b.getPublisher() << endl;
            cout << b.getNrOfPages() << endl;*/
            booksCollection.push_back(b);
            
            cout << booksCollection.size();
            /*for (it = booksCollection.begin(); it != booksCollection.end(); it++)
            {
                printf (booksCollection.size());
            }*/
            choice = 0;
        }
        if (choice == 2)
        {
            /*string str = convertToString(booksCollection);
            cout << str;*/
            size_t i;
            cin >> i;
            it = booksCollection.begin() + i;
            
            booksCollection.erase(it);
            cout << booksCollection.size();
            choice = 0;
            
        }
        if (choice == 3)
        {


        }
        if (choice == 4)
        {
            return 0;

        }
        if (choice == 0)
        {
            cout << "Book collection managing app.\n";
            cout << "1.Add new book\n";
            cout << "2.Delete a book from collection\n";
            cout << "3.Reports\n";
            cin >> choice;
        }

        }
    
}



