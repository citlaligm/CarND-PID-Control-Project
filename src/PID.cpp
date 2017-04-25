#include "PID.h"
#include <vector>

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kpi, double Kii, double Kdi) {
  Kp = Kpi;
  Ki = Kii;
  Kd = Kdi;
}


static std::vector<double> prev_cte;

void PID::UpdateError(double cte) {
  double tau_p = Kp;
  double tau_d = Kd;
  double tau_i = Ki;
  double diff_cte;
  prev_cte.push_back(cte);
  diff_cte = prev_cte.back();

  p_error = tau_p * cte ;
  d_error = tau_d * diff_cte;
//  d_error = tau_i * int_cte;


}

double PID::TotalError() {
  double steer = -p_error - d_error;
  return steer;

}

