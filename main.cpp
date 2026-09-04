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
    sortScores(scores, numAthletes);
    // Calculate average score
    double average = calculateAverage(scores, numAthletes);

    // Award medals
    awardMedals(scores, numAthletes);

    // Display results

    // Deallocate memory for scores array

    return 0;
}

void sortScores(double* scores, int numScores)
{
    for (int i= 0; i < numScores - 1; i++)
    {
        int minIndex = i;

        for(int j=i+1; j < numScores; j++){
            if (*(scores +j) < *(scores + minIndex))
            {
                minIndex=j;
            }
        }
        
        if (minIndex != i)
        {
            double temp = *(scores + i);
            *(scores + i) = *(scores + minIndex);
            *(scores + minIndex) = temp;
        }
    }
}

    double calculateAverage(double* scores, int numScores)
    {
        double sum = 0.0;

        for (int i = 0; i < numScores; i++)
        {
            sum += *(scores + i);
        }

        return sum /numScores;
    }

    void awardMedals(double* scores, int numScores)
    {
        cout << endl << "Medal Winners: " << endl;

        if (numScores >= 1)
        {
            cout << "Gold Medal: " << *(scores+ numScores - 1) << endl;
        }
        if (numScores >=2)
        {
            cout << "Silver Medal: " << *(scores+ numScores - 2) << endl;
        }
        if (numScores >=3)
        {
            cout << "Bronze Medal: " << *(scores+ numScores - 3) << endl;
        }
    }
