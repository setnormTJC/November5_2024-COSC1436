#include <iostream>
#include <string>

using namespace std;

int main() {
    // Step 1: Prompt Player 1 to enter a word
    string answer;
    cout << "Enter a word to be guessed: ";
    cin >> answer;

    // Step 2: Initialize guessedAnswer with asterisks matching the length of the answer
    system("cls"); 
    string guessedAnswer;
    for (int i = 0; i < answer.length(); i++) {
        guessedAnswer.append("*");
    }

    // Display initial state
    cout << "The word to guess: " << guessedAnswer << endl;

    // Step 3: Start a loop that runs until the word is fully guessed
    while (guessedAnswer != answer) {
        // Step 4: Prompt Player 2 to guess a letter
        string guessedLetter;
        cout << "Guess a letter: ";
        cin >> guessedLetter;

        // Step 5: Check if the guessed letter is in the answer
        if (answer.find(guessedLetter) != string::npos) {
            cout << "You guessed a correct letter!" << endl;

            // Step 6: Update guessedAnswer to reveal the guessed letters
            for (int i = 0; i < answer.length(); i++) {
                if (answer[i] == guessedLetter[0]) {
                    guessedAnswer[i] = guessedLetter[0];
                }
            }
        }
        else {
            cout << "Incorrect guess. Try again!" << endl;
        }

        // Display the current state of guessedAnswer after each guess
        cout << "Current word: " << guessedAnswer << endl;
    }

    // Step 7: Congratulate the player on guessing the word
    cout << "Congratulations! You've guessed the word: " << answer << endl;

    return 0;
}
