
#include <iostream>
#include <string> // Obligatoire pour pouvoir utiliser les objets string

using namespace std;
 
 
int main()
{
    /*
    char texte[100];
    */
    /*
    vector<char> texte;
    */

    string maChaine("Bonjour !");
    //Création d'un objet 'maChaine' de type string et initialisation
    cout << maChaine << endl;
    //Affichage du string comme si c'était une chaîne de caractères

    maChaine = "Bien le bonjour !";
    cout << maChaine << endl;
    
    return 0;
}