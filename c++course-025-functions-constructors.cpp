#include <iostream>
using namespace std;

// Class - Template para Book
class Book {
    public:

    // Especificar o que a classe Book terá
    // Blue print for the book data type

        string title;
        string author;
        int pages;
        
        // Constructor -  Basic data
        Book(){
            title = "No title";
            author = "No author";
            pages = 0;
        }
        
        // Constructor
        Book(string aTitle, string aAuthor, int aPages){
            title = aTitle;
            author = aAuthor;
            pages = aPages;
        }
};

int main()
{
    // Utilizando Constructors
    Book book1("Warcraft - A Trilogia da Fonte do Sol", "Richard A. Knaak & Jae-Hwan Kim", 130); // Primeiro livro

    cout << "Nome do livro: "<< book1.title << endl;
    cout << "Autor: " << book1.author << endl;
    cout << "Páginas: " << book1.pages << endl << endl;

    Book book2("World of Warcraft - Death Knight", "Dan Jolley", 150); // Segundo livro

    cout << "Nome do livro: "<< book2.title << endl;
    cout << "Autor: " << book2.author << endl;
    cout << "Páginas: " << book2.pages << endl << endl;

    Book book3("Warcraft - Lendas - Volume 1", "Vários Autores", 180); // Terceiro livro

    cout << "Nome do livro: "<< book3.title << endl;
    cout << "Autor: " << book3.author << endl;
    cout << "Páginas: " << book3.pages << endl;

    return 0;
}
