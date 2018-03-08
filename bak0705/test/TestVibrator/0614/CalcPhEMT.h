#ifndef CALCPHEMT_H_
#define CALCPHEMT_H_

#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;

void CalcPhLead(string slabel, const vector<double>& omg, double delta);

void CalcPhEMT(string slabel, const vector<double>& omg, double delta);

#endif
