// Exo1.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <stdlib.h>

using namespace std;
string a;
string* adressA;

void Damage( const unsigned int a)
{
    cout << "zz" << endl;
}
void DeuxTirageAleatoire(int n)
{
    int total = 0;
    srand(time(NULL));
    n *= 10;
    for (int i = 0; i < n; i++)
    {
        int firstDice = rand() % 6 + 1;
        int secondDice = rand() % 6 + 1;
        int sum = firstDice + secondDice;
        cout << "Score " << sum<<"//";
        total += sum; 
    }
    cout << "The average throw in " << n << " tries is " << (total / n)<<endl;
}
int main()
{
    
    /*cout << "Hello World!\n";
    cin >> a;
    adressA = &a;
    cout << a<< &a<<endl;
    int u = 0;
    Damage(u);*/
    cout << "Voulez vous jouer" << endl;
    string u;
    cin >> u;
    cout << "Combien de tirage desirez vous" << endl;
    int n;
    cin >> n;
    DeuxTirageAleatoire(n);
    return 0;
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
