#include <time.h>
#include <string.h>
#include <stdlib.h>

char *generate_word();

int main(int argc, char const *argv[])
{
    int n = 20;
    char *long_word = (char *)malloc(sizeof(char) * 4);
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        long_word = (char *)realloc(long_word, (strlen(long_word) + sizeof(char) * 8));
        strcat(long_word, generate_word());
    }
    int ipn = 0;
    for (int i = 0; i < (n * 4); i++)
    {
        if (long_word[i] == 'I')
        {
            i++;
            if (long_word[i] == 'P')
            {
                i++;
                if (long_word[i] == 'N')
                {
                    i++;
                    ipn++;
                }
                else
                    i++;
            }
            else
                i += 2;
        }
        else
            i += 3;
    }
    cout << ipn << endl;
    cout << long_word << endl;
    return 0;
}

char *generate_word()
{
    char *word = (char *)malloc(sizeof(char) * 4);
    word[0] = (rand() % 25) + 65;
    word[1] = (rand() % 25) + 65;
    word[2] = (rand() % 25) + 65;
    word[3] = ' ';
    word[4] = '\0';
    return word;
}