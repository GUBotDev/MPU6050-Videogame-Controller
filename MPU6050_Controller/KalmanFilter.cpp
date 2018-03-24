#include "KalmanFilter.h"

KalmanFilter::KalmanFilter() {
	this->gain = 0.5;
	this->memory = 100;
}

KalmanFilter::KalmanFilter(double gain, int memory) {
	this->gain = gain;
	this->memory = memory;
}

double KalmanFilter::Filter(double value) {
	int count = 0;
	double sum = 0;
	double avg;
	double gainInverse = (1 - gain);

	values.push_back(value);

	if ((signed int)values.size() > memory) {
		values.erase(values.begin());
	}

	for (std::vector <double>::iterator i = values.begin(); i != values.end(); ++i) {
		sum += value;
		count++;
	}

	if (count > 0) {
		avg = sum / count;
	}

	return (gain * value) + (gainInverse * avg);
}

