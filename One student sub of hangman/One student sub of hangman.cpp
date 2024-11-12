#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;

int main()
{
    string answer;
    cout << "Enter a word to be guessed" << "\n";
    cin >> answer;

    string guessedAnswer;
    for (int i = 0; i < answer.length(); i++)

    {

        guessedAnswer.append("*");

    }
    while (guessedAnswer != answer)

    {
        cout << "Enter a letter that might be in the word...\n";
        string guessedLetter;

        cin >> guessedLetter;
        if (answer.find(guessedLetter) != -1)

        {

            cout << "You guessed a correct letter!" << "\n";

            int guessedLetterPosition = answer.find(guessedLetter);  

            guessedAnswer.replace(guessedLetterPosition, 1, guessedLetter);
            cout << guessedAnswer << "\n";

        }

    }


}

