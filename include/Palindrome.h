#ifndef PALINDROME_H
#define PALINDROME_H
#include <string>

using namespace std;


class Palindrome
{
    public:
        int estPalindrome();
        int longueur_chaine();
        void inverse_chaine();
        Palindrome();
        virtual ~Palindrome();
};

#endif // PALINDROME_H
