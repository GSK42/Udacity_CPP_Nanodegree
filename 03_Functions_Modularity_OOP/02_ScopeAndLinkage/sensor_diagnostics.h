/* In the header file (sensor_diagnostics.h):
Add header guards
Declare a global variable totalErrors using extern
Declare the function runSensorDiagnostics */
#ifndef SENSOR_DIAGNOSTICS_H
#define SENSOR_DIAGNOSTICS_H
#include <iostream>
#include <string> 
extern int totalErrors; 
void runSensorDiagnostics(std::string sensorName,int localErrors);

#endif