#include <random>
#include <iostream>
#include <cstdlib>
#include <vector>

void compute_pdf(int seed, int nsamples, double mu, double sigma, double xmin, double xmax, int nbins);

int main(int argc, char **argv)
{
  const int SEED = std::atoi(argv[1]);
  const int NSAMPLES = std::atoi(argv[2]);
  const double MU = std::atoi(argv[3]);
  const double SIGMA = std::atoi(argv[4]);
  const double XMIN = std::atoi(argv[5]);
  const double XMAX = std::atoi(argv[6]);
  const int NBINS = std::atoi(argv[7]);

  compute_pdf(SEED, NSAMPLES, MU, SIGMA, XMIN, XMAX, NBINS);
}

void compute_pdf(int seed, int nsamples, double mu, double sigma, double xmin, double xmax, int nbins)
{
  // random stuff
  std::mt19937 gen(seed);
  std::normal_distribution<double> dis{mu, sigma};
  // TODO: histogram stuff
    // xmin 1 xmax 10 n bins 9   delta 10-1/9 = 1 > xmin += vector con 9 entradas 1 2 3 4 5 6 7 8 9 10
    // vector (1-2,2-3,3-4,4-5,5-6,6-7,7-8,8-9,9-10)
    //          1   2   3   4   5               9

  for(int n = 0; n < nsamples; ++n) {
    double r = dis(gen);
    // TODO: fill here the counting histogram stuff

    // for (auto x: vector)
    // if x < r < x+1 toca revisar que el rango eg 1-2 es un label imaginario, en realidad todos son 0

    //      x += 1

  }
  // TODO: compute and print the pdf

}
