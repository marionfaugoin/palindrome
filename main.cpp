#include <iostream>
#include <string>
#include <cstring>
#define MAX 30

using namespace std;

bool testPalindrome(char mot[MAX])
{
    char motInv[MAX];

    // Inverser le mot
    for (int i=0;i<strlen(mot)+1;i++)
    {
        motInv[(strlen(mot)-1)-i] = mot[i];
    }

    // Vérifier si les mots retourné et original sont égaux
    int j = 0;
    bool ok=1;
    if (ok=1)
    {
            if(mot[j]==motInv[j])
            {
                if(j=strlen(mot)-1)
                   {
                       return ok;
                   }
                j++;
            }
            else
            {
                ok = 0;
            }
    }
    else
    {
        return ok;
    }
    return ok;
}

int main()
{
    char motEntre[MAX];

    cout << "############################## PALINDROME.TEST ##############################" << endl;
    cout << endl;
    cout << "Entrez un mot: " << endl; cin >> motEntre;

    cout << "------------------------------- RESULTATS -----------------------------------" << endl;

    if(testPalindrome(motEntre)==1)
    {
        cout << "En effet, (" << motEntre << ") est bien un palindrome! " << endl;
    }
    else
    {
        cout << "Non, ce mot (" << motEntre << ") n'est pas un palindrome! " << endl;
    }

    cout << endl;
    cout << "#############################################################################" << endl;
    return 0;
}
