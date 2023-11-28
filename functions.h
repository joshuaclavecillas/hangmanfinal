#include <cstring>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
void greet()
{
    cout << "=====================\n";
    cout << "Hangman: The Game\n";
    cout << "=====================\n";
    cout << "Instructions: Save your friend from being hanged by guessing the letters in the codeword.\n";
}

void display_misses(int misses)
{
    if (misses == 0)
    {
        cout << "  +---+ \n";
        cout << "  |   | \n";
        cout << "      | \n";
        cout << "      | \n";
        cout << "      | \n";
        cout << "      | \n";
        cout << " ========= \n";
    }
    else if (misses == 1)
    {
        cout << "  +---+ \n";
        cout << "  |   | \n";
        cout << "  O   | \n";
        cout << "      | \n";
        cout << "      | \n";
        cout << "      | \n";
        cout << " ========= \n";
    }
    else if (misses == 2)
    {
        cout << "  +---+ \n";
        cout << "  |   | \n";
        cout << "  O   | \n";
        cout << "  |   | \n";
        cout << "      | \n";
        cout << "      | \n";
        cout << " ========= \n";
    }
    else if (misses == 3)
    {
        cout << "  +---+ \n";
        cout << "  |   | \n";
        cout << "  O   | \n";
        cout << " /|   | \n";
        cout << "      | \n";
        cout << "      | \n";
        cout << " ========= \n";
    }
    else if (misses == 4)
    {
        cout << "  +---+ \n";
        cout << "  |   | \n";
        cout << "  O   | \n";
        cout << " /|\\  | \n";
        cout << "      | \n";
        cout << "      | \n";
        cout << " ========= \n";
    }
    else if (misses == 5)
    {
        cout << "  +---+ \n";
        cout << "  |   | \n";
        cout << "  O   | \n";
        cout << " /|\\  | \n";
        cout << " /    | \n";
        cout << "      | \n";
        cout << " ========= \n";
    }
    else if (misses == 6)
    {
        cout << "  +---+ \n";
        cout << "  |   | \n";
        cout << "  O   | \n";
        cout << " /|\\  | \n";
        cout << " / \\  | \n";
        cout << "      | \n";
        cout << " ========= \n";
    }

}

void display_status(vector<char> incorrect, string answer)
{
    cout << "Incorrect Guesses: \n";

    for (int i = 0; i < incorrect.size(); i++)
    {
        cout << incorrect[i] << " ";
    }

    cout << "\nCodeword:\n";

    for (int i = 0; i < answer.length(); i++)
    {
        cout << answer[i] << " ";
    }
}




string backbone(string &answer1,string answer, string codeword, vector<char> incorrect, bool guess, int misses, int z, char x)
{
    char letter;
    while (answer!=codeword && misses < 7)
    {

        display_misses(misses);
        display_status(incorrect, answer);

        cout << "\n\nPlease enter your guess: ";
        cin >> letter;
        
        for (int i = 0; i < codeword.length(); i++)
        {
            if (letter == codeword[i])
            {
                answer[i] = letter;
                guess = true;
            }
        }
        if (guess)
        {
            cout << "\nCorrect!\n";
        }
        else
        {
            cout << "\nIncorrect! Another portion of the person has been drawn.\n";
            incorrect.push_back(letter);
            misses++;
        }
        guess = false;
    }
    answer1 = answer;
    return answer1;


}
