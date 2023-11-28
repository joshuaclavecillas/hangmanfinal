#include <string>
#include <vector>
#include <iostream>
#include <cstring>
#include "functions.h"

using namespace std;


//declare functions

void greet();
void display_misses(int misses);
void display_status(vector<char> incorrect, string answer);
void end_game(string answer, string codeword);
void backbone(string answer, string codeword, vector<char> incorrect, bool guess, int misses, int z, char x);


int main()
{
    int n, z;
    greet();
    cout << "please enter number of players (1 or 2)" << endl;
    cin >> n;
    if (n == 1) {
        string codeword = "codingcleverly";
        
        int misses = 0;
        vector<char> incorrect; 
        bool guess = false;
        char  x = '_';
        z = 0;
        for (int i = 0; codeword[i]; i++)
        {
            z++;
        }
        string answer(z, x);
        
        backbone(answer, codeword, incorrect, guess, misses, z, x);
        end_game(answer, codeword);
    }
    else
    {
        string codeword;

        cout << "player 1 close your eyes while player 2 enters the codeword:";
        cin >> codeword;
        for (int o = 0; o < 100; o++)
        {
            cout << "\n";
        }
        int misses = 0;
        vector<char> incorrect;
        bool guess = false;
        char  x = '_';

        
        
        z = 0;
        for (int i = 0; codeword[i]; i++)
        {
            z++;
        }
        string answer(z, x);
        backbone(answer, codeword, incorrect, guess, misses, z, x);
        
        end_game(answer, codeword);
    }
    return 0;
}
