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
    Book book1;
    book1.title = "Harry Potter";
    book1.author = "JK Rowling";
    book1.pages = 450;
    
    cout << "Nome do livro: "<< book1.title << endl;
    cout << "Autor: " << book1.author << endl;
    cout << "Páginas: " << book1.pages << endl << endl;
    
    Book book2;
    
    book2.title = "Lord Of The Rings";
    book2.author = "Tolkein";
    book2.pages = 690;
    
    cout << "Nome do livro: "<< book2.title << endl;
    cout << "Autor: " << book2.author << endl;
    cout << "Páginas: " << book2.pages << endl;
    
    return 0;
}

// A class is the specification, it's the blueprint, it's the template of the data type.
// An Object it's an actual instance of that class.
