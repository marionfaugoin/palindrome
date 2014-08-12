#include <iostream>
#include <string>
#include "Palindrome.h"

#define MAX 40

using namespace std;

Palindrome::Palindrome()
{
}

Palindrome::~Palindrome()
{
}

int longueur_chaine(const char tab[MAX])
{
    int i;
    for (i = 0; tab[i] != '\0'; i++);
    return i;
}

void inverse_chaine(const char chaine[MAX], char inv[MAX])
{
    int i;
    int j =longueur_chaine(chaine)-1;
    for(i=0;chaine[i]!='\0',i++)
        {
            inv[i]=chaine[longueur_chaine(chaine)--];
            j--;
        }
}

int estPalindrome (char mot[MAX])
{
    //initialisation des données
    int L = longueur_chaine(mot);
    int i;
    int test=0;
    char temp[MAX];

    // on remplit temp de la chaine chaine mais à l'envers
    inverse_chaine(chaine, temp);

    // test en comparant char à char
    for (i=0;i<L; i++)
    {
        if (temp[i]!=chaine|i])
        {
            test=0;
        }
        else test=1;
    }
    return test;
}
