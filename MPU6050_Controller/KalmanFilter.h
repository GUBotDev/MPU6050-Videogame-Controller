#pragma once

#include <StandardCplusplus.h>
#include <vector>

class KalmanFilter {
private:
	double gain;
	int memory;
	std::vector<double> values;

public:
	KalmanFilter();
	KalmanFilter(double gain, int memory);
	double Filter(double value);

};

