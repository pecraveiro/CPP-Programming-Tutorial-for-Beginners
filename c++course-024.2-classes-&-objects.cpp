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
        //string publishingCompany;
};

int main()
{
    // Declaração de variáveis
    Book book1; // Primeiro livro
    book1.title = "Warcraft - A Trilogia da Fonte do Sol";
    book1.author = "Richard A. Knaak & Jae-Hwan Kim";
    book1.pages = 130;

    cout << "Nome do livro: "<< book1.title << endl;
    cout << "Autor: " << book1.author << endl;
    cout << "Páginas: " << book1.pages << endl << endl;

    Book book2; // Segundo livro

    book2.title = "World of Warcraft - Death Knight";
    book2.author = "Dan Jolley";
    book2.pages = 150;

    cout << "Nome do livro: "<< book2.title << endl;
    cout << "Autor: " << book2.author << endl;
    cout << "Páginas: " << book2.pages << endl << endl;

    Book book3; // Terceiro livro

    book3.title = "Warcraft - Lendas - Volume 1";
    book3.author = "Vários Autores";
    book3.pages = 180;

    cout << "Nome do livro: "<< book3.title << endl;
    cout << "Autor: " << book3.author << endl;
    cout << "Páginas: " << book3.pages << endl;

    return 0;
}
