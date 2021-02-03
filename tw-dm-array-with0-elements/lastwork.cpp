#include <iostream>
#include <stdio.h>
#include <math.h>

#define n0 6
#define m0 6

using namespace std;
int main()
{
  // C6x6
  int w = 6;
  int h = 6;
  int multiply = 1;
  int p[n0][m0];
  int n, m;
  float n_1 = 0, n_2 = 0;
  for (n = 0; n < n0; n++)
  {
    for (m = 0; m < m0; m++)
      p[n][m] = (rand() % n, m) + 1;
    cout << "p[" << n << "," << m << "]="
        << "\t" << p[n][m] << endl;
  }
  {

    // Block for initilize all zeroes elements;
    for (n = 0; n < n0; n++)
    {
      for (m = 0; m < m0; m++)
      {
        if ((n > m) && (p[n][m] == 0))
          n_1++;
        if ((n < m) && (p[n][m] == 0))
          n_2++;
      }
      for (n = 0; n < n0; n++)
      {

        for (m = 0; m < m0; m++)
          cout << p[n][m] << "\t";
        //  Logic for zero elements ?;
        if (p[0][m])
        {
          multiply *= p[n][m];
          cout << multiply << endl;
        }
      }
    }
  }
}
