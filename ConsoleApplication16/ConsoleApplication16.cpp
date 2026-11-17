/***********************
* Платонова Софья      *
* Функции              *
* Вариант 19           *
***********************/

#include <iostream>

using namespace std;

double sumByParity(const double t[], int n, int parity) {
  double sum = 0;

  for (int index = 0; index < n; index++) {
    if ((index + 1) % 2 == parity) {
      sum += t[index];
    }
  }

  return sum;
}

int main() {
  int n;
  double t[100];

  cin >> n;

  if (!cin || n < 1 || n > 100) {
    cout << "INVALID\n";
    return 0;
  }

  for (int index = 0; index < n; index++) {
    cin >> t[index];

    if (!cin || t[index] < -1000 || t[index] > 1000) {
      cout << "INVALID\n";
      return 0;
    }
  }

  double evenSum = sumByParity(t, n, 0);
  double oddSum = sumByParity(t, n, 1);

  cout << "Sum at even positions: " << evenSum << '\n'
       << "Sum at odd positions: " << oddSum << '\n';

  return 0;
}