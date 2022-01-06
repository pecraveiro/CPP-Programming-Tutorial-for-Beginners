#include <iostream>
using namespace std;

class Movie { // Class -  Template
    private:
    string rating;
    
    public:
        // Information
        string title;
        string director;
        
        Movie(string aTitle, string aDirector, string aRating){ // Constructor
            title = aTitle;
            director = aDirector;
            setRating(aRating);
        }
        
    void setRating(string aRating) {
        rating = aRating;
    }
};

int main() // Função principal
{
    Movie avengers("The Avengers", "Joss Whedon", "PG-13");
    
    cout << avengers.title;
    
    return 0;
}

/*
Atualmente, os Estados Unidos organizam os conteúdos audiovisuais em Rated G (público em geral — todas as idades admitidas); Rated PG (sugestão de orientação parental — algum material pode não ser adequado para crianças); Rated PG-13 (pais fortemente advertidos — algum material pode ser impróprio para crianças menores de 13 anos);

Fonte: https://valkirias.com.br/classificacao-indicativa-e-o-publico-jovem-no-horror/
*/
