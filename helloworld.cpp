#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  // Constants
  double nu = 0.1;  // kinematic viscosity
  double dx = 0.01; // grid spacing in x direction
  double dy = 0.01; // grid spacing in y direction
  double dt = 0.01; // time step

  // Variables
  double u[101][101]; // velocity in x direction
  double v[101][101]; // velocity in y direction
  double p[101][101]; // pressure

  // Initialize velocity and pressure fields
  for (int i = 0; i < 101; i++)
  {
    for (int j = 0; j < 101; j++)
    {
      u[i][j] = 0.0;
      v[i][j] = 0.0;
      p[i][j] = 0.0;
    }
  }

  // Iterate over time steps
  for (int t = 0; t < 10000; t++)
  {
    // Calculate intermediate velocity fields
    double ustar[101][101];
    double vstar[101][101];
    for (int i = 1; i < 100; i++)
    {
      for (int j = 1; j < 100; j++)
      {
        ustar[i][j] = u[i][j] + dt * (-u[i][j] * (u[i + 1][j] - u[i - 1][j]) / (2 * dx) - v[i][j] * (u[i][j + 1] - u[i][j - 1]) / (2 * dy) - (p[i + 1][j] - p[i - 1][j]) / (2 * dx) + nu * ((u[i + 1][j] - 2 * u[i][j] + u[i - 1][j]) / (dx * dx) + (u[i][j + 1] - 2 * u[i][j] + u[i][j - 1]) / (dy * dy)));
        vstar[i][j] = v[i][j] + dt * (-u[i][j] * (v[i + 1][j] - v[i - 1][j]) / (2 * dx) - v[i][j] * (v[i][j + 1] - v[i][j - 1]) / (2 * dy) - (p[i][j + 1] - p[i][j - 1]) / (2 * dy) + nu * ((v[i + 1][j] - 2 * v[i][j] + v[i - 1][j]) / (dx * dx) + (v[i][j + 1])));
      }
    }
  }
  return 0;
}
