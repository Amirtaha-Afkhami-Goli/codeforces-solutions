#include <iostream>
using namespace std;
int main() {
  int numberOfCompetitors;
  cin >> numberOfCompetitors;
  int kThPlace;
  cin >> kThPlace;
  int nextRoundCompetitors = 0;
  int scores[numberOfCompetitors];
  int score;
  for (int i = 0; i < numberOfCompetitors; i++){
    cin >> score;
    scores[i] = score;
  }
  for (int i = 0; i < numberOfCompetitors; i++) {
    if (scores[i] > 0 && scores[i] >= scores[kThPlace - 1]) {
      nextRoundCompetitors++;
    }
  }
  cout << nextRoundCompetitors;
  return 0;
}