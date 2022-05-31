#include <iostream>

using namespace std;

int main() {
    bool ships[4][4] = {
        {0,1,1,0},
        {0,0,0,0},
        {0,0,1,0},
        {0,0,1,0}
    };
    // keep track of how many hits the player has and how many turns they have played in these variables
    int hits = 0;
    int numOfTurns = 0;
    // Allow the player to keep going until they have hit all four ships 
    while (hits < 4) {
        int row, column;

        cout << "Selecting the coordinates \n";

        // ask a player for a row
        cout << "Choose a row betweeen 0 and 3: ";
        cin >> row;

        // ask the player for the column
        cout << "Choose a column betweeen 0 and 3: ";
        cin >> column;

        // check if a ship exits in those coordinates


        if (ships[row][column]) {
            // if the player hit a ship, remove it by setting the value to zero
            ships[row][column] = 0;

            // increase the increment of the hit counter
            hits++;

            // tell the player that they have hit a ship and how many ships are left
            cout << "Hit! " << (4-hits) << "left.\n\n";
        } else {
            cout << "Miss \n\n";
        }

        // count how many turns the player has taken.
        numOfTurns++;
    }
    cout <<  "Victory! \n";
    cout << "You won in " << numOfTurns << " turns";

    return 0;
}