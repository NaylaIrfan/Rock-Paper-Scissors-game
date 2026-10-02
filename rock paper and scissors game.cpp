#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int userChoice;
    int computerChoice;

    // Generate a random choice for the computer
    srand(time(0));
    computerChoice = rand() % 3 + 1;

    cout << "===== ROCK PAPER SCISSORS =====" << endl;
    cout << "1. Rock" << endl;
    cout << "2. Paper" << endl;
    cout << "3. Scissors" << endl;

    cout << "Enter your choice (1-3): ";
    cin >> userChoice;

    // Check user's choice
    if (userChoice < 1 || userChoice > 3)
    {
        cout << "Invalid choice!" << endl;
        return 0;
    }

    // Show user's choice
    cout << "Your choice: ";

    if (userChoice == 1)
    {
        cout << "Rock" << endl;
    }
    else if (userChoice == 2)
    {
        cout << "Paper" << endl;
    }
    else
    {
        cout << "Scissors" << endl;
    }

    // Show computer's choice
    cout << "Computer's choice: ";

    if (computerChoice == 1)
    {
        cout << "Rock" << endl;
    }
    else if (computerChoice == 2)
    {
        cout << "Paper" << endl;
    }
    else
    {
        cout << "Scissors" << endl;
    }

    // Find the winner
    if (userChoice == computerChoice)
    {
        cout << "Result: Draw!" << endl;
    }
    else if ((userChoice == 1 && computerChoice == 3) ||
             (userChoice == 2 && computerChoice == 1) ||
             (userChoice == 3 && computerChoice == 2))
    {
        cout << "Result: You Win!" << endl;
    }
    else
    {
        cout << "Result: Computer Wins!" << endl;
    }

    return 0;
}
