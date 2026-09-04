#include <iostream>
#include <iomanip> // For std::fixed and std::setprecision

using namespace std; 

// Function prototypes
void sortScores(double* scores, int numScores);
double calculateAverage(double* scores, int numScores);
void awardMedals(double* scores, int numScores);
void displayResults(double* scores, int numScores, double average);

int main() {
    int numAthletes = 0;
    // Get number of scores from user
    cout << "Enter the number of athletes: ";
    cin >> numAthletes;

    // Dynamically allocate array for scores

    double* scores = new double[numAthletes];

    // Get scores from user
    cout << "Enter the scores of the athletes: " << endl;
    for (int i = 0; i <numAthletes; i++)
    {
        cout << "Scores for athlete "<< (i + 1) << ": ";
        cin >> *(scores + i);
    }

    // Sort scores

    // Calculate average score

    // Award medals

    // Display results

    // Deallocate memory for scores array

    return 0;
}