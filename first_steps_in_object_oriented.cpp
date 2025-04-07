
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
    /*
    string maChaine("Bonjour !");
    //Création d'un objet 'maChaine' de type string et initialisation
    cout << maChaine << endl;
    //Affichage du string comme si c'était une chaîne de caractères

    maChaine = "Bien le bonjour !";
    cout << maChaine << endl;
    */

    string chaine1("Bonjour !");
    string chaine2("Comment allez-vous ?");
    string chaine3;
 
    chaine3 = chaine1 + chaine2; // 3... 2... 1... Concaténatioooooon
    cout << chaine3 << endl;

    if (chaine1 == chaine2) // Faux
    {
        cout << "Les chaines sont identiques." << endl;
    }
    else
    {
        cout << "Les chaines sont differentes." << endl;
    }

    cout << "Longueur de la chaine : " << chaine3.size() << endl;

    chaine3.erase();
    cout << "La chaine contient : " << chaine3 << endl;
    
    /*
    cout << chaine3.substr(3) << endl;
    */

    cout << chaine.substr(3, 4) << endl;

    return 0;
}