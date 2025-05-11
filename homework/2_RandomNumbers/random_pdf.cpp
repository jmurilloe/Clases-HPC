#include <random>
#include <iostream>
#include <cstdlib>
#include <vector>

void compute_pdf(int seed, int nsamples, double mu, double sigma, double xmin, double xmax, int nbins);

int main(int argc, char **argv)
{
  const int SEED = std::atoi(argv[1]);
  const int NSAMPLES = std::atoi(argv[2]);
  const double MU = std::atof(argv[3]);
  const double SIGMA = std::atof(argv[4]);
  const double XMIN = std::atof(argv[5]);
  const double XMAX = std::atof(argv[6]);
  const int NBINS = std::atoi(argv[7]);

  compute_pdf(SEED, NSAMPLES, MU, SIGMA, XMIN, XMAX, NBINS);
}

void compute_pdf(int seed, int nsamples, double mu, double sigma, double xmin, double xmax, int nbins)
{
  // random stuff
  std::mt19937 gen(seed);
  std::normal_distribution<double> dis{mu, sigma};
  // TODO: histogram stuff
    // xmin 1 xmax 10 n bins 9   delta 10-1/9 = 1 > xmin += vector con 9 entradas
    // vector (1-2,2-3,3-4,4-5,5-6,6-7,7-8,8-9,9-10)
    //          1   2   3   4   5               9
  double delta = 1.0*(xmax-xmin)/nbins;
  //std::cout << delta << "delta" << "\n ";
  std::vector<double> histo (nbins,0);
  
  for(int n = 0; n < nsamples; ++n) {
    double r = dis(gen);
    // TODO: fill here the counting histogram stuff
    int index = 0;
    for (double ii = xmin;ii<xmax;ii+= delta){
      if ( (ii< r) && (r < ii+delta)){
        histo[index] += 1; 
      }
      index++;
    
    }
    //

  }
  double valuetoplot = (2*xmin+delta)/2.0;
  for (auto x : histo){ //normalize
    x = x/nsamples;
    
    std::cout << valuetoplot  << "\t " << x << "\n";
    valuetoplot += delta;
  } 
  // TODO: compute and print the pdf

}
